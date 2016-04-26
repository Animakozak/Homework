#include <stdio.h>
int main () {
    FILE *f;
    f = fopen ("d://series36.txt", "r");
    int x, a;
    int s = 0;
    int q = 0;
    while ( !feof(f) ) {
        fscanf (f, "%d", &x);
        a = x;
        while (x != 0) {
            fscanf (f, "%d", &x);
            if (x != 0 && x < a) s = 1;
        }
        if (s == 0) q = q + 1;
        s = 0;
    }
    fclose(f);
    printf ("Kilkist: %d\n", q);
    return 0;
}