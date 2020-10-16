#include <stdio.h>

int main() {
    
    int age;
    
    printf("Yaşınızı giriniz: ");
    scanf("%d", &age);
    
    if (age>=18) {
        printf("Welcome abord.\n");
    }
    
    return 0;
}
