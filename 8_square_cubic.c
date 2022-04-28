#include<stdio.h>

int main(){

    int n, i, i1, i2, i3;
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        i1=i; i2=i*i; i3=i*i*i;
        printf("%d %d %d\n", i1,i2,i3);
    }



  return 0;
}
