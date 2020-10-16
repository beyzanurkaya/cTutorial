#include <stdio.h>
#define n 5 //n yerine 5 koy.

void grade(int point[], int size2){
    int max=0;
    for (int i=0; i<size2; i++) {
        printf("%d.öğrencinin sınav sonucunu giriniz: ", i+1);
        scanf("%d", &point[i]);
        if (point[i]>max) {
            max=point[i];
        }
    }printf("Sınıftaki en yüksek not: %d\n", max);
}

float average(int point[], int size){
    int result=0;
    for (int i=0; i<size; i++) {
        result+=point[i];
    }
    float avr=(float)result/(float)size;
    printf("Sınıfın not ortalaması: %.1f\n", avr);
    
    return avr;
}

int main() {
    int array[n];
    grade(array, n);
    average(array, n);
    
    return 0;
}
