#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        long long Mul, A, B, C;
        scanf("%lld %lld %lld %lld", &Mul, &A, &B, &C);

       
        long long D = Mul / (A * B * C);

        if (A * B * C * D == Mul) {
            printf("%lld\n", D);
        } else {
            printf("-1\n");
        }
    }

    return 0;
}