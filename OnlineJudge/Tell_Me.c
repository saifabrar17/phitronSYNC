#include <stdio.h>
#include <stdlib.h>

int main() {
  int testCase, n, x, i;
  scanf("%d", &testCase);

  while (testCase--) {
    scanf("%d", &n);
    int *A = (int *)malloc(sizeof(int) * n);

    for (i = 0; i < n; i++) {
      scanf("%d", &A[i]);
    }

    scanf("%d", &x);

    for (i = 0; i < n; i++) {
      if (A[i] == x) {
        printf("YES\n");
        break;
      }
    }

    if (i == n) {
      printf("NO\n");
    }

    free(A);
  }

  return 0;
}
