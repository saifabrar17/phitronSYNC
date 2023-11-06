#include <stdio.h>
#include <string.h>
int main() {
  int testCase;
  scanf("%d", &testCase);
  while (testCase--) {
    char string[10001];
    scanf("%s", string);
    int capital = 0, small = 0, digit = 0;
    for (int i = 0; i < strlen(string); i++) {
      if (string[i] >= 'A' && string[i] <= 'Z')
        capital++;
      else if (string[i] >= 'a' && string[i] <= 'z')
        small++;
      else if (string[i] >= '0' && string[i] <= '9')
        digit++;
    }
    printf("%d %d %d\n", capital, small, digit);
  }
  return 0;
}