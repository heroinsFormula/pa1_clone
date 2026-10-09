#include <stdio.h>
#include <stdlib.h>


int main() {
  unsigned int t1_h, t1_m, t1_s, t1_ms;
  unsigned int t2_h, t2_m, t2_s, t2_ms;
  unsigned int td_h, td_m, td_s, td_ms;

  printf("Zadejte cas t1:\n");
  scanf("%u:%u:%u,%u", &t1_h, &t1_m, &t1_s, &t1_ms);

  printf("Zadejte cas t2:\n");
  scanf("%u:%u:%u,%u", &t2_h, &t2_m, &t2_s, &t2_ms);

  if (t1_h > 24 || t2_h > 24
   || t1_m > 60 || t2_m > 60
   || t1_s > 60 || t2_s > 60
   || t1_ms > 1000 || t2_ms > 1000) {
    printf("Nespravny vstup.\n");
    return EXIT_FAILURE;
   }


  printf("Doba:  %u:%u:%u,%u\n", td_h, td_m, td_s, td_ms);
  return EXIT_SUCCESS;
}