#include <stdio.h>

int main() {
    float x = 10.0, y = 2.0, z = 3.0, a = 1.0;
    float total = 0.0, price = 100.0, quantity = 2.0, discount = 10.0;
    float rate = 5.0;
    int score = 100, penalty = 2, mistake = 3;

    // 1. x = x - 4.0;
    x = x - 4.0;          // แบบเต็ม
    printf("1. แบบเต็ม: x = %.1f\n", x);
    x -= 4.0;             // แบบย่อ
    printf("1. แบบย่อ: x = %.1f\n", x);

    // 2. x = 6.5 * x;
    x = 6.5 * x;          // แบบเต็ม
    printf("2. แบบเต็ม: x = %.2f\n", x);
    x *= 6.5;             // แบบย่อ
    printf("2. แบบย่อ: x = %.2f\n", x);

    // 3. x = x % (y + z + a);
    int xi = (int)x;
    xi = xi % (int)(y + z + a);   // แบบเต็ม
    printf("3. แบบเต็ม: x mod = %d\n", xi);
    xi %= (int)(y + z + a);       // แบบย่อ
    printf("3. แบบย่อ: x mod = %d\n", xi);

    // 4. x = x / (2.0 * x);
    x = x / (2.0 * x);    // แบบเต็ม
    printf("4. แบบเต็ม: x = %.2f\n", x);
    x /= (2.0 * x);       // แบบย่อ
    printf("4. แบบย่อ: x = %.2f\n", x);

    // 5. total = total + (price * quantity - discount);
    total = total + (price * quantity - discount);   // แบบเต็ม
    printf("5. แบบเต็ม: total = %.2f\n", total);
    total += (price * quantity - discount);          // แบบย่อ
    printf("5. แบบย่อ: total = %.2f\n", total);

    // 6. x = x * (1 + rate / 100);
    x = x * (1 + rate / 100);    // แบบเต็ม
    printf("6. แบบเต็ม: x = %.2f\n", x);
    x *= (1 + rate / 100);       // แบบย่อ
    printf("6. แบบย่อ: x = %.2f\n", x);

    // 7. score = score - (penalty * (mistake + 1));
    score = score - (penalty * (mistake + 1));       // แบบเต็ม
    printf("7. แบบเต็ม: score = %d\n", score);
    score -= (penalty * (mistake + 1));              // แบบย่อ
    printf("7. แบบย่อ: score = %d\n", score);
    return 0;
}
