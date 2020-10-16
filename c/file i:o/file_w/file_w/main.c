#include<stdio.h>

int main() {
    
    FILE *dosya;
    dosya= fopen("helloword.txt","a");
    fputs("Hello World!\n", dosya);
    
    dosya=fopen("files.txt", "w");
    fputs("Hello World", dosya);
    fclose(dosya);
    
    char name[]="Beyza Nur";
    dosya=fopen("beyza.txt", "w");
    fprintf(dosya, "Bu dosya %s'nun dosyasıdır.", name);
    
    dosya=fopen("the multiplication table.txt", "w");
    for (int i=1; i<=10; i++) {
        for (int j=1; j<=10; j++) {
            fprintf(dosya, "%d*%d= %d\n", i,j,i*j);
        }fprintf(dosya, "\n");
    }
    
    dosya=fopen("student.txt", "w");
    char name2[30],study[30];
    float avg;
    
    printf("Isminiz: ");
    gets(name2);
    printf("Bolumunuz: ");
    gets(study);
    printf("AGNO: ");
    scanf("%f", &avg);
    
    fprintf(dosya, "%s \t %s \t%.2f", name2, study, avg);
    
    return 0;
}
