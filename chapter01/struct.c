#include <stdio.h>
#include <stdalign.h>
struct data {
  int i;
  char c;
  double d;
};

int main(void)
{
  struct data data;
  printf("sizeof data == %zu\n", sizeof data);
  printf("size of components == %zu\n", sizeof data.c + sizeof data.i + sizeof data.d);
  printf("alignof(struct data) == %zu\n", alignof(struct data));
  printf("data   at %p\n", (void *)&data);
  printf("data.c at %p\n", (void *)&data.c);
  printf("data.i at %p\n", (void *)&data.i);
  printf("data.d at %p\n", (void *)&data.d);

  return 0;
}