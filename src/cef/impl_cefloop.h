#ifndef IMPL_CEFLOOP_H
#define IMPL_CEFLOOP_H
#pragma once

#include <node.h>

namespace appjs {

class CefLoop {

public:
  static uv_timer_t timer;
  static void Init();
  static void Run();
  static void Pause();
  static void Shutdown();
  
protected:
  CefLoop (const CefLoop&);
  CefLoop& operator= (const CefLoop&);
  static void StopLoop(uv_handle_t* handle);
  static void RunLoop(uv_timer_t* handle, int status);
  static bool running_;
  static bool initialized_;

};

} /* appjs */
#endif /* end of MAIN_WINDOW_H */

