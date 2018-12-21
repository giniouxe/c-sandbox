#include <unistd.h>

void ft_putchar(char letter) {
  write(1, &letter, 1);
}
