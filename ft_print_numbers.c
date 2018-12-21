#include <unistd.h>
#include "ft_putchar.h"

void ft_print_numbers(void) {
  char number, nine;
  number = '0';
  nine = '9';

  while (number <= nine) {
    ft_putchar(number);
    number++;
  }
}

int main() {
  ft_print_numbers();
  return 0;
}
