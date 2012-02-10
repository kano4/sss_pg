#include <stdio.h>

#define N 7

int main() {
  int i, j;
  int fib[N] = {0, 1, 2, 3, 5, 8, 13};
  int flag;

  for (i = 1; i <= 16; i++) {
    flag = 0;
    for (j = 0; j < N; j++) {
      if (i == fib[j]) {
        flag = 1;
        break;
      }
    }
    if (flag == 1 && i % 5 == 0) {
      printf("FibBuzz\n");
    } else if (flag == 1) {
      printf("Fib\n");
    } else if (i % 5 == 0) {
      printf("Buzz\n");
    } else {
      printf("%d\n", i);
    }
  }
  return 0;
}
