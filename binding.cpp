#include <v8.h>
#include <node.h>
#include <windows.h>
using namespace std;
using namespace v8;


void HideTaskbar(const FunctionCallbackInfo<Value>& args){
  Isolate* isolate = args.GetIsolate();

  HWND hwnd = FindWindow(TEXT("Shell_traywnd"), NULL);
  HWND hwnd2 = FindWindow(TEXT("Shell_SecondaryTrayWnd"), NULL);
  ShowWindow(hwnd, 0);
  ShowWindow(hwnd2, 0);
}

void ShowTaskbar(const FunctionCallbackInfo<Value>& args){
  Isolate* isolate = args.GetIsolate();

  HWND hwnd = FindWindow(TEXT("Shell_traywnd"), NULL);
  HWND hwnd2 = FindWindow(TEXT("Shell_SecondaryTrayWnd"), NULL);
  ShowWindow(hwnd, 1);
  ShowWindow(hwnd2, 1);
}

void ToggleTaskbar(const FunctionCallbackInfo<Value>& args){
  Isolate* isolate = args.GetIsolate();

  HWND hwnd = FindWindow(TEXT("Shell_traywnd"), NULL);
  HWND hwnd2 = FindWindow(TEXT("Shell_SecondaryTrayWnd"), NULL);

  if (IsWindowVisible(hwnd)) {
    ShowWindow(hwnd, 0);
    ShowWindow(hwnd2, 0);
  }else{
    ShowWindow(hwnd, 1);
    ShowWindow(hwnd2, 1);
  }
}


void Initialize(Local<Object> exports) {
  NODE_SET_METHOD(exports, "hideTaskbar", HideTaskbar);
  NODE_SET_METHOD(exports, "showTaskbar", ShowTaskbar);
  NODE_SET_METHOD(exports, "toggleTaskbar", ToggleTaskbar);
}

NODE_MODULE(addon, Initialize);