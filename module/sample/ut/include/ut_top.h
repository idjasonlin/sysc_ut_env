#ifndef __UT_TOP_H__
#define __UT_TOP_H__

#include <ut_def.h>
#include <ut_top_base.h>

template <typename DUT, typename MIRROR>
class UtTop : public UtTopBase<DUT, MIRROR> {
  public:
    explicit UtTop(sc_module_name sc_name)
      : UtTopBase<DUT, MIRROR>(sc_name){
    }

    void port_binding(void) override;
};

#endif

