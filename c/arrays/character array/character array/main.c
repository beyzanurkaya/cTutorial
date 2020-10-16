#include <stdio.h>

int main() {
    
    char name[10]="Beyza Nur";
    char name2[]="Beyza Nur";
    char *name3="Beyza Nur";
    char name4[]={'B','E','Y','Z','A',' ','N','U','R','\0'};
    
    printf("%s\n", name);
    printf("%s\n", name2);
    printf("%s\n", name3);
    printf("%s\n\n", name4);
    
    char name5[3][10]={"Beyza Nur","Aleyna","Şevval"};
    for (int i=0; i<=2; i++) {
        printf("%s\n", name5[i]);
    }
    
    char friends[10][30];
    int n;
    printf("Kaç arkadaşa sahipsin? ");
    scanf("%d", &n);
    friends[10][30]=n;
    for (int i=0; i<=n-1; i++) {
        printf("%d. arkadaşın ismi: ", i+1);
        scanf("%s", friends[i]);
    }
    printf("ARKADAŞLAR\n");
    for (int i=0; i<=n-1; i++) {
        printf("%d. arkadaşın ismi: %s\n", i+1,friends[i]);
    }
    
    char student[3][20];
    int midterm[3], final[3];
    float avr[3];
    for (int i=0; i<=2; i++) {
        printf("%d. öğrencinin adı: ", i+1);
        scanf("%s", student[i]);
        printf("%d. öğrencinin vizesi: ", i+1);
        scanf("%d", &midterm[i]);
        printf("%d. öğrencinin finali: ", i+1);
        scanf("%d", &final[i]);
        avr[i]=midterm[i]*0.4+final[i]*0.6;
    }
    for (int i=0; i<=2; i++) {
        printf("%s adlı öğrencinin notları ve ortalaması: %d/%d/%.2f\n" ,student[i],midterm[i],final[i],avr[i]);
    }
    
    return 0;
}
