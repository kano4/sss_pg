#include <stdio.h>

struct person {
  char* name;
  int   x;
  int   y;
  int   step;
};

void update_step(struct person*);
void print_position(struct person);

main() {
  struct person iwao   = {"Iwao", 0, 0};
  struct person naoaki = {"Naoaki", 0, 0};
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
  }

  print_position(iwao);
  print_position(naoaki);
  return 0;
}

void print_position(struct person p) {
  printf("%8s (%d, %d)\n", p.name, p.x, p.y);
}


void update_step(struct person *p) {
  p->step = rand() % 6 + 1;
}
