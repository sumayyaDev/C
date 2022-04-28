#include<stdio.h>

int main(){

    int t;
    scanf("%d", &t);

    while(t--){
        int pA, pB;
        float g1, g2;
        scanf("%d%d%f%f", &pA, &pB, &g1, &g2);
        int year=0;
        while(1){
            pA = pA + (int)((pA*g1)/100);
            pB = pB + (int)((pB*g2)/100);
            year++;
            if(pA>pB){
                break;
            }
        }
        if(year>100){
           printf("Mais de 1 seculo.\n");
        }
        else{
           printf("%d anos.\n", year);
        }

    }

  return 0;
}
