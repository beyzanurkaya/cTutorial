#include <stdio.h>

int main() {
    
    for (int i=0; i<=10; i++) {
        if (i==7) {
            break;
        }
        printf("%d\n", i);
        
    }printf("Döngü sonlandı!\n\n");
    
    int num,result=0;
    for (int i=0; i<=10; i++) {
        printf("Bir sayı giriniz (İşlemi sonladırmak için sıfıra basın): ");
        scanf("%d", &num);
        result=result+num;
        
        if (num==0) {
            break;
        }
    }
    printf("Toplam= %d\n", result);
    
    for (int i=0; i<=10; i++) {
        if (i==5) {
            continue;
        }printf("%d\n", i);
    }printf("\n");
    
    for (int i=0; i<=10; i++) {
        if (i%2==0) {
            continue;
        }printf("%d\n", i);
    }
    
    return 0;
}

