#ifndef __MODULE_BASE_H__
#define __MODULE_BASE_H__

#include <systemc.h>

class ModuleBase : public sc_module {
  public:
    explicit ModuleBase(sc_module_name sc_name)
      : sc_module(sc_name) {
      }

  private:
};

#endif

