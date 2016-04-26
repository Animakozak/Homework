#include <stdio.h>
void DigitCountSum (int *K, int *S, int *C) {
    while (*K) {
        *S = *S + *K % 10;
        *K = *K / 10;
        *C = *C + 1;
    }
}
int main() {
    int K, S, C, i;
    for (i = 1; i <= 5; i++) {
        C = 0;
        S = 0;
        printf ("VVedit cile: ");
        scanf ("%d", &K);
        DigitCountSum (&K, &S, &C);
        printf ("Summa: %d\t Kilkist: %d\n", S, C);
    }
    return 0;
}