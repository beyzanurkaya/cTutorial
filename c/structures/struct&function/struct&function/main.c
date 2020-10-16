#include <stdio.h>

struct ceo {
    char name[50],company[50];
    int age;
    float fortune;
};

void showit(struct ceo c){
    printf("İsim:   %s\n", c.name);
    printf("Şirket: %s\n", c.company);
    printf("Yaş:    %d\n", c.age);
    printf("Servet: %.1f milyar\n", c.fortune);
}

int main() {
    
    struct ceo c={"Bill Gates","Microsoft",62,97.9};
    showit(c);
    
    return 0;
}
