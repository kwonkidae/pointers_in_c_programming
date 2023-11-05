#include <stdio.h>
#include <stdalign.h>

int main(void)
{
  printf("chars align at %zu and have size %zu.\n", alignof(char), sizeof(char));
  printf("chars align at %zu and have size %zu.\n", alignof(int), sizeof(int));
  printf("chars align at %zu and have size %zu.\n", alignof(double), sizeof(double));
}