#include<stdio.h>

int main(){

    int a, g, d, n;
    a=g=d=0;
    while(1){
        scanf("%d", &n);
        if(n==4){
            break;
        }
        else if(n==1){
            a++;
        }
        else if(n==2){
            g++;
        }
        else if(n==3){
            d++;
        }
    }
    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", a, g, d);

  return 0;
}
