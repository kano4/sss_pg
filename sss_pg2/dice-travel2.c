#include <stdio.h>
#include <math.h>

struct person {
  int x;
  int y;
  int step;
};

main() {
  struct person iwao   = {0, 0};
  struct person naoaki = {0, 0};
  int i;
  int rand_num;
  //srand(0);

  for (i = 0; i < 10; i++) {
    iwao.step   = rand() % 6 + 1;
    naoaki.step = rand() % 6 + 1;
    if (i % 2 == 0) {
      iwao.x   += iwao.step;
      naoaki.x += naoaki.step;
    } else {
      iwao.y   += iwao.step;
      naoaki.y += naoaki.step;
    }
    //printf("iwao   +%d (%d, %d)\n", iwao.step,   iwao.x,   iwao.y);
    //printf("naoaki +%d (%d, %d)\n", naoaki.step, naoaki.x, naoaki.y);
  }

  printf("Iwao   (%d, %d)\n", iwao.x, iwao.y);
  printf("Naoaki (%d, %d)\n", naoaki.x, naoaki.y);
  return 0;
}
