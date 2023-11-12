#include <stdio.h>

int main() {
    int a, first, last;

    scanf("%d", &a);

    if (a >= 10 && a <= 99) {
        last = a % 10;
        first = a / 10;

        if ((first != 0 && last % first == 0) || (last != 0 && first % last == 0)) {
            printf("YES");
        } else {
            printf("NO");
        }
    } else {
        printf("NO");
    }

    return 0;
}