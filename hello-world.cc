// Copyright 2015 the V8 project authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

#include "include/libplatform/libplatform.h"
#include "include/v8.h"

void Print(const v8::FunctionCallbackInfo<v8::Value>& args) {
  bool first = true;
  for (int i = 0; i < args.Length(); i++) {
    //v8::HandleScope handle_scope(args.GetIsolate());
    if (first) {
       first = false;
    } else {
       std::cout << " ";
       //printf(" ");
    }
    v8::String::Utf8Value str(args.GetIsolate(), args[i]);
    std::cout << *str;
    //const char* cstr = ToCString(str);
    //printf("%s", cstr);
  }
  //printf("\n");
  std::cout << "\n";
  fflush(stdout);
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
      v8::Local<v8::String> source = v8::String::NewFromUtf8(isolate, "print('hello c++', 1, true, null)", v8::NewStringType::kNormal).ToLocalChecked();
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
