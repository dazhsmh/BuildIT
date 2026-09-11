#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int A, B, C;
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    if (C == (A * B)) {
        printf("*");
    } else if (C == (A + B)) {
        printf("+");
    } else if (C == A - B) {printf("-");}
    else {}
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
