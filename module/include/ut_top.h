#include <module_base.h>

template <typename DUT, typename MIRROR>
class UtTop : public ModuleBase {
  public:
    explicit UtTop(sc_module_name sc_name)
      : ModuleBase(sc_name) {
      }
};

