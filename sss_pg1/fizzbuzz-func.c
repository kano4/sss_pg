#include <stdio.h>

void fizzbuzz(int);

int main() {
  int n;

  printf("Input n = ");
  scanf("%d", &n);

  fizzbuzz(n);

  return 0;
}

void fizzbuzz(int n) {
  int i;

  for (i = 1; i <= n; i++) {
    if (i % 3 == 0 && i % 5 == 0) {
      printf("FizzBuzz\n");
    } else if (i % 3 == 0) {
      printf("Fizz\n");
    } else if (i % 5 == 0) {
      printf("Buzz\n");
    } else {
      printf("%d\n", i);
    }
  }
}
