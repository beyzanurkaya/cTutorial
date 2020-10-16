#include <stdio.h>

struct students {
    char name[30],surname[30],study[30];
    int class;
    float avg;
}std[3]={{"Beyza Nur","Kaya","Bilgisayar Mühendisliği",2,3.5},{"Aleyna","Akgan","Diş Hekimliği",2,3.35},{"Şevval","Metlek","Tıp",2,3.25}};

struct phdirectory {
    char name[50],city[50];
    int pnumber;
}pd[3];

int main() {
    /*
     struct students {
     char name[30],surname[30],study[30];
     int class;
     float avg;
     }std[3]={{"Beyza Nur","Kaya","Bilgisayar Mühendisliği",2,3.5},{"Aleyna","Akgan","Diş Hekimliği",2,3.35},{"Şevval","Metlek","Tıp",2,3.25}};
     */
    for (int i=0; i<3; i++) {
        printf("İsim: %s\n", std[i].name);
        printf("Soyisim: %s\n", std[i].surname);
        printf("Bölüm: %s\n", std[i].study);
        printf("Sınıf: %d\n", std[i].class);
        printf("AGNO: %.2f\n\n", std[i].avg);
    }
    
    for (int i=0; i<3; i++) {
        printf("%d.İsim: ", i+1);
        scanf("%s", pd[i].name);
        printf("%s kişisinin yaşadığı şehir: ", pd[i].name);
        scanf("%s",pd[i].city);
        printf("%s kişisinin telefon numarası: ", pd[i].name);
        scanf("%d",&pd[i].pnumber);
        printf("\n");
    }
    printf("\nREHBER\n");
    for (int i=0; i<3; i++) {
        printf("%s- %s- %d\n", pd[i].name, pd[i].city, pd[i].pnumber);
    }
    
    return 0;
}
