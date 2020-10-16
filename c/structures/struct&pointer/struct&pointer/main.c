#include <stdio.h>
#include <string.h>

struct ceo {
    char name[50],company[50];
    float fortune;
    int age;
};

struct companies {
    char name[50],ceo[50];
    int value;
};

int main() {
    
    struct ceo c;
    strcpy(c.name, "Bill Gates");
    strcpy(c.company, "Microsoft");
    c.fortune=97.9;
    c.age=62;
    
    printf("İsim: %s\n", c.name);
    printf("Şirket: %s\n", c.company);
    printf("Serveti: %.1f\n", c.fortune);
    printf("Yaş: %d\n\n", c.age);
    
    struct ceo *cptr=&c;
    
    printf("İsim: %s\n", (*cptr).name);
    printf("Şirket: %s\n", (*cptr).company);
    printf("Serveti: %.1f\n", (*cptr).fortune);
    printf("Yaş: %d\n\n", (*cptr).age);
    
    printf("İsim: %s\n", cptr->name);
    printf("Şirket: %s\n", cptr->company);
    printf("Serveti: %.1f milyar\n", cptr->fortune);
    printf("Yaş: %d\n\n", cptr->age);
    
    struct companies cmp[3]={{"Microsoft","Bill Gates",739},{"Apple","Tim Cook",935},{"Amazon","Jeff Bezos",902}
    };
    
    for (int i=0; i<3; i++) {
        printf("Şirket: %s - CEO: %s - Piyasa Değeri: %d milyar\n", cmp[i].name, cmp[i].ceo, cmp[i].value);
    }
    struct companies *cmptr=cmp;
    printf("\nPointerdan sonra\n");
    
    for (int i=0; i<3; i++) {
        printf("Şirket: %s - CEO: %s - Piyasa Değeri: %d milyar\n", cmptr->name, cmptr->ceo, cmptr->value);
        cmptr++;
    }
    
    return 0;
}
