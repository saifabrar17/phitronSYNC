#include <stdio.h>

int main() {
  int N;
  scanf("%d", &N);

  if (N % 2 == 0 || N < 1 || N > 21) {
    printf("Invalid input");
    return 1;
  }

  for (int i = 1; i <= N; i++) {

    for (int j = 0; j < N - i; j++) {
      printf(" ");
    }


    for (int j = 0; j < 2 * i - 1; j++) {
      printf("*");
    }

    printf("\n");
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < N - 1; j++) {
      printf(" ");
    }

    printf("#");
    printf("\n");
  }

  return 0;
}