#include <stdio.h>

int main() {
    int x = 12, y = 7, z = 12;

    printf("1: %d\n", x > y);
    printf("2: %d\n", x < z);
    printf("3: %d\n", x == z);
    printf("4: %d\n", x != y);
    printf("5: %d\n", !(x >= y) || (5 != (5 / 3)));
    printf("6: %d\n", !(x < y));
    printf("7: %d\n", ((x + y) * (z * 2)) == 0);
    printf("8: %d\n", ((x % 2) == 0) || ((y % 2) == 1));
    printf("9: %d\n", (x > y) && (z < y));

    return 0;
}
