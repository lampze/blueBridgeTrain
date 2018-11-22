#include <stdio.h>

int main() {
  int a, b, c;
  double p;
  while (scanf("%d %d %d", &a, &b, &c) == 3) {
    if (a == 0 && b == 0 && c == 0)
      break;
    p = (float)a / (float)b;
    printf("%d.", (int)p);
    while (c) {
      if (p >= 1) {
        printf("%d", (int)p);
        p -= (int)p;
      } else {
        p *= 10;
        c--;
      }
    }
  }
  if ((int)(p * 100) % 10 >= 5)
    printf("%d", (int)(p * 100) % 10 + 1);
  else
    printf("%d", (int)(p * 100) % 10);
  printf("\n");
  return 0;
}
