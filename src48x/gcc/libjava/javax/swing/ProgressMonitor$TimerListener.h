
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_ProgressMonitor$TimerListener__
#define __javax_swing_ProgressMonitor$TimerListener__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace java
  {
    namespace awt
    {
      namespace event
      {
          class ActionEvent;
      }
    }
  }
  namespace javax
  {
    namespace swing
    {
        class ProgressMonitor;
        class ProgressMonitor$TimerListener;
    }
  }
}

class javax::swing::ProgressMonitor$TimerListener : public ::java::lang::Object
{

public: // actually package-private
  ProgressMonitor$TimerListener(::javax::swing::ProgressMonitor *);
public:
  virtual void actionPerformed(::java::awt::event::ActionEvent *);
public: // actually package-private
  jlong __attribute__((aligned(__alignof__( ::java::lang::Object)))) timestamp;
  jint lastProgress;
  jboolean first;
  ::javax::swing::ProgressMonitor * this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_ProgressMonitor$TimerListener__
