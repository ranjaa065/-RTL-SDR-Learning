/* Include files */

#include "FM_audio_Tx_Rx_baseband_cgxe.h"
#include "m_F7Q3pzjKoqxlBnRZueL1hB.h"

unsigned int cgxe_FM_audio_Tx_Rx_baseband_method_dispatcher(SimStruct* S, int_T
  method, void* data)
{
  if (ssGetChecksum0(S) == 1461785832 &&
      ssGetChecksum1(S) == 947496817 &&
      ssGetChecksum2(S) == 2250446468 &&
      ssGetChecksum3(S) == 2850233152) {
    method_dispatcher_F7Q3pzjKoqxlBnRZueL1hB(S, method, data);
    return 1;
  }

  return 0;
}
