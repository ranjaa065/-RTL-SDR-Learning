/* Include files */

#include "bpsk_symbol_level_transmission_cgxe.h"
#include "m_N4Q0Tx70bidfoJOZXQXGYD.h"

unsigned int cgxe_bpsk_symbol_level_transmission_method_dispatcher(SimStruct* S,
  int_T method, void* data)
{
  if (ssGetChecksum0(S) == 1548124274 &&
      ssGetChecksum1(S) == 1344905642 &&
      ssGetChecksum2(S) == 3870958385 &&
      ssGetChecksum3(S) == 885266493) {
    method_dispatcher_N4Q0Tx70bidfoJOZXQXGYD(S, method, data);
    return 1;
  }

  return 0;
}
