#include <stdio.h>

struct person {
  char* name;
  int   x;
  int   y;
  int   step;
};

void print_position(struct person);
void dice(struct person*, int);
void update_step(struct person*);
void update_position(struct person*, int);

main() {
  struct person iwao   = {"Iwao", 0, 0};
  struct person naoaki = {"Naoaki", 0, 0};
  int i;
  //srand(0);

  for (i = 0; i < 10; i++) {
    dice(&iwao,   i);
    dice(&naoaki, i);
  }

  print_position(iwao);
  print_position(naoaki);
  return 0;
}

void print_position(struct person p) {
  printf("%8s (%d, %d)\n", p.name, p.x, p.y);
}

void dice(struct person* p, int n) {
  update_step(p);
  update_position(p, n);
}

void update_step(struct person *p) {
  p->step = rand() % 6 + 1;
}

void update_position(struct person *p, int n) {
  if (n % 2 == 0) {
    p->x += p->step;
  } else {
    p->y += p->step;
  }
}
