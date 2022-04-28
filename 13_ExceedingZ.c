#include<stdio.h>

int main(){

    int x, z, i, sum=0, count=0;
    scanf("%d", &x);
    while(1){
        scanf("%d", &z);
        if(z>x){
            break;
        }
    }
    for(i=0;  ; i++){
        sum += x;
        count++;
        x++;
        if(sum>z){
            break;
        }
    }
    printf("%d\n", count);

  return 0;
}
