#include <stdio.h>

int main() {
  int a, b, c, j = 0;
  while (scanf("%d %d %d", &a, &b, &c) == 3) {
    j++;
    for (int i = 10; i <= 100; i++) {
      if (i % 3 == a && i % 5 == b && i % 7 == c) {
        printf("Case %d: %d\n", j, i);
        break;
      } else if (i == 100) {
        printf("Case %d: No answer\n", j);
      }
    }
  }
  return 0;
}
