#include <stdio.h>

int factorial(int i){
    if (i<=1) {
        return 1;
    }else
        return (factorial(i-1)*i);
}

int main() {
    
    int j;
    printf("Bir sayı giriniz: ");
    scanf("%d", &j);
    printf("%d!: %d\n", j,factorial(j));
    
    return 0;
}
