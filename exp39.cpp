#include <stdio.h>
int main() {
    int a = 5, b = 10, c = 3, d = 8;
    int x, y, z;
    x = (a + b) * c;
    y = (a + b) * d;
    int common = a + b;
    x = common * c;
    y = common * d;
    printf("Original: x = %d, y = %d\n", (a + b) * c, (a + b) * d);
    printf("Optimized: x = %d, y = %d\n", x, y);
    return 0;
}
