#include "systemc.h"
#include <stdio.h>
#include <ut_top.h>
#include <sample_top.h>

int sc_main(int argc, char *argv[]) {
  printf("Hello SystemC With Test!\n");
  UtTop<DUT_CLASS, MIRROR_CLASS> *p_test =
    new UtTop<DUT_CLASS, MIRROR_CLASS>("UtTop");

  return 0;
}

