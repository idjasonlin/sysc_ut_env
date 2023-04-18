#ifndef __MIRRORSAMPLETOP_H__
#define __MIRRORSAMPLETOP_H__
#include <module_base.h>
#include <mirror_base.h>

class MirrorSampleTop : public MirrorBase {
  public:
    explicit MirrorSampleTop(sc_module_name sc_name)
     : MirrorBase(sc_name)
     , t_sample("t_sample") {
       t_sample.register_b_transport(this, &MirrorSampleTop::b_sample);
    }

    /* Port */
    tlm_utils::simple_target_socket<MirrorSampleTop> t_sample;
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

