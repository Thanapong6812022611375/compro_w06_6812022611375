#include <stdio.h>

int main() {
    double x = 10.0, y = 5.0, a = 2.0;
    double price = 100.0, quantity = 3.0, discount = 10.0, total = 500.0;
    double rate = 5.0;
    int penalty = 2, mistake = 1, score = 100;

    // 1. x = x - 4.0;
    x = 10.0;
    printf("เต็ม : x = x - 4.0; → ");
    x = x - 4.0;
    printf("x = %.1f\n", x);

    x = 10.0;
    printf("ย่อ  : x -= 4.0;   → ");
    x -= 4.0;
    printf("x = %.1f\n\n", x);

    // 2. x = 6.5 * x;
    x = 10.0;
    printf("เต็ม : x = 6.5 * x; → ");
    x = 6.5 * x;
    printf("x = %.1f\n", x);

    x = 10.0;
    printf("ย่อ  : x *= 6.5;     → ");
    x *= 6.5;
    printf("x = %.1f\n\n", x);

    // 3. x = x % (y * a);
    x = 11;
    y = 5;
    a = 2;
    printf("เต็ม : x = x %% (y * a); → ");
    x = (int)x % (int)(y * a);
    printf("x = %.0f\n", x);

    x = 11;
    printf("ย่อ  : x %%= (y * a);     → ");
    x = (int)x % (int)(y * a);
    printf("x = %.0f\n\n", x);

    // 4. x = x / (2.0 * y);
    x = 20;
    y = 4;
    printf("เต็ม : x = x / (2.0 * y); → ");
    x = x / (2.0 * y);
    printf("x = %.1f\n", x);

    x = 20;
    printf("ย่อ  : x /= (2.0 * y);     → ");
    x /= (2.0 * y);
    printf("x = %.1f\n\n", x);

    // 5. total = total + (price * quantity - discount);
    total = 500;
    printf("เต็ม : total = total + (price * quantity - discount); → ");
    total = total + (price * quantity - discount);
    printf("total = %.1f\n", total);

    total = 500;
    printf("ย่อ  : total += (price * quantity - discount);         → ");
    total += (price * quantity - discount);
    printf("total = %.1f\n\n", total);

    // 6. x = x * (1 + rate / 100);
    x = 100;
    rate = 5;
    printf("เต็ม : x = x * (1 + rate / 100); → ");
    x = x * (1 + rate / 100);
    printf("x = %.1f\n", x);

    x = 100;
    printf("ย่อ  : x *= (1 + rate / 100);     → ");
    x *= (1 + rate / 100);
    printf("x = %.1f\n\n", x);

    // 7. score = score - (penalty * (mistake + 1));
    score = 100;
    printf("เต็ม : score = score - (penalty * (mistake + 1)); → ");
    score = score - (penalty * (mistake + 1));
    printf("score = %d\n", score);

    score = 100;
    printf("ย่อ  : score -= (penalty * (mistake + 1));         → ");
    score -= (penalty * (mistake + 1));
    printf("score = %d\n", score);

    return 0;
}
