#include <stdio.h>

void swap(int*, int*);

int main() {
  int a = 1, b = 2;

  swap(&a, &b);
  printf("a = %d, b = %d\n", a, b);

  return 0;
}

void swap(int *a, int *b) {
  int tmp;
  tmp = *a;
  *a = *b;
  *b = tmp;
}
