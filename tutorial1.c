/*
 * Tutorial to calculate power of 2.
 * */

#include <stdio.h>
#include <stdlib.h>

float calculate_power(int exponent) {
    if (exponent == 0) {
        return 0;
    }
    int i;
    float val = 1;
    for (i = 0; i < abs(exponent); ++i) {
        val *= 2;
    }
    if (exponent < 0) {
        val = 1/val;
    }
    return val;
}

int main() {
    int exponent;
    printf("Enter exponent to calculate power of 2\n");
    scanf("%d", &exponent);
    float power = calculate_power(exponent);
    printf("Calculated power of 2 = %f\n", power);
    return 0;
}