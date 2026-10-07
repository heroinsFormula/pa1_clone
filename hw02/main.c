#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  char oper, equals;
  double a, b, c;

  printf("Zadejte rovnici:\n");

  if (scanf("%lf %c %lf %c %lf", &a, &oper, &b, &equals, &c) != 5) {
    printf("Nespravny vstup.\n");
    return EXIT_FAILURE;
  }

  if (equals != '=') {
    printf("Nespravny vstup.\n");
    return EXIT_FAILURE;
  }

  double result;
  if (oper == '+') {
    result = a + b;
  } else if (oper == '-') {
    result = a - b;
  } else if (oper == '*') {
    result = a*b;
  } else if (oper == '/') {
    result = floor(a/b); // we want integer division
  } else {
    printf("Nespravny vstup.\n");
    return EXIT_FAILURE;
  }

  if (result - c != 0) {
    printf("%.2lf != %.2lf\n", result, c);
    return EXIT_FAILURE;
  }


  printf("Rovnice je spravne.\n");
  return EXIT_SUCCESS;
}