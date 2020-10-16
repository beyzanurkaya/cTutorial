#include <stdio.h>

int main() {
    
    int i;
    
    do {
        printf("Bir sayı giriniz: ");
        scanf("%d", &i);
        printf("%d'nin küpü= %d\n", i,i*i*i);
    } while (i>0);
    
    printf("Program sonlandı.\n");
    
    return 0;
}
