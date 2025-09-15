#include <stdio.h>

int main() {
    float x, y, p, s, total;

    // Step a & b: Read x and y
    printf("Enter value for x: ");
    scanf("%f", &x);

    printf("Enter value for y: ");
    scanf("%f", &y);

    // Step c & d: Compute p and s
    p = x * y;
    s = x + y;

    // Step e: Compute total using the given expression
    total = (s * s) + p * (s - x) * (p + y);

    // Step f: Print total
    printf("Total: %.2f\n", total);

    return 0;
}