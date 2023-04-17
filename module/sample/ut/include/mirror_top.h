#ifndef __MIRROR_H__
#define __MIRROR_H__
#include <module_base.h>

class MirrorTop : public ModuleBase {
  public:
    explicit MirrorTop(sc_module_name sc_name)
     : ModuleBase(sc_name) {
    }
};

#endif

