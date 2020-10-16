#include <stdio.h>

int main() {
 /*
    int a=5,b=3;
    printf("Öncesi: a=%d, b=%d\n", a,b);
    int temp=a;
    a=b;
    b=temp;
    printf("Sonrası: a=%d, b=%d\n", a,b);
    
    int array[]={45,78,14,5,53,99,9},i,j,temp2;
    for (i=0; i<7; i++) {
        for (j=0; j<7; j++) {
            if (array[j]>array[j+1]) {
                temp2=array[j];
                array[j]=array[j+1];
                array[j+1]=temp2;
            }
        }
    }
  
    for (i=0; i<7; i++) {
        printf("%d ", array[i]);
    }
    */
    int array2[5],p,r,temp3;
    for (p=0; p<5; p++) {
        printf("%d. sayıyı giriniz: ", p+1);
        scanf("%d", &array2[p]);
    }
    for (p=0; p<5; p++) {
        for (r=0; r<5; r++) {
            if (array2[r]>array2[r+1]) {
                temp3=array2[r];
                array2[r]=array2[r+1];
                array2[r+1]=temp3;
            }
        }
    }
    for (p=0; p<5; p++) {
        printf("%d ", array2[p]);
    }
    return 0;
}
