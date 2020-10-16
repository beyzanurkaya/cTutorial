#include <stdio.h>

void func(int id1);

int main() {
    
    int sum,subs,mult,div,mod,num1=12,num2=4;
    sum=num1+num2;
    subs=num1-num2;
    mult=num1*num2;
    div=num1/num2;
    mod=num1%num2;
    printf("Toplam= %d\nFark= %d\nÇarpım= %d\nBölüm= %d\nMod= %d\n",sum,subs,mult,div,mod);
    int exp1=5,exp2=7;
    float div2=(float)exp1/(float)exp2; //Sayıların floata dönüştürülmesi gerek.
    printf("Bölüm= %f\nBölüm2= %.1f\nBölüm3= %.2f\n", div2, div2,div2); //Virgülden sonra kaç basamak yazılması isteniliyorsa .1,.2 şeklinde belirtilmeli.
    int num3,num4;
    printf("Sayı1= ");
    scanf("%d",&num3);
    printf("Sayı2= ");
    scanf("%d",&num4);
    printf("Toplam= %d\nFark= %d\nÇarpım= %d\nBölüm= %d\n", num3+num4, num3-num4, num3*num4, num3/num4);
    
    int bölünen,bölen,kalan,bölüm;
    printf("Bölünen= ");
    scanf("%d", &bölünen);
    printf("Bölen= ");
    scanf("%d", &bölen);
    bölüm=bölünen/bölen;
    kalan=bölünen%bölen;
    printf("%d/%d= %d\nKalan= %d\n",bölünen,bölen,bölüm,kalan);
    
    float pi=3.14;
    int r;
    printf("Yarıçapı giriniz: ");
    scanf("%d", &r);
    float area=pi*r*r;
    printf("Dairenin alanı: %.2f\n", area);
    
    char cd1 = 'S';
    char cd2;
    
    cd2 = (cd1 & 128) ? '1' : '0'; //&: İşlem yapılan değerlerin karşılıklı gelen her iki bit'i 1 ise, 1 değerini verir.
    printf ("%c ", cd2);
    cd2 = (cd1 & 64) ? '1' : '0';
    printf ("%c ", cd2);
    cd2 = (cd1 & 32) ? '1' : '0';
    printf ("%c ", cd2);
    cd2 = (cd1 & 16) ? '1' : '0';
    printf ("%c ", cd2);
    cd2 = (cd1 & 8) ? '1' : '0';
    printf ("%c ", cd2);
    cd2 = (cd1 & 4) ? '1' : '0';
    printf ("%c ", cd2);
    cd2 = (cd1 & 2) ? '1' : '0';
    printf ("%c ", cd2);
    cd2 = (cd1 & 1) ? '1' : '0';
    printf ("%c ", cd2);
    
    char cd3 = 'N';
    char cd4 = 'S';
    
    printf("cd3 değişkeninin ilk değeri: %d\n", cd3); //^: İşlem yapılan değerlerin karşılıklı gelen bit'lerinden ikisi de aynı değeri taşıyorsa 0, aksi takdirde 1 değerini verir.
    cd3 = cd3 ^ cd4;
    printf("cd3 değişkeninin ilk işlem sonrası değeri: %d\n", cd3);
    cd3 = cd3 ^ cd4;
    printf("cd3 değişkeninin ikinci işlem sonrası değeri: %d\n", cd3);
    
    //| : İşlem yapılan değerlerin karşılıklı gelen bit'lerinden herhangi biri 1 ise, 1 değerini verir.
    //~ : Tek değere işlem yapar. int veya char bir değer içindeki bütün bit değerlerini tersine çevirir (1 ise 0, 0 ise 1 yapar).
    
    int id1, id2;
    
    id1 = 114;
    id2 = 73;
    
    printf("%d: ", id1);
    func(id1);
    printf("%d : ", id2);
    func(id2);
    
    id1 = id1 << 1; //Sola kaydırma bit işlemcisini kullandığınızda, değişkenin ikili sayı sistemine göre yazılmış olan değerinde yer alan bitler << işlemcisinin sağında yer alan int değer kadar sola kayar. Bu durumda, en sağda boşalan bitlerin yerine 0 değeri gelir. Sağa kaydırma bit işlemcisi kullandığınızda ise, değişkenin ikili sayı sistemine göre yazılmış olan değerinde yer alan bitler >> işlemcisinin sağında yer alan int değer kadar sağa kayar. Bu durumda en solda boşalan bitlerin yerine 0 değeri gelir.
    id2 = id2 >> 1;
    printf("\n");
    
    printf("%d: ", id1);
    func(id1);
    printf("%d : ", id2);
    func(id2);
    
    return 0;
    
}

void fonk1 (int id1){
    printf ("%c ", (id1 & 128) ? '1' : '0');
    printf ("%c ", (id1 & 64) ? '1' : '0');
    printf ("%c ", (id1 & 32) ? '1' : '0');
    printf ("%c ", (id1 & 16) ? '1' : '0');
    printf ("%c ", (id1 & 8) ? '1' : '0');
    printf ("%c ", (id1 & 4) ? '1' : '0');
    printf ("%c ", (id1 & 2) ? '1' : '0');
    printf ("%c\n", (id1 & 1) ? '1' : '0');
}
