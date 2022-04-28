#include<stdio.h>

int main(){

    int x, y, i, j=0;
    scanf("%d%d", &x, &y);
    for(i=1; i<=y; i++){
            j++;
            if(j==x){
                printf("%d\n", i);
                j=0;
            }else{
                printf("%d ", i);
            }

        }

  return 0;
}
