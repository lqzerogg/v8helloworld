// Copyright 2015 the V8 project authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

#include "include/libplatform/libplatform.h"
#include "include/v8.h"

void print(const v8::FunctionCallbackInfo<v8::Value>& args) {
      //v8::Local<v8::String> source = v8::String::NewFromUtf8(isolate, "print('hello c++', 1, true, null)", v8::NewStringType::kNormal).ToLocalChecked();
  v8::HandleScope handle_scope(args.GetIsolate());
  v8::String::Utf8Value str(args.GetIsolate(), args[0]);
  std::cout << *str << " ";
  double num = args[1].As<v8::Number>()->Value();
  std::cout << num << " ";
  bool boolv = args[2].As<v8::Boolean>()->Value();
  std::cout << boolv << " ";
}

void Print(const v8::FunctionCallbackInfo<v8::Value>& args) {
  using namespace v8;
  HandleScope handle_scope(args.GetIsolate());
  Local<Context> ctx = args.GetIsolate() -> GetCurrentContext();
  if(args[0] -> IsArray()) {
    Local<Array> arr = args[0].As<Array>();
    for(int i = 0; i < arr -> Length(); ++i) {
      std::cout << arr->Get(ctx, i).ToLocalChecked().As<Number>()->Value() << " ";
    }
    std::cout << "\n";
  } else if(args[0] -> IsObject()) {
    Local<Object> obj = args[0].As<Object>();
    Local<Array> keys = obj -> GetOwnPropertyNames(ctx).ToLocalChecked();
    for(int i = 0; i < keys->Length(); ++i) {
       Local<Value> key = keys->Get(ctx,i).ToLocalChecked();
       String::Utf8Value keyStr(args.GetIsolate(), key);
       Local<Value> val = obj->Get(ctx, key).ToLocalChecked();
       std::cout << *keyStr << "=";// << val->Value() << "&"
       if(val->IsNumber()){
         std::cout << val.As<Number>()->Value();
       }else if(val->IsBoolean()) {
         std::cout << val.As<Boolean>()->Value();
       }else if(val->IsString()) {
         std::cout << *String::Utf8Value(args.GetIsolate(), val);
       }
       std::cout << " ";
    }
    std::cout << "\n";
  }
 
}



int main(int argc, char* argv[]) {
  // Initialize V8.
  v8::V8::InitializeICUDefaultLocation(argv[0]);
  v8::V8::InitializeExternalStartupData(argv[0]);
  std::unique_ptr<v8::Platform> platform = v8::platform::NewDefaultPlatform();
  v8::V8::InitializePlatform(platform.get());
  v8::V8::Initialize();

  // Create a new Isolate and make it the current one.
  v8::Isolate::CreateParams create_params;
  create_params.array_buffer_allocator =
      v8::ArrayBuffer::Allocator::NewDefaultAllocator();
  v8::Isolate* isolate = v8::Isolate::New(create_params);
  {
    v8::Isolate::Scope isolate_scope(isolate);

    // Create a stack-allocated handle scope.
    v8::HandleScope handle_scope(isolate);

    v8::Local<v8::ObjectTemplate> global=v8::ObjectTemplate::New(isolate);
    global->Set(v8::String::NewFromUtf8(isolate, "print", v8::NewStringType::kNormal).ToLocalChecked(),v8::FunctionTemplate::New(isolate, Print));
    // Create a new context.
    v8::Local<v8::Context> context = v8::Context::New(isolate, NULL, global);

    // Enter the context for compiling and running the hello world script.
    v8::Context::Scope context_scope(context);

    {
      // Create a string containing the JavaScript source code.
      //v8::Local<v8::String> source = v8::String::NewFromUtf8(isolate, "print('hello c++', 1, true, null)", v8::NewStringType::kNormal).ToLocalChecked();
      v8::Local<v8::String> source = v8::String::NewFromUtf8(isolate, "print([1,2,3,4]);print({a:1,b:true,c:'kkkk'})", v8::NewStringType::kNormal).ToLocalChecked();
	      //v8::String::NewFromUtf8Literal(isolate, "print('hello c++')");

      // Compile the source code.
      v8::Local<v8::Script> script =
          v8::Script::Compile(context, source).ToLocalChecked();

      // Run the script to get the result.
      v8::Local<v8::Value> result = script->Run(context).ToLocalChecked();

      // Convert the result to an UTF8 string and print it.
      //v8::String::Utf8Value utf8(isolate, result);
      //printf("%s\n", *utf8);
    }

  }

  // Dispose the isolate and tear down V8.
  isolate->Dispose();
  v8::V8::Dispose();
  v8::V8::ShutdownPlatform();
  delete create_params.array_buffer_allocator;
  return 0;
}
