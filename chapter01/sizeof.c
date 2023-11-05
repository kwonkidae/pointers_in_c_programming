#include <stdio.h>

int main(void)
{
  char c;
  // c99 에서 size_t 는 printf 포맷이 %zu 로 지정되어있다
  // For the types, you do need the parentheses
  printf("%zu %zu\n", sizeof(char), sizeof c);
  int i;
  printf("%zu %zu\n", sizeof(int), sizeof i);
  double d;
  printf("%zu %zu\n", sizeof(double), sizeof d);
  return 0;
}