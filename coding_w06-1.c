#include <stdio.h>

int main() {
    int a = 5, b = 17;
    float c = 8.5, d = 4.0;

    printf("1: a = %d, b = %d, c = %.1f, d = %.1f\n", a, b, c, d);  
    // แสดงค่าตัวแปรทั้งหมด

    printf("2: d - a = %.1f\n", d - a);       
    // 4.0 - 5 = -1.0

    printf("3: a - d = %.1f\n", a - d);       
    // 5 - 4.0 = 1.0

    printf("4: a * d = %.1f\n", a * d);       
    // 5 * 4.0 = 20.0

    printf("5: a * c = %.1f\n", a * c);       
    // 5 * 8.5 = 42.5

    printf("6: c / d = %.2f\n", c / d);       
    // 8.5 / 4.0 = 2.12

    printf("7: b / c = %.2f\n", b / c);       
    // 17 / 8.5 = 2.00

    printf("8: b %% b = %d\n", b % b);        
    // 17 % 17 = 0

    printf("9: c %% a = %.1f\n", (float)((int)c % a)); 
    // 8.5 → 8, 8 % 5 = 3 → 3.0

    printf("10: c %% d = %.1f\n", (float)((int)c % (int)d)); 
    // 8.5 → 8, 4.0 → 4, 8 % 4 = 0 → 0.0

    return 0;
}
