#include<stdio.h>

int main(){

    int n, i, j;
    scanf("%d", &n);
    if(n>1 && n<1000){
        for(i=1; i<=n; i++){
            for(j=1; j<=2; j++){
                if(j==1){
                    printf("%d %d %d\n", i, i*i, i*i*i);
                }
                if(j==2){
                    printf("%d %d %d\n", i, (i*i)+1, (i*i*i)+1);
                }
            }
        }
    }


  return 0;
}
