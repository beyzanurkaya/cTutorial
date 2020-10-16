#include <stdio.h>

int main() {
    
    int choose;
    //again:
    printf("1-5 arasında bir sayı giriniz: ");
    scanf("%d", &choose);
    
    switch (choose) {
            
        case 1:
            printf("1'e bastınız.");
            break;
        case 2:
            printf("2'ye bastınız.");
            break;
        case 3:
            printf("3'e bastınız.");
            break;
        case 4:
            printf("4'e bastınız.");
            break;
        case 5:
            printf("5'e bastınız.");
            break;
        default:
            printf("Geçersiz bir sayı girdiniz, tekrar deneyiniz.\n");
            break;
    }
    //goto again;
    
    int opr,n1,n2;
    
    printf("Toplama işlemi için: 1\n");
    printf("Çıkarma işlemi için: 2\n");
    printf("Çarpma işlemi için : 3\n");
    printf("Bölme işlemi için  : 4\n\n");
    printf("Bir seçim giriniz: ");
    scanf("%d", &opr);
    
    printf("İki sayı giriniz: ");
    scanf("%d%d", &n1,&n2);
    
    switch (opr) {
        case 1:
            printf("%d+%d= %d\n", n1,n2,n1+n2);
            break;
        case 2:
            printf("%d-%d= %d\n", n1,n2,n1-n2);
            break;
        case 3:
            printf("%d*%d= %d\n", n1,n2,n1*n2);
            break;
        case 4:
            printf("%d/%d= %d\n", n1,n2,n1/n2);
            break;
        default:
            printf("Geçersiz bir seçim yaptınız.");
            break;
    }
    return 0;
}
