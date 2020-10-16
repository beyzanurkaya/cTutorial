#include <stdio.h>

void array(){
    int array[]={5,4,8,9,11};
    int *ptr;
    ptr=array;
    
    printf("Dizinin 1.elemanı: %d- adresi: %p\n", array[0], ptr);
    printf("Dizinin 1.elemanı: %d- adresi: %p\n", *ptr, ptr);
    printf("Dizinin 2.elemanı: %d- adresi: %p\n", array[1], (ptr+1));
    printf("Dizinin 2.elemanı: %d- adresi: %p\n", *(ptr+1),(ptr+1));
}

void array2(){
    int a[]= {1,2,3,4,5,6,7,8,9,10};
    int *p = a; //p[0]=*p
    printf("*p: %d\n", *p);
    printf("p[0]: %d\n", p[0] );
    for (int i=0; i<10; i++) {
        printf("*(p+%d): %d\n", i, *(p+i));
        printf("(p+%d): %p\n", i, p);
    }
}

void array3(){
    char *ptr,name[50];
    int i=0;
    printf("İsminizi giriniz:" );
    scanf("%s", &name);
    ptr=name;
    
    while (ptr[i]!='\0') { //NULL da kullanılabilir.
        printf("%c", ptr[i]);
        i++;
    }printf("\n");
}

void array4(){
    char *ptr,name[50];
    int i=0;
    printf("İsminizi giriniz:" );
    scanf("%s", &name);
    ptr=name;
    
    while (*(ptr+i)!=NULL) {
        printf("%c", *(ptr+i));
        i++;
    }printf("\n");
}

void array5(){
    char *cities[3]={"Istanbul","Kocaeli","Tekirdag"};
    for (int i=0; cities[i]!='\0'; i++) {
        printf("%s\n", *(cities+i));
    }
    
}
int main() {
    array();
    array2();
    array3();
    array4();
    array5();
    
    return 0;
}


