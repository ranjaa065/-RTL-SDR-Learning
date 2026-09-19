/* Include files */

#include "FM_Tx_Rx_Passband_Sine_cgxe.h"
#include "m_pN2P2gXCx3PWpHq1BgX4ME.h"

unsigned int cgxe_FM_Tx_Rx_Passband_Sine_method_dispatcher(SimStruct* S, int_T
  method, void* data)
{
  if (ssGetChecksum0(S) == 3538567383 &&
      ssGetChecksum1(S) == 2913983045 &&
      ssGetChecksum2(S) == 885801996 &&
      ssGetChecksum3(S) == 2679616731) {
    method_dispatcher_pN2P2gXCx3PWpHq1BgX4ME(S, method, data);
    return 1;
  }

  return 0;
}
