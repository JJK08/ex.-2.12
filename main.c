#include<stdio.h>

int main() {
    int giorno1,giorno2,mesi1,mesi2,anno1,anno2,diff;
    printf("inserisci la prima data in forma dd mm yyyy: ");
    scanf("%d %d %d",&giorno1,&mesi1,&anno1);
    printf("inserisci la seconda data in forma dd mm yyyy: ");
    scanf("%d %d %d",&giorno2,&mesi2,&anno2);
    diff=giorno2-giorno1+(mesi2-mesi1)*30+(anno2-anno1)*360;
    giorno1=diff%30;
    giorno2=(diff/30)%12;
    anno1=diff/360;
    printf("la differenza tra due date e':%d giorni,%d mesi,%d anno",giorno1,mesi1,anno1);
    return 0;
}