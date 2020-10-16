#include <stdio.h>

int main() {
    
    int a;
    
    printf("Bir sayı giriniz: ");
    scanf("%d", &a);
    
    if (a>0) {
        printf("%d, pozitif bir sayıdır.\n", a);
    }else {
        printf("%d, negatif bir sayıdır.\n", a);
    }
    
    return 0;
}
