#include<stdio.h>

int main() {
    
    FILE *dosya;
    char character;
    dosya= fopen("files.txt","r");
    if (dosya!=NULL) {
        character=fgetc(dosya);
        printf("%c\n",character);
    }else{
        printf("Dosya bulunamadı.\n");
    }
    
    char k1[30],k2[30];
    
    if ((dosya=fopen("helloword.txt","r"))!=NULL) {
        fscanf(dosya, "%s",k1);
        fscanf(dosya, "%s",k2);
        printf("%s %s\n",k1,k2);
    }else{
        printf("Dosya bulunamadı.\n");
    }
    
    fclose(dosya);
    
    return 0;
}
