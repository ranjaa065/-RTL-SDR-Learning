/* Include files */

#include "qcm_audio_cgxe.h"
#include "m_HJu9Ksa5a3vAXaDe8HU5aH.h"

unsigned int cgxe_qcm_audio_method_dispatcher(SimStruct* S, int_T method, void
  * data)
{
  if (ssGetChecksum0(S) == 1281482530 &&
      ssGetChecksum1(S) == 3564042915 &&
      ssGetChecksum2(S) == 1844498210 &&
      ssGetChecksum3(S) == 2627508666) {
    method_dispatcher_HJu9Ksa5a3vAXaDe8HU5aH(S, method, data);
    return 1;
  }

  return 0;
}
