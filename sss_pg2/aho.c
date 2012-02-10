#include <stdio.h>

int main(int argc, char const* argv[])
{
  int i, tmp, flag;
  int n = 45;
  char msg[] = "Aho";

  //scanf("%d", &n);

  for (i = 1; i <= n; i++) {
    if (i % 3 == 0) {
      printf("%s ", msg);
    } else {
      tmp = i;
      flag = 0;
      while (tmp != 0) {
        if (tmp % 10 == 3) {
          flag = 1;
          break;
        }
        tmp /= 10;
      }
      if (flag == 1) {
        printf("%s ", msg);
      } else {
        printf("%d ", i);
      }
    }
  }

  return 0;
}
