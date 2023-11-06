#include <stdio.h>

#define MAX_CHAR 26

int main() {
  char string[10001];
  int frequencyArr[MAX_CHAR];
  scanf("%s", string);
  for (int i = 0; i < MAX_CHAR; i++) {
    frequencyArr[i] = 0;
  }
  for (int i = 0; string[i] != '\0'; i++) {
    frequencyArr[string[i] - 'a']++;
  }

  for (int i = 0; i < MAX_CHAR; i++) {
    if (frequencyArr[i] > 0) {
      printf("%c - %d\n", 'a' + i, frequencyArr[i]);
    }
  }

  return 0;
}
