
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __org_w3c_dom_events_UIEvent__
#define __org_w3c_dom_events_UIEvent__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace org
  {
    namespace w3c
    {
      namespace dom
      {
        namespace events
        {
            class EventTarget;
            class UIEvent;
        }
        namespace views
        {
            class AbstractView;
        }
      }
    }
  }
}

class org::w3c::dom::events::UIEvent : public ::java::lang::Object
{

public:
  virtual ::org::w3c::dom::views::AbstractView * getView() = 0;
  virtual jint getDetail() = 0;
  virtual void initUIEvent(::java::lang::String *, jboolean, jboolean, ::org::w3c::dom::views::AbstractView *, jint) = 0;
  virtual ::java::lang::String * getType() = 0;
  virtual ::org::w3c::dom::events::EventTarget * getTarget() = 0;
  virtual ::org::w3c::dom::events::EventTarget * getCurrentTarget() = 0;
  virtual jshort getEventPhase() = 0;
  virtual jboolean getBubbles() = 0;
  virtual jboolean getCancelable() = 0;
  virtual jlong getTimeStamp() = 0;
  virtual void stopPropagation() = 0;
  virtual void preventDefault() = 0;
  virtual void initEvent(::java::lang::String *, jboolean, jboolean) = 0;
  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif // __org_w3c_dom_events_UIEvent__
