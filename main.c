#include<stdio.h>

int main() {
    int gg1,gg2,me1,me2,an1,an2,diff;
    printf("inserire la prima dat del formato dd mm yyyy: ");
    scanf("%d %d %d",&gg1,&me1,&an1);
    printf("inserire la seconda data del formato dd mm yyyy: ");
    scanf("%d %d %d",&gg2,&me2,&an2);
    diff=gg2-gg1+(me2-me1)*30+(an2-an1)*3600;
    gg1=diff%30;
    me1=(diff/30)%12;
    an1=diff/360;
    printf("la differenza tra le due anni e': %d gg,%d me;%d an\n",gg1,me1,an1);
    return 0;
}