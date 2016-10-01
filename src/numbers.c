#include <stdio.h>
#include "numbers.h"

void multiply_action() {
  int multiplicand;
  int multiplier;

  printf("Provide the multiplicand: ");
  scanf("%i", &multiplicand);
  printf("Provide the multiplier ");
  scanf("%i", &multiplier);

  printf("Result: %i\n", multiplicand * multiplier);
}
