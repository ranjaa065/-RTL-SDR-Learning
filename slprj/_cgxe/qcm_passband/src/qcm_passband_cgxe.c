/* Include files */

#include "qcm_passband_cgxe.h"
#include "m_pN2P2gXCx3PWpHq1BgX4ME.h"

unsigned int cgxe_qcm_passband_method_dispatcher(SimStruct* S, int_T method,
  void* data)
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
