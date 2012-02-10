#include <stdio.h>

#define MSG "Aho"

void echo_all_msg(int);
void echo_msg(int);
int check_include3(int);

int main(int argc, char const* argv[])
{
  int n = 301;

  //scanf("%d", &n);

  echo_all_msg(n);

  return 0;
}

void echo_all_msg(int n) {
  int i;
  for (i = 1; i <= n; i++) {
    echo_msg(i);
  }
}

void echo_msg(int n) {
  int flag;

  flag = check_include3(n);

  if (flag == 1) {
    printf("%s ", MSG);
  } else {
    printf("%d ", n);
  }
}

int check_include3(int n) {
  int tmp = n;

  if (n % 3 == 0) {
    return 1;
  }
  while (tmp != 0) {
    if (tmp % 10 == 3) {
      return 1;
      break;
    }
    tmp /= 10;
  }
  return 0;
}
