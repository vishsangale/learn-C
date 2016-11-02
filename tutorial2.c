#include <stdio.h>

/*
 * Tutorial to determine factors of a number.
 * */


int main() {
    int n;
    printf("Enter a positive number > 1\n");
    scanf("%d", &n);
    while(n <= 1) {
        printf("Enter a positive number > 1\n");
        scanf("%d", &n);
    }
    int i;
    for(i = 1; i <= n/2; ++i) {
        if (n%i==0) {
            printf("Factor of %d is %d\n", n, i);
        }
    }
    return 0;
}


