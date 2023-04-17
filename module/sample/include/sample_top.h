#ifndef __SAMPLE_TOP_H__
#define __SAMPLE_TOP_H__

#include <module_base.h>

class SampleTop : public ModuleBase {
  public:
    SC_HAS_PROCESS(SampleTop);

    explicit SampleTop(const sc_core::sc_module_name sc_name);
    ~SampleTop(void);
};

#endif

