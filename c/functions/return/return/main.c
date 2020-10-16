#include <stdio.h>

int sum(int x,int y){
    return x+y;
}

int mult(int n1,int n2){
    int result= n1*n2;
    return result;
}

int square(int m1,int m2){
    int result=sum(m1,m2);
    return mult(result,result);
}

int nsum(int num){
    int sum=0;
    for (int i=1; i<=num; i++) {
        sum+=i;
    }
    return sum;
}

int exponential(int base, int power){
    int result=1;
    for (int i=1; i<=power; i++) {
        result*=base;
    }
    return result;
}

int fact(int num){
    int f=1;
    for (int i=1; i<=num; i++) {
        f=f*i;
    }
    return f;
}

int main() {
    int i,j;
    printf("2 sayı giriniz: ");
    scanf("%d%d", &i,&j);
    printf("%d+%d= %d\n", i,j,sum(i,j));
    printf("%d*%d= %d\n", i,j,mult(i,j));
    printf("%d*%d= %d\n", sum(i,j),sum(i,j),square(i,j));
    int n;
    printf("Bir sayı giriniz: ");
    scanf("%d", &n);
    printf("1 ile %d arasındaki sayıların toplamı= %d\n", n,nsum(n));
    int b,p;
    printf("Tabanı giriniz: ");
    scanf("%d", &b);
    printf("Üssü giriniz: ");
    scanf("%d", &p);
    printf("%d sayısının %d. kuvveti= %d\n", b,p,exponential(b,p));
    int m;
    printf("Bir sayı giriniz: ");
    scanf("%d", &m);
    printf("%d!= %d\n", m,fact(m));
    
    return 0;
}
