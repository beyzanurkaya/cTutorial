#include<stdio.h>

struct person { //Global tanım
    char name[20],surname[30];
    int age;
};

struct student {
    struct person info;
    char study[50];
    int class;
    float avg;
};
/*
struct person {
  char name[20],surname[30];
  int age;
    struct student {
        char study[50];
        int class;
        float avg;
    };
};
*/
int main() {
    struct student s1;
    
    printf("İsim: ");
    scanf("%s", s1.info.name);
    printf("Soyisim: ");
    scanf("%s", s1.info.surname);
    printf("Yaş: ");
    scanf("%d", &s1.info.age);
    printf("Bölüm: ");
    scanf("%s", s1.study);
    printf("Sınıf: ");
    scanf("%d", &s1.class);
    printf("AGNO: ");
    scanf("%f", &s1.avg);
    
    printf("\nİsim: %s\n", s1.info.name);
    printf("Soyisim: %s\n", s1.info.surname);
    printf("Yaş: %d\n", s1.info.age);
    printf("Bölüm: %s\n", s1.study);
    printf("Sınıf: %d\n", s1.class);
    printf("AGNO: %.2f\n", s1.avg);
    
    return 0;
}
