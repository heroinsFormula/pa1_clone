#include <stdio.h>
#include <stdlib.h>


int main() {
  int r;
  int g;
  int b;
  char closing_bracket;
  printf("Zadejte barvu v RGB formatu:\n");

  if (scanf(" rgb ( %d , %d , %d %c ", &r, &g, &b, &closing_bracket) != 4) {
    printf("Nespravny vstup.\n");
    return EXIT_FAILURE;
  }

  if (closing_bracket != ')') {
    printf("Nespravny vstup.\n"); // validates inputs like rgb(1, 2, 3
    return EXIT_FAILURE;
  }

  if ( r < 0 || r > 255
    || g < 0 || g > 255
    || b < 0 || b > 255){
      printf("Nespravny vstup.\n");
      return EXIT_FAILURE;
  }

  printf("#%02X%02X%02X\n", r, g, b);
  return EXIT_SUCCESS;
}