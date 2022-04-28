#include<stdio.h>

int main(){

    int n, i;
    float n1, n2, n3, avg;
    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%f %f %f", &n1, &n2, &n3);
        avg = (2*n1+3*n2+5*n3)/(2+3+5);
        printf("%.1f\n", avg);
    }




 return 0;
}
