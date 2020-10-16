#include <stdio.h>

void calculate(int,int,double,double,int *,double *);

int main() {

    int i=5,j=6,k;
    double x=10.6,y=22.3,z;
    calculate(i,j,x,y,&k,&z);
    printf("k=%d z=%.1f\n", k,z);
  
    return 0;
}

void calculate(int a,int b,double r,double s,int *c,double *t){
    *c=a+b;
    *t=r+s+(*c);
}


