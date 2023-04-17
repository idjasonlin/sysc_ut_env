#ifndef __UT_TOP_BASE_H__
#define __UT_TOP_BASE_H__

#include <module_base.h>

template <typename DUT, typename MIRROR>
class UtTopBase : public ModuleBase {
  public:
    explicit UtTopBase(sc_module_name sc_name)
      : ModuleBase(sc_name) 
      , p_dut_(nullptr)
      , p_mirror_(nullptr) {
      }

    void do_init(void) {
      p_dut_    = new DUT("DUT");
      p_mirror_ = new MIRROR("MIRROR");
      port_binding();
    }

    virtual void port_binding(void) = 0;

  private:
    DUT    *p_dut_;
    MIRROR *p_mirror_;
};

#endif

