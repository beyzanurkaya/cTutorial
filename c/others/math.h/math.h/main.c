#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    /*int abs(x) //x tamsayının mutlak değerini hesaplar.
     double fabs(x) //x gerçel sayısının mutlak değerini hesaplar.
     double sqrt(x) //x sayısının karekökünü alır.
     double pow(x,y) //x üssü y değerini hesaplar.
     double log() //pozitif x sayısının doğal logaritmasını hesaplar, ln(x).
     double log(10) //pozitif x sayısının 10 tabanındaki logaritmasını hesaplar.
     */
    
    printf("-4 sayısının mutlak değeri= %d\n", abs(-4));
    printf("-4.5 sayısının mutlak değeri= %.1f\n", fabs(-4.5));
    printf("8 sayısının karekökü= %.1f\n", sqrt(8));
    printf("3 üssü 3= %.0f.\n", pow(3,3));
    printf("log 1'nin değeri= %.0f\n", log(1));
    printf("log 10'nun değeri= %.0f\n", log10(10));
    
    int a=3,b=4,c;
    c=a*a+b*b;
    printf("Üçgenin hipotenüsü= %.0f\n", sqrt(c));
    
    int x,y,z;
    printf("x için bir değer giriniz: ");
    scanf("%d", &x);
    printf("y için bir değer giriniz: ");
    scanf("%d", &y);
    z=x*x+y*y;
    printf("xyz üçgeninin hipotenüsü= %0.f\n", sqrt(z)); //.0f, 0.f ikiside kullanılabilir.
    return 0;
}
