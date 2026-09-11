#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int A, B, C, D, E;
    scanf("%d", &A);
    scanf("%d", &B);
    C = A * B;
    D = A + B;
    E = A - B;
    if (C > D && C > E) {
        printf("*");
    } else if (D > E) {
        printf("+");
    } else {printf("-");}
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
