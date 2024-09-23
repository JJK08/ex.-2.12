#include<stdio.h>

int main() {
    float prezzo_biglietto;
    float provvigione;
    float prezzo_finale;
    printf("inserisci il prezzo del biglietto: ");
    scanf("%f",&prezzo_biglietto);
    provvigione=prezzo_biglietto*0.15;
    prezzo_finale=prezzo_biglietto-provvigione;
    printf("valore del provvigione:%.2feuro\n",provvigione);
    printf("prezzo finale del biglietto:%.2feuro\n",prezzo_finale);
    return 0;
}