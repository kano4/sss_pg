#include <stdio.h>

struct person {
  int x;
  int y;
};

main() {
  struct person iwao = {0, 0};
  int i;
  int rand_num, step;
  //srand(0);

  for (i = 0; i < 10; i++) {
    step = rand() % 6;
    if (i % 2 == 0) {
      iwao.x += step;
    } else {
      iwao.y += step;
    }
    //printf("iwao +%d (%d, %d)\n", step, iwao.x, iwao.y);
  }

  printf("Iwao (%d, %d)\n", iwao.x, iwao.y);
  return 0;
}
