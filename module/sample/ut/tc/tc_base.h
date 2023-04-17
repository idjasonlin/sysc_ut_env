#ifndef __TC_BASE_H__
#define __TC_BASE_H__
#include <tc_global_base.h>
#include <mirror_top.h>

class TcBase : public TcGlobalBase {
  public:
    explicit TcBase(sc_module_name sc_name)
      : TcGlobalBase(sc_name) {
      }

    virtual void b_sample(
        tlm::tlm_generic_payload &trans,
        sc_time &delay) = 0;

  protected:
    void h_b_transport(
        tlm::tlm_generic_payload &trans,
        sc_time &delay,
        uint32_t port_idx) override {
      switch (port_idx) {
        case MirrorTop::SAMPLE:
          b_sample(trans, delay);
          break;
        default:
          break;
      }
    }
};

#endif

