#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int faktor();
int kombinasi();
int main (){
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
    int hasil = ((i * i) * ((i-1) * (i-1))) / 2;
    printf("%d\n", hasil);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}