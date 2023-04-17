#ifndef __UT_TOP_BASE_H__
#define __UT_TOP_BASE_H__

#include <module_base.h>
#include <tc_global_base.h>

template <typename DUT, typename MIRROR>
class UtTopBase : public ModuleBase {
  public:
    SC_HAS_PROCESS(UtTopBase);

    explicit UtTopBase(sc_module_name sc_name)
      : ModuleBase(sc_name) 
      , p_dut_(nullptr)
      , p_mirror_(nullptr) {
        SC_THREAD(UtThread);
      }

    void do_init(void) {
      p_dut_    = new DUT("DUT");
      p_mirror_ = new MIRROR("MIRROR");
      PortBinding();
    }

    virtual void PortBinding(void) = 0;

    virtual void RegTc(void) = 0;

  protected:
    // Please use dynamic allocation of p_tc
    void AddTc(TcGlobalBase *p_tc) {
      v_tc_.push_back(p_tc);
      total_tc_cnt_++;
    }

    DUT    *p_dut_;
    MIRROR *p_mirror_;

  private:
    std::vector<TcGlobalBase *> v_tc_;
    uint32_t total_tc_cnt_ = 0;

    /* SC_THREAD */
    void UtThread(void) {
      wait(SC_ZERO_TIME);
      printf("UTTHREAD : %d\n",
        total_tc_cnt_);
      for (uint32_t tc_cnt = 0; tc_cnt < total_tc_cnt_; tc_cnt++) {
        v_tc_.at(tc_cnt)->e_start_tc.notify();
        printf("WAIT!\n");
        wait();
        printf("WAIT!\n");
      }
    }
    /* End of SC_THREAD */
};

#endif

