#include<stdio.h>

int main(){

    int i, x=1, j=0;
    while(x!=0){
        scanf("%d", &x);
        for(i=1; i<=x; i++){
            j++;
            if(j==x){
                printf("%d\n", i);
                j=0;
            }else{
                printf("%d ", i);
            }
        }
    }

  return 0;
}
