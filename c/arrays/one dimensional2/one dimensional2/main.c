#include <stdio.h>

int main() {
    
    int mark[4],sum=0,AA=0,BB=0,CC=0,DD=0,FF=0,inv=0;
    for (int i=0; i<=3; i++) {
        printf("%d. öğrencinin notu: ", i+1);
        scanf("%d", &mark[i]);
        if (mark[i]<=100 && mark[i]>=90){
            AA++;
        } else if (mark[i]<=89 && mark[i]>=70){
            BB++;
        } else if (mark[i]<=69 && mark[i]>=50){
            CC++;
        } else if (mark[i]<=49 && mark[i]>=30){
            DD++;
        } else if (mark[i]<=29 && mark[i]>=0){
            FF++;
        } else {
            printf("Geçersiz bir not girdiniz.\n");
            inv++;
        }
        sum+=mark[i];
    }
    printf("-----------------------\n");
    float result=(float)sum/10;
    
    printf("Sınıfın not ortalaması= %.2f\n", result);
    printf("Notu AA olan öğrenci sayısı: %d\n", AA);
    printf("Notu BB olan öğrenci sayısı: %d\n", BB);
    printf("Notu CC olan öğrenci sayısı: %d\n", CC);
    printf("Notu DD olan öğrenci sayısı: %d\n", DD);
    printf("Notu FF olan öğrenci sayısı: %d\n", FF);
    printf("Geçersiz not: %d\n", inv);
    
    int midterm[4],final[4];
    float avr[4];
    for (int i=0; i<=3; i++) {
        printf("Vize notunuzu giriniz: ");
        scanf("%d", &midterm[i]);
        printf("Final notunuzu giriniz: ");
        scanf("%d", &final[i]);
        avr[i]=(float)(midterm[i]*0.4+final[i]*0.6);
        
        printf("%d. öğrencinin vize,final notları ve ortalaması: %d/%d/%.2f\n", i+1,midterm[i],final[i],avr[i]);
    }
    
    return 0;
}

