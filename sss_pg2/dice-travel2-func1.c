#include <stdio.h>

struct person {
  int x;
  int y;
  int step;
};

void update_step(struct person*);

main() {
  struct person iwao   = {0, 0};
  struct person naoaki = {0, 0};
  int i;
  int rand_num;
  //srand(0);

  for (i = 0; i < 10; i++) {
    update_step(&iwao);
    update_step(&naoaki);
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

void update_step(struct person *p) {
  p->step = rand() % 6 + 1;
}
