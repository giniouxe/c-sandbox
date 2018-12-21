// header (prototypes)
#include <unistd.h>
#include <stdlib.h>

void ft_putstr(char *src) {
  int i = 0;

  while(src[i] != '\0')
    i++;

  int num = atoi(src);

  

  write(1, src, i);
}

void ft_atoi(char *alpha) {

}

int main(int ac, char **av) {
  if (ac == 2)
    ft_putstr(av[1]);
  else return 0;
}
