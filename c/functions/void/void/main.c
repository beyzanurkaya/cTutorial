#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void func(){
    printf("Merhaba Dünya\n");
}

void dice(){
    srand(time(NULL));
    int val=1+rand()%6;
    printf("%d\n", val);
}

void number(int num){
    if (num%2==0) {
        printf("%d sayısı çifttir.\n", num);
    }else {
        printf("%d sayısı tektir.\n", num);
    }
}

void stars(int h,int l){
    for (int i=0; i<h; i++) {
        for (int j=0; j<l; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void lottery(){
    for (int i=1; i<=6; i++) {
        printf("%d. kolon: ", i);
        for (int j=1; j<=6; j++) {
            printf("%d   \t", 1+rand()%45);
        }
        printf("\n");
    }
}
void grade_average(int midterm,int final){
    double avr=(double)(midterm*0.4+final*0.6);
    if (avr>90 && avr<100) {
        printf("Ortalama: %.1f - Notunuz AA\n", avr);
    } else if(avr>70 && avr<90){
        printf("Ortalama: %.1f - Notunuz BB\n", avr);
    }else if (avr>50 && avr<70){
        printf("Ortalama: %.1f - Notunuz CC\n", avr);
    }else if (avr>30 && avr<50){
        printf("Ortalama: %.1f - Notunuz DD\n", avr);
    }else if (avr>0 && avr<50){
        printf("Ortalama: %.1f - Notunuz FF\n", avr);
    }
}
int main() {
    func();
    dice();
    int n;
    printf("Bir sayı giriniz: ");
    scanf("%d", &n);
    number(n);
    int hight,lenght;
    printf("Dörtgenin boyu: ");
    scanf("%d", &hight);
    printf("Dörtgenin eni: ");
    scanf("%d", &lenght);
    stars(hight, lenght);
    lottery();
    int m,f;
    printf("Vize notunuzu giriniz: ");
    scanf("%d", &m);
    printf("Final notunuzu giriniz: ");
    scanf("%d", &f);
    grade_average(m, f);
    
    return 0;
}
