#ifndef __MIRROR_BASE_H__
#define __MIRROR_BASE_H__
#include <module_base.h>
#include <tc_global_base.h>

class MirrorBase : public ModuleBase {
  public:
    explicit MirrorBase(sc_module_name sc_name)
      : ModuleBase(sc_name)
      , p_cur_tc_(nullptr) {
      }

    void SetCurTc(TcGlobalBase *cur_tc) {
      p_cur_tc_ = cur_tc;
    }

    /* Transport Function Hooks */
    void h_b_transport(
      tlm::tlm_generic_payload &trans,
      sc_time delay,
      uint32_t port_idx
    ) {
    }
    /* End of Transport Function Hooks */

  private:
    TcGlobalBase *p_cur_tc_;
};

#endif

