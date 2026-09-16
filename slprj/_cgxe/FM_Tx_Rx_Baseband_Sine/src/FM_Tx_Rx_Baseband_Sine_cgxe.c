/* Include files */

#include "FM_Tx_Rx_Baseband_Sine_cgxe.h"
#include "m_2XhTrJHsNOCPOwayjYHKxB.h"

unsigned int cgxe_FM_Tx_Rx_Baseband_Sine_method_dispatcher(SimStruct* S, int_T
  method, void* data)
{
  if (ssGetChecksum0(S) == 1198611916 &&
      ssGetChecksum1(S) == 868021667 &&
      ssGetChecksum2(S) == 2854901365 &&
      ssGetChecksum3(S) == 3430301828) {
    method_dispatcher_2XhTrJHsNOCPOwayjYHKxB(S, method, data);
    return 1;
  }

  return 0;
}
