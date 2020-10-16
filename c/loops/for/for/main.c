#include <stdio.h>
#include <math.h>
int main() {
    
    for (int i=0; i<=10; i++) {
        printf("%d sayısının karesi= %d\n", i,i*i);
    }
    
    int j;
    printf("Bir sayı giriniz: ");
    scanf("%d", &j);
    for (int i=0; i<=j; i++) {
        printf("%d sayısının karekökü= %.1f\n", i,(float)sqrt(i));
    }
    
    int num,fact=1;
    printf("Bir sayı giriniz: ");
    scanf("%d", &num);
    for (int j=1; j<=num; j++) {
        fact=fact*j;
        
    }printf("%d!= %d\n", num, fact);
    
    int n1,n2,k=0,result=0;
    printf("1. sayıyı giriniz: ");
    scanf("%d", &n1);
    printf("2. sayıyı giriniz: ");
    scanf("%d", &n2);
    
    if (n1<n2) {
        for (k=n1; k<=n2; k++) {
            result=result+k;
        }
    }else if (n1>n2){
        for (k=n1; k>=n2; k--) {
            result=result+k;
        }
    }printf("Toplam= %d\n", result);
    
    return 0;
}
