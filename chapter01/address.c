#include <stdio.h>

int main(void)
{
  char c = 1;
  // The (void *) cast is there because the %p wants a void pointer
  printf("%d %p\n", c ,(void *)&c);
  int i =2;
  printf("%d %p\n", i, (void *)&i);
  double d = 3.0;
  printf("%f %p\n", d, (void *)&d);
  return 0;
}