#include "systemc.h"
#include <stdio.h>
#include <ut_top.h>
#include <sample_top.h>

int sc_main(int argc, char *argv[]) {
  printf("Hello SystemC With Test!\n");
  UtTop<SampleTop, SampleTop> *p_test =
    new UtTop<SampleTop, SampleTop>("UtTop");

  return 0;
}

