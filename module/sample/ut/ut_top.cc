#include <ut_top.h>

#include <tc_sample.h>

template <typename DUT, typename MIRROR>
void UtTop<DUT, MIRROR>::PortBinding(void) {
  /* Implement Port Bindings here */
  // p_dut_, p_mirror_ are decalred in ut_top_base.h
  this->p_dut_->i_sample(this->p_mirror_->t_sample);
  /* End of Implement Port Bindings here */
}

template <typename DUT, typename MIRROR>
void UtTop<DUT, MIRROR>::RegTc(void) {
  this->AddTc(new TcSample("TcSample"));
}

template class UtTop<DUT_CLASS, MIRROR_CLASS>;

