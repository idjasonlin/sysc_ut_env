#include "systemc.h"
#include <stdio.h>
#include <ut_top.h>
#include <sample_top.h>

int sc_main(int argc, char *argv[]) {
  printf("Hello SystemC With Test!\n");

  UtTop<DUT_CLASS, MIRROR_CLASS> *p_ut_top =
    new UtTop<DUT_CLASS, MIRROR_CLASS>("UtTop");

  p_ut_top->do_init();

  p_ut_top->RegTc();

  sc_start();

  return 0;
}

