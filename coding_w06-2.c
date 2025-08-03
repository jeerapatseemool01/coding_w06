#include <stdio.h>

int main() {
    // ===w06-02-01===
    printf("\n===w06-02-01===\n");

    int i = 1, j = 2, k;
    printf("1: i = %d, j = %d, k = ?\n", i, j);

    k = i + j; // k = 1 + 2 = 3
    printf("2: i = %d, j = %d, k = %d\n", i, j, k);
    i = i + (k * j); // i = 1 + (3 * 2) = 7
    printf("3: i = %d, j = %d, k = %d\n", i, j, k);

    j = j / 2; // j = 2 / 2 = 1
    printf("4: i = %d, j = %d, k = %d\n", i, j, k);
    k = i % 2; // k = 7 % 2 = 1
    printf("5: i = %d, j = %d, k = %d\n", i, j, k);

    i = (j + k) * 3; // i = (1 + 1) * 3 = 6
    printf("6: i = %d, j = %d, k = %d\n", i, j, k);
    // ===w06-02-02===
    printf("\n===w06-02-02===\n");

    double x = 1.0, y = 2.0, z;
    printf("1: x = %.1f, y = %.1f, z = ?\n", x, y);

    x = y + 5.0; // x = 2.0 + 5.0 = 7.0
    printf("2: x = %.1f, y = %.1f, z = ?\n", x, y);
    y = y / 2.0; // y = 2.0 / 2.0 = 1.0
    printf("3: x = %.1f, y = %.1f, z = ?\n", x, y);

    y = (x * 3.0) + 4.0; // y = (7.0 * 3.0) + 4.0 = 25.0
    printf("4: x = %.1f, y = %.1f, z = ?\n", x, y);
    x = -0.5 - y; // x = -0.5 - 25.0 = -25.5
    printf("5: x = %.1f, y = %.1f, z = ?\n", x, y);

    z = x + y; // z = -25.5 + 25.0 = -0.5
    printf("6: x = %.1f, y = %.1f, z = %.1f\n", x, y, z);
    return 0;
}
