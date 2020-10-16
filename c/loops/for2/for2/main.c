#include <stdio.h>

int main() {
    
    int i,n1,n2,even=0,odd=0;
    printf("İki sayı giriniz: ");
    scanf("%d%d", &n1,&n2);
    
    if (n1<n2) {
        for (i=n1; i<=n2; i++) {
            if (i%2==0) {
                even++;
            } else if(i%2!=0){
                odd++;
            }
        }
    } else {
        for (i=n1; i>=n2; i--) {
            if (i%2==0) {
                even++;
            } else if(i%2!=0){
                odd++;
            }
        }
    }
    
    printf("%d ile %d arasında %d çift, %d arasında tek sayı vardır.\n", n1,n2,even,odd);
    
    int j,num,max=0;
    for (j=1; j<=10; j++) {
        printf("Bir sayı giriniz: ");
        scanf("%d", &num);
        if (num>max) {
            max=num;
        }
    }
    printf("En büyük sayı: %d\n", max);
    
    return 0;
}
