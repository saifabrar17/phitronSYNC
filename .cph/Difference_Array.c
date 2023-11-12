#include <stdio.h>
#include <stdlib.h>

// Function to sort an array in ascending order
void sort(int *array, int size)
 
{
  for (int i = 0; i < size - 1; i++) {
    for (int j = i + 1; j < size; j++) {
      if (array[i] > array[j]) {
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
      }
    }
  }
}

int
 
main() {
  int T;
  scanf("%d", &T);

  while (T--) {
    int N;
    scanf("%d", &N);

    // Create an array to store the input array
    int *A = malloc(N * sizeof(int));

    // Read the input array
    for (int i = 0; i < N; i++) {
      scanf("%d", &A[i]);
    }

    // Create a copy of the input array
    int *B = malloc(N * sizeof(int));
    for (int i = 0; i < N; i++) {
      B[i] = A[i];
    }

    // Sort the copy of the input array in ascending order
    sort(B, N);

    // Create an array to store the absolute difference between A and B
    int *C = malloc(N * sizeof(int));
    for (int i = 0; i < N; i++) {
      C[i] = abs(A[i] - B[i]);
    }

    // Print the array C
    for (int i = 0; i < N; i++) {
      printf("%d ", C[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(A);
    free(B);
    free(C);
  }

  return 0;
}