#include <stdio.h>

#define MAX_X 5
#define MAX_Y 5

struct person {
  char name[10];
  int  x;
  int  y;
  int  x_direction;
  int  y_direction;
  int  step;
};

void print_position(struct person);
void dice(struct person*, int);
void update_step(struct person*);
void update_position(struct person*, int);
int  check_encounter(struct person, struct person);

main() {
  struct person iwao   = {"Iwao",   0, 0, 1, 1};
  struct person naoaki = {"Naoaki", 0, 0, 1, 1};
  int i;
  int sum_enc = 0;
  //srand(0);

  for (i = 0; i < 1000; i++) {
    dice(&iwao,   i);
    dice(&naoaki, i);
    sum_enc += check_encounter(iwao, naoaki);
  }

  print_position(iwao);
  print_position(naoaki);
  printf("Encounter %d\n", sum_enc);
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
    p->x += p->x_direction * p->step;
    if (p->x > MAX_X) {
      p->x_direction = -1;
      p->x -= 2 * (p->x - MAX_X);
    } else if (p->x < 0) {
      p->x_direction = 1;
      p->x += 2 * (0 - p->x);
    }
  } else {
    p->y += p->y_direction * p->step;
    if (p->y > MAX_Y) {
      p->y_direction = -1;
      p->y -= 2 * (p->y - MAX_Y);
    } else if (p->y < 0) {
      p->y_direction = 1;
      p->y += 2 * (0 - p->y);
    }
  }
}

int  check_encounter(struct person p1, struct person p2) {
  if (p1.x == p2.x && p1.y == p2.y) {
    return 1;
  } else {
    return 0;
  }
}
