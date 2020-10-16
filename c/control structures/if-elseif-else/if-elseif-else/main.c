#include <stdio.h>

int main() {
    
    int a,b;
    
    printf("Bir sayı giriniz: ");
    scanf("%d", &a);
    printf("Tekrar bir sayı giriniz: ");
    scanf("%d", &b);
    
    if (a>b) {
        printf("%d>%d", a,b);
    }else if (a<b){
        printf("%d<%d", a,b);
    }else if(a==b){
        printf("%d=%d", a,b);
    }else
        printf("I have no clue.\n");
    
    int choose;
    
    printf("C için     : 1\n");
    printf("C# için    : 2\n");
    printf("Oracle için: 3\n\n");
    
    printf("Bir seçim yapınız: ");
    scanf("%d", &choose);
    
    if (choose==1) {
        printf("C, esnek bir dildir.\n");
    } else if (choose==2){
        printf("C#, .Net'in gözdesidir.\n");
    }else if(choose==3){
        printf("Oracle, en iyi veritabanı platformudur.\n");
    }else{
        printf("Geçersiz bir seçim yaotınız.\n");
    }
    
    return 0;
}
