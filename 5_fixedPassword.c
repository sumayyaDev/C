#include<stdio.h>

int main(){

    int ipass;
    do{
        scanf("%d", &ipass);
        if(ipass!=2002){
            printf("Senha Invalida\n");
        }
    }while(ipass!=2002);
    printf("Acesso Permitido\n");

  return 0;
}
