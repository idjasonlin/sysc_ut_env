#ifndef __MIRROR_H__
#define __MIRROR_H__
#include <module_base.h>
#include <mirror_base.h>

class MirrorTop : public MirrorBase {
  public:
    explicit MirrorTop(sc_module_name sc_name)
     : MirrorBase(sc_name)
     , t_sample("t_sample") {
       t_sample.register_b_transport(this, &MirrorTop::b_sample);
    }

    /* Port */
    tlm_utils::simple_target_socket<MirrorTop> t_sample;
    /* End of Port */

    /* Port Index Declarations */
    enum {
      SAMPLE = 0,
    };
    /* End of Port Index Declarations */

  private:
    /* Transport Functions */
    void b_sample(
      tlm::tlm_generic_payload& trans,
      sc_time &delay
    ) {
      h_b_transport(trans, delay, SAMPLE);
    }
    /* End of Transport Functions */
};

#endif

