#include <stdio.h>

int main() {
    
    printf("Ben bir mühendisim\n");
    printf("Ben bir \nmühendisim\n");
    printf("Ben bir \tmühendisim\n"); //Bir tab boyutunda boşluk bırakır.
    
    // "/* */: Paragrafı yorum haline getirir."
    
    int num=25;
    int num2=50;
    printf("%d \n%d \n",num,num2);
    
    char letter;
    printf("Bir harf giriniz: ");
    scanf("%c", &letter);
    //letter=getchar();
    printf("%c harfine bastınız.\n", letter);
    
    char name[10]="Beyza Nur";
    printf("%s \n", name);
    printf("İsminizin baş harfi: %c \n", name[0]);
    
    char name2[20]="Beyza Nur";
    int age=20;
    float height=1.59;
    printf("İsim: %s\nYaş: %d \nBoy: %f \n",name2,age,height);
    
    char name3[20],surname[20];
    int age2;
    printf("İsminiz: "); gets(name3); //&name bir gösterim çeşitidir.
    printf("Soyisminiz: "); scanf("%s",surname);
    printf("Yaşınız: "); scanf("%d", &age2);
    printf("Merhaba, saygıdeğer %s %s yaşınız %d.", name3, surname, age2);
    
    return 0;
}
