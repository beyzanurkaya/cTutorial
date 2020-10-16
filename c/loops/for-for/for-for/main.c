#include <stdio.h>

int main() {
    
    for (int i=1; i<=3; i++) {
        for (int j=1; j<=5; j++) {
            printf("Hello World!\n");
        }
        printf("Beyza Nur Kaya\n");
    }
    
    for (int x=1; x<=10; x++) {
        for (int y=1; y<=10; y++) {
            printf("%d*%d= %d\n", x,y,x*y);
        }
        printf("\n");
    }
    
    for (int a=1; a<=10; a++) {
        for (int b=1; b<=20; b++) {
            printf("*");
        }
        printf("\n");
    }printf("\n");
    
    for (int k=0; k<=0; k++) {
        for (int l=1; l<=3; l++) {
            printf("*\t*\n");
        }
        for (int m=0; m<=0; m++) {
            printf("-----\n");
        }
        for (int l=1; l<=3; l++) {
            printf("*\t*\n");
        }
    }
    
    for (int i=0; i<=10; i++) {
        for (int j=0; j<=i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }printf("\n");
    
    for (int i=0; i<=10; i++) {
        for (int j=0; j<=i; j++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\t");
    
    return 0;
}
