#include <ut_top.h>

#include <tc_sample.h>

template <typename DUT, typename MIRROR>
void UtTop<DUT, MIRROR>::PortBinding(void) {
  /* Implement Port Bindings here */
  /* End of Implement Port Bindings here */
}

template <typename DUT, typename MIRROR>
void UtTop<DUT, MIRROR>::RegTc(void) {
  this->AddTc(new TcSample("TcSample"));
}

template class UtTop<DUT_CLASS, MIRROR_CLASS>;

