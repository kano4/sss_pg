#include <stdio.h>
//#include <stdlib.h>

int main(int argc, char const* argv[])
{
  int i, rand_num;
  //srand((unsigned)time(NULL));
  //srand(2);

  for (i = 0; i < 10; i++) {
    rand_num = rand() % 6 + 1;
    printf("出た目は %d\n", rand_num);
  }
  //printf("RAND_MAX = %d\n", RAND_MAX);

  return 0;
}
