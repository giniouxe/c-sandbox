// header (prototypes)
#include "ft_putchar.h"

void ft_print_alphabet(void) {
  char letter, z;

  letter = 'a';
  z = 'z';

	while (letter <= z)
  	{
  		ft_putchar(letter);
  		letter++;
  	}
}

int main() {
  ft_print_alphabet();
  return 0;
}
