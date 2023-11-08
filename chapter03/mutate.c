#include <stdio.h>

void doesnt_mutate(int i)
{
  i += 42;
}

void mutate(int *ip)
{
  *ip += 42;
}

int main(void)
{
  int j = 0;
  doesnt_mutate(j);
  printf("%d\n", j);

  mutate(&j);
  printf("%d\n", j);
  return 0;
}