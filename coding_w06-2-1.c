#include <stdio.h>

int main() {
    int i = 1, j = 2, k;
    printf(" 1: i = %d, j = %d, k = k(ยังไม่ได้กำหนดค่า)\n", i, j);

    k = i + j;
    printf(" 2: i = %d, j = %d, k = %d\n", i, j, k);

    i = i + (k * j);
    printf(" 3: i = %d, j = %d, k = %d\n", i, j, k);

    j = i / 2;
    printf(" 4: i = %d, j = %d, k = %d\n", i, j, k);

    k = i % 2;
    printf(" 5: i = %d, j = %d, k = %d\n", i, j, k);

    i = (j + k) * 3;
    printf(" 6: i = %d, j = %d, k = %d\n", i, j, k);

    return 0;
}
