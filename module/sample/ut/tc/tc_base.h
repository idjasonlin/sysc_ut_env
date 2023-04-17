#ifndef __TC_BASE_H__
#define __TC_BASE_H__
#include <tc_global_base.h>

class TcBase : public TcGlobalBase {
 public:
  explicit TcBase(sc_module_name sc_name)
    : TcGlobalBase(sc_name) {
    }
};

#endif

