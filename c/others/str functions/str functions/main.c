#include <stdio.h>

int main() {

//STRLEN FONKSİYONU
    char name[50];
    printf("Bir kelime giriniz: ");
    scanf("%s", &name);
    float lenght=strlen(name);
    printf("%s kelimesi, %0.f karakterden oluşmaktadır.\n", name,lenght);
    
    char name2[]="Beyza Nur";
    printf("%s ismi, %lu karakterden oluşmaktadır.\n", name2,strlen(name2));
    
    printf("Beyza ismi, %lu karakterden oluşmaktadır.\n", strlen("Beyza"));
    
    char city[]="Istanbul";
    for (int i=0; i<strlen(city); i++) {
        printf("%c\n", city[i]);
    }
    
    char book[]="Milena'ya Mektuplar";
    for (int i=strlen(book); i>=0; i--) {
        printf("%c\n", book[i]);
    }
//STRCPY FONKSİYONU
    char word[10],copy[10];
    printf("Bir kelime giriniz: ");
    scanf("%s", &word);
    printf("Girilen kelime: %s\n", word);
    printf("Kopyalamadan sonra: %s\n", strcpy(copy, word));
    
    char name3[]="Beyza",copy2[10];
    for (int i=0; i<strlen(name3); i++) {
        printf("Merhabe %s\n", strcpy(copy2, name3));
    }
    
//STRCAT FONKSİYONU
    char word1[50]="Merhaba ";
    char word2[50]="Dünya!";
    strcat(word1, word2);
    printf("%s\n", word1);
    
    char name4[50];
    char surname[100];
    printf("İsim: ");
    scanf("%s", &name4);
    printf("Soyisim: ");
    scanf("%s", &surname);
    printf("Tam adınız %s.\n", strcat(name4, surname));
    
    
    char mes[]="Merhaba ";
    char name5[20];
    printf("İsminiz: ");
    scanf("%s", &name5);
    printf("%s\n", strcat(mes, name5));
 
    char name6[10],cpy[10],mess[]="Merhaba ";
    printf("İsminiz: ");
    scanf("%s", &name6);
    strcpy(cpy, name6);
    int len=strlen(cpy);
    printf("%s isminizin karakter uzunluğu %d'dir.\n", strcat(mess, cpy),len);
    
 //STRCMP FONKSİYONU
    char capitol[]="Ankara",ans[10];
    printf("Türkiye'nin başkenti neresidir?: ");
    scanf("%s", &ans);
    
    if (strcmp(capitol,ans)==0) {
        printf("Tebrikler, %s cevabı doğru.\n", ans);
    }else {
        printf("Girilen cevap yanlıştır.\n");
    }
 
    char user[]="root",password[]="tiger",username[10],pass[10];
    printf("Kullanıcı adınızı giriniz: ");
    scanf("%s", &username);
    
    if (strcmp(user,username)==0) {
        printf("Şifrenizi giriniz: ");
        scanf("%s", &pass);
        if (strcmp(password,pass)==0) {
            printf("Sisteme giriş yapılmıştır.\n");
        } else {
            printf("Hatalı paralo girdiniz.\n");
        }
    } else {
        printf("Böyle bir kullanıcı bulunmamaktadır.\n");
    }

    char names[][20]={"Beyza","Aleyna","Sevval"},temp[20];
    int i,j,k;
    
    printf("ÖNCESİ\n-----------\n");
    for (k=0; k<4; k++) {
        printf("%s\n", names[k]);
    }
    for (i=0; i<4; i++) {
        for (j=0; j<4; j++) {
            if(strcmp(names[j], names[j+1])>0){
                strcpy(temp,names[j]);
                strcpy(names[j],names[j+1]);
                strcpy(names[j+1],temp);

            }
        }
    }
    printf("SONRASI\n-----------\n");
    for (k=0; k<=4; k++) {
        printf("%s\n", names[k]);
    }
 
//STRREV FONKSİYONU:Tersten yazmak
//STRLWR FONKSİYONU:Küçük karakterli yazmak
//STRUPR FONKSİYONU:Büyük karakterli yazmak
    
    return 0;
}
