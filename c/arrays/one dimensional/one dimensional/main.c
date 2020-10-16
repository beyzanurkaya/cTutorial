#include <stdio.h>

int main() {
    
    int array[5]={1,5,7,9,13};
    printf("%d\n\n", array[3]);
    for (int i=0; i<=4; i++) {
        printf("Dizinin %d. elemanı= %d\n", i+1, array[i]);
    }printf("\n");
    
    
    int array2[5]={2,3};
    for (int i=0; i<=4; i++) {
        printf("Dizinin %d. elemanı= %d\n", i+1, array2[i]);
    }printf("\n");
    
    
    int array3[4],max=0,result=0;
    for (int i=0; i<=3; i++) {
        printf("Dizinin %d. elemanını giriniz: ", i+1);
        scanf("%d", &array3[i]);
    }printf("\n");
    
    for (int i=0; i<=3; i++) {
        printf("Dizinin %d. elemanını: %d\n", i+1, array3[i]);
    }
    for (int i=0; i<=3; i++) {
        result=result+array3[i];
        for (int i=1; i<=3; i++) {
            if (array3[i]>max) {
                max=array3[i];
            }
        }
    }
    printf("Dizinin en büyük elemanı= %d\n", max);
    printf("Dizinin elemanları toplamı= %d\n", result);
    
    return 0;
}
