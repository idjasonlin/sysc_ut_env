#ifndef __TC_SAMPLE_H__
#define __TC_SAMPLE_H__
#include <tc_base.h>

class TcSample : public TcBase {
 public:
  explicit TcSample(sc_module_name sc_name)
    : TcBase(sc_name) {
  }

  // This is invoked by a SC_THREAD
  void RunTc(void) override {
    printf("InTcSample\n");
  }
};

#endif

