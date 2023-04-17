#ifndef __MODULE_BASE_H__
#define __MODULE_BASE_H__

#include <systemc.h>
#include <tlm_utils/simple_initiator_socket.h>
#include <tlm_utils/simple_target_socket.h>

class ModuleBase : public sc_module {
  public:
    explicit ModuleBase(sc_module_name sc_name)
      : sc_module(sc_name) {
      }

  private:
};

#endif

