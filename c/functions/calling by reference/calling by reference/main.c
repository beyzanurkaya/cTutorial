#include<stdio.h>

void exchange(int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void Raise(int *a){
    (*a)++;
}

void reference(int *x){
    *x=20;
}

void Raise2(int*);

int main() {
    
    int x,y=23;
    printf("Bir sayı giriniz: ");
    scanf("%d", &x);
    printf("x=%d, y=%d\n",x,y);
    exchange(&x, &y);
    printf("x=%d, y=%d\n",x,y);
    
    int a=120;
    printf("Artırmadan önce: %d\n", a);
    Raise(&a);
    printf("Artırmadan sonra: %d\n", a);
    int b=10;
    printf("Referansla çağırmadan önce: %d\n", b);
    reference(&b);
    printf("Referansla çağırmadan sonra: %d\n", b);
    
    int n;
    printf("Bir sayı giriniz: ");
    scanf("%d", &n);
    Raise2(&n);
    printf("Artırma sonrası: %d\n", n);

    return 0;
}

void Raise2(int *num){
    printf("Girilen sayı: %d\n", *num);
    *num+=100;
}



