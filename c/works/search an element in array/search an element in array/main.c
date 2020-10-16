#include <stdio.h>

int main() {
    int numbers[]={44,58,75,65,12,34,25,10,8,20},i,num,exist=0;
    printf("Bir sayı giriniz: ");
    scanf("%d", &num);
    
    for (i=0; i<10; i++) {
        if (numbers[i]==num) {
            exist=1;
            break;
        }
    }
    if (exist==1) {
        printf("Girilen %d değeri dizinin %d. indisinde mevcut.\n", num,i);
    }else {
        printf("Sayı dizide mevcut değil.\n");
    }
    
    int numbers2[10],j,exist2=0,num2;
    printf("On adet sayı giriniz\n");
    
    for (j=0; j<10; j++) {
        printf("%d. sayıyı giriniz: ", j+1);
        scanf("%d", &numbers2[j]);
    }
    
    printf("Bulmak istediğiniz değeri giriniz: ");
    scanf("%d", &num2);
    
    for (j=0; j<10; j++) {
        if (numbers2[j]==num2) {
            exist2=1;
            break;
        }
    }
    if (exist2==1) {
        printf("Girilen %d değeri dizinin %d. indisinde mevcut.\n", num2,j);
    } else {
        printf("Bu sayı dizide mevcut değil.\n");
    }
    
    return 0;
}
