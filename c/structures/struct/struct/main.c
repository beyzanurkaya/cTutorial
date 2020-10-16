#include <stdio.h>
#include <string.h>

struct student {
    char name[30],surname[30],study[50];
    int number,class;
    float avg;
}std,std2;

struct books {
    char name[50],writer[50];
    float price;
}b1={"Gurur ve Önyargı", "Jane Austen", 25.5},b2={"Milena'ya Mektuplar", "Franz Kafka", 19.90},b3={"1984", "George Orwell", 22};

int main() {
    
    strcpy(std.name,"Beyza Nur");
    strcpy(std.surname,"Kaya");
    strcpy(std.study,"Bilgisayar Mühendisliği");
    std.number=1306170038;
    std.class=2;
    std.avg=3.5;
    
    strcpy(std2.name,"Aleyna");
    strcpy(std2.surname,"Akgan");
    strcpy(std2.study,"Diş Hekimliği");
    std2.number=145678346;
    std2.class=2;
    std2.avg=3.25;
    
    printf("İsim: %s\n", std.name);
    printf("Soyisim: %s\n", std.surname);
    printf("Bölüm: %s\n", std.study);
    printf("Numara: %d\n", std.number);
    printf("Sınıf: %d\n", std.class);
    printf("AGNO: %.2f\n\n", std.avg);
    
    printf("İsim: %s\n", std2.name);
    printf("Soyisim: %s\n", std2.surname);
    printf("Bölüm: %s\n", std2.study);
    printf("Numara: %d\n", std2.number);
    printf("Sınıf: %d\n", std2.class);
    printf("AGNO: %.2f\n\n", std2.avg);
    
    printf("Kitap isim: %s\n", b1.name);
    printf("Yazar ismi: %s\n", b1.writer);
    printf("Fiyat: %.2f\n\n", b1.price);
    
    printf("Kitap isim: %s\n", b2.name);
    printf("Yazar ismi: %s\n", b2.writer);
    printf("Fiyat: %.2f\n\n", b2.price);
    printf("Kitap isim: %s\n", b3.name);
    printf("Yazar ismi: %s\n", b3.writer);
    printf("Fiyat: %.2f\n", b3.price);
    
    return 0;
}


