#include <stdio.h>

int main() {
    
    int num=5;
    int *p;
    p=&num;
    
    printf("num: %d\n", num);
    printf("*p: %d\n", *p);
    printf("&num: %p\n", &num);
    printf("p: %p\n", p);
    printf("%x\n", p);
    num++;
    printf("%x\n", p);
    
    int n=5;
    char c='B';
    float f=5.4;
    int *pn=&n;
    char *pc=&c;
    float *pf=&f;
    
    printf("%d sayısın adresi: %p\n", n,pn);
    printf("%c karakterinin adresi: %p\n", c,pc);
    printf("%.1f sayısın adresi: %p\n", f,pf);
    
    return 0;
}
