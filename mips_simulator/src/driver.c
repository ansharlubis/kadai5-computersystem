#include <stdio.h>
#include <mips.h>

int main(int argc, char **argv) {

  printf("ANDDriver\n");
  andgate_driver(true, true);
  andgate_driver(true, false);
  andgate_driver(false, true);
  andgate_driver(false, false);

  printf("ORDriver\n");
  orgate_driver(true, true);
  orgate_driver(true, false);
  orgate_driver(false, true);
  orgate_driver(false, false);

  printf("NOTDriver\n");
  notgate_driver(true);
  notgate_driver(false);

  printf("NANDDriver\n");
  nandcircuit_driver(true, true);
  nandcircuit_driver(true, false);
  nandcircuit_driver(false, true);
  nandcircuit_driver(false, false);

  printf("XORDriver\n");
  xorcircuit_driver(true, true);
  xorcircuit_driver(true, false);
  xorcircuit_driver(false, true);
  xorcircuit_driver(false, false);

  printf("FADriver\n");
  fa_driver(true, true, true);
  fa_driver(true, true, false);
  fa_driver(true, false, true);
  fa_driver(true, false, false);
  fa_driver(false, true, true);
  fa_driver(false, true, false);
  fa_driver(false, false, true);
  fa_driver(false, false, false);
  
  return 0;
}
