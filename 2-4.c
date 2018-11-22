#include <stdio.h>

int main() {
  int n, m, j = 0;
  double sum;
  while (scanf("%d %d", &n, &m) == 2) {
    if (n == 0 && m == 0)
      break;
    j++;
    sum = 0;
    for (; n <= m; n++)
      sum += 1 / (float)n / (float)n;
    printf("Case %d: %0.5lf\n", j, sum);
  }
  return 0;
}
