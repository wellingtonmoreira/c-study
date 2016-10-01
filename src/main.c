#include <stdio.h>
#include <stdlib.h>
#include "numbers.h"

#define OPT_EXIT 0
#define OPT_MULTIPLY 1

void build_menu() {
  puts("\n----------------------------");
  puts("\nC Language Study Application\n");
  printf("%i - Exit\n", OPT_EXIT);
  printf("%i - Multiply Numbers\n", OPT_MULTIPLY);
}

void main() {
  while (1) {
    build_menu();
    int option;
    printf("Select your option: ");
    scanf("%i", &option);

    switch (option) {
      case OPT_EXIT : exit(0);
      case OPT_MULTIPLY : multiply_action(); break;
    }
  }
}

