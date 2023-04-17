#ifndef __TC_GLOBAL_BASE_H__
#define __TC_GLOBAL_BASE_H__
#include <module_base.h>

class TcGlobalBase : public ModuleBase {
 public:
  SC_HAS_PROCESS(TcGlobalBase);

  explicit TcGlobalBase(sc_module_name sc_name)
    : ModuleBase(sc_name) {
    SC_THREAD(StartTcThread);
  }


  sc_event e_start_tc;

 protected:
  // be implemented by each TC
  virtual void RunTc(void) = 0;

 private:
  /* SC_THREAD */
  void StartTcThread(void) {
    printf("WAIT START TC\n");
    wait(e_start_tc);
    printf("WAIT START TC DONE\n");
    this->RunTc();
  }
  /* End of SC_THREAD */
};

#endif

