#include "ft_putchar.h"

void ft_print_reverse_alphabet(void) {
  char letter, a;

  letter = 'z';
  a = 'a';

	while (letter >= a)
  	{
  		ft_putchar(letter);
  		letter--;
  	}
}

int main() {
  ft_print_reverse_alphabet();
  return 0;
}
