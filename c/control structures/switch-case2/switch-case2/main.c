#include <stdio.h>
#include <math.h>

int main() {
   
    int choose,opr,opr2,n1,n2;
    printf("Dört işlem için                  : 1\n");
    printf("Özel matematik fonksiyonları için: 2\n");
    printf("Seçim yapınız: ");
    scanf("%d", &choose);
    
    switch (choose) {
            
        case 1:
            
            printf("\nToplama işlemi için: 1\n");
            printf("Çıkarma işlemi için: 2\n");
            printf("Çarpma işlemi için : 3\n");
            printf("Bölme işlemi için  : 4\n\n");
            printf("Bir seçim giriniz: ");
            scanf("%d", &opr);
            
            if (opr==1) {
                printf("İki sayı giriniz: ");
                scanf("%d%d", &n1,&n2);
                printf("%d+%d= %d\n", n1,n2,n1+n2);
            } else if(opr==2){
                printf("İki sayı giriniz: ");
                scanf("%d%d", &n1,&n2);
                printf("%d+%d= %d\n", n1,n2,n1-n2);
            } else if(opr==3){
                printf("İki sayı giriniz: ");
                scanf("%d%d", &n1,&n2);
                printf("%d*%d= %d\n", n1,n2,n1*n2);
            }else if(opr==4){
                printf("İki sayı giriniz: ");
                scanf("%d%d", &n1,&n2);
                printf("%d/%d= %.1f\n", n1,n2,(float)n1/n2);
            }else{
                printf("Geçersiz bir seçim yaptınız.\n");
                break;
                
            case 2:
                printf("\nMutlak değer hesabı için: 1\n");
                printf("Karekök hesabı için     : 2\n");
                printf("Üs hesabı için          : 3\n");
                printf("ln hesabı için          : 4\n");
                printf("log hesabı için         : 5\n\n");
                printf("Bir seçim giriniz: ");
                scanf("%d", &opr2);
                
                if (opr2==1) {
                    printf("Bir sayı giriniz: ");
                    scanf("%d", &n1);
                    printf("|%d|= %d\n", n1,abs(-n1));
                } else if(opr2==2){
                    printf("Bir sayı giriniz: ");
                    scanf("%d", &n1);
                    printf("Karekök içinde %d= %.2f\n", n1,sqrt(n1));
                } else if(opr2==3){
                    printf("taban değerini giriniz: ");
                    scanf("%d", &n1);
                    printf("üs değerini giriniz: ");
                    scanf("%d", &n2);
                    printf("%d üssü %d= %.0f\n", n1,n2,pow(n1,n2));
                }else if(opr2==4){
                    printf("Bir sayı giriniz: ");
                    scanf("%d", &n1);
                    printf("ln%d= %.2f\n", n1,log(n1));
                }else if(opr2==5){
                    printf("Bir sayı giriniz: ");
                    scanf("%d", &n1);
                    printf("log%d= %.2f\n", n1, log10(n1));
                }else {
                    printf("Geçersiz bir seçim yaptınız.\n");
                }
                break;
            default:
                printf("Tekrar deneyiniz.\n");
                break;
                
            }
            
    }
    return 0;
}
