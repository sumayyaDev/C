#include<stdio.h>

int main(){

    int n, i, j, max=0;

    for(i=1; i<=100; i++){
        scanf("%d", &n);
        if(max<n){
            max=n;
            j=i;
        }
    }
    printf("%d\n", max);
    printf("%d\n", j);

  return 0;
}
