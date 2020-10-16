#include <stdio.h>
#include <math.h>

int main() {
    
    int i=1;
    while (i<=10) {
        printf("%d sayısının karesi= %d\n", i,i*i);
        i++;
    }
    
    int j=1;
    while (j<=10) {
        printf("1*%d= %d\t", j,j*1);
        printf("2*%d= %d\t", j,j*2);
        printf("3*%d= %d\t", j,j*3);
        printf("4*%d= %d\t", j,j*4);
        printf("5*%d= %d\t", j,j*5);
        printf("6*%d= %d\t", j,j*6);
        printf("7*%d= %d\t", j,j*7);
        printf("8*%d= %d\t", j,j*8);
        printf("9*%d= %d\t", j,j*9);
        printf("10*%d= %d\n", j,j*10);
        j++;
    }
    
    int k=1;
    while (k<=10) {
        if (k%2==0) {
            printf("%d bir çift sayıdır.\n", k);
        } else if (k%2!=0){
            printf("%d bir tek sayıdır.\n", k);
        }
        k++;
    }
    
    int n,l=1;
    while (l<=10) {
        printf("Bir sayı giriniz: ");
        scanf("%d", &n);
        printf("%d sayısının karekökü= %.1f\n", n, sqrt(n));
        l++;
    }
    
    return 0;
}
