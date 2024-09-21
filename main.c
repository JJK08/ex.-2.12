#include<stdio.h>

int main() {
    float num1;
    float num2;
    float media;
    printf("inserisci il primo numero: ");
    scanf("%f",&num1);
    printf("inserisci il secondo numero: ");
    scanf("%f",&num2);
    media=(num1+num2)/2;
    printf("la media dei due numeri è:%f\n",media);
    return 0;
}
