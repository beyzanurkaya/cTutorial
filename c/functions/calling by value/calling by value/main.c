#include<stdio.h>

float average(int,int,int);
double sphere(double);
#define pi 3.14

int main() {
    int m,n=30;
    float k;
    printf("Bir sayı giriniz: ");
    scanf("%d", &m);
    k=average(m,n,40);
    printf("Ortalama= %.1f\n", k);
    
    float r,area;
    printf("Kürenin yarıçapını giriniz:");
    scanf("%f", &r);
    area=(float)sphere(r);
    printf("Kürenin yüzey alanı= %.2f\n", area);
    
    return 0;
}
float average(int a,int b,int c){
    float result;
    result=(a+b+c)/3.0;
    
    return result;
}

double sphere(double d){
    return 4*pi*d*d;
}
