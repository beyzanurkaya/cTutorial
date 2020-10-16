#include <stdio.h>

int main() {
  
    int matris[2][2];
    matris[0][0]=1;
    matris[0][1]=2;
    matris[1][0]=3;
    matris[1][1]=4;
    
    printf("%d ", matris[0][0]);
    printf("%d\n", matris[0][1]);
    printf("%d ", matris[1][0]);
    printf("%d\n", matris[1][1]);
   
    int test[2][3][4] = {
        { {3, 4, 2, 3}, {0, -3, 9, 11}, {23, 12, 23, 2} },
        { {13, 4, 56, 3}, {5, 9, 3, 5}, {3, 1, 4, 9} }
    };
    for (int i=0; i<=1; i++) {
        for (int j=0; j<=2; j++) {
            for (int k=0; k<=3; k++) {
                  printf("%d", test[i][j][k]);
            }
            printf("\n");
        }
    }
    int array[2][1]={{1},{2}};
    for (int i=0; i<=1; i++) {
        for (int j=0; j<=0; j++) {
             printf("%d", array[i][j]);
        }printf("\n");
    }
    
    int matris2[3][3];
    for (int i=0; i<=2; i++) {
        for (int j=0; j<=2; j++) {
            printf("Sayı giriniz: ");
            scanf("%d", &matris2[i][j]);
        }
    }
    for (int i=0; i<=2; i++) {
        for (int j=0; j<=2; j++) {
            printf("%d", matris2[i][j]);
        }
        printf("\n");
    }
   
    return 0;
}
