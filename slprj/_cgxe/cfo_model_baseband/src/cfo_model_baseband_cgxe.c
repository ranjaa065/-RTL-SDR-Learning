/* Include files */

#include "cfo_model_baseband_cgxe.h"
#include "m_L8sWDG2dMjuSP9wCXvoY7.h"

unsigned int cgxe_cfo_model_baseband_method_dispatcher(SimStruct* S, int_T
  method, void* data)
{
  if (ssGetChecksum0(S) == 827549260 &&
      ssGetChecksum1(S) == 3061013712 &&
      ssGetChecksum2(S) == 923263266 &&
      ssGetChecksum3(S) == 399349937) {
    method_dispatcher_L8sWDG2dMjuSP9wCXvoY7(S, method, data);
    return 1;
  }

  return 0;
}
