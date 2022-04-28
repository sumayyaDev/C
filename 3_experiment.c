#include<stdio.h>

int main(){

    int n, i, testN, sum1=0, sum2=0, sum3=0, sumTot=0;
    char type;
    char per='%';
    float avg1, avg2, avg3;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d %c", &testN, &type);
        if(type=='C'){
            sum1 += testN;
        }
        if(type=='R'){
           sum2 += testN;
        }
        if(type=='S'){
            sum3 += testN;
        }
    }
    sumTot = sum1+sum2+sum3;
    avg1=(sum1/(sumTot*1.0))*100.00;
    avg2=(sum2/(sumTot*1.0))*100.00;
    avg3=(sum3/(sumTot*1.0))*100.00;
    printf("Total: %d cobaias\n", sumTot);
    printf("Total de coelhos: %d\n", sum1);
    printf("Total de ratos: %d\n", sum2);
    printf("Total de sapos: %d\n", sum3);
    printf("Percentual de coelhos: %.2f %c\n", avg1, per);
    printf("Percentual de ratos: %.2f %c\n", avg2, per);
    printf("Percentual de sapos: %.2f %c\n", avg3, per);


  return 0;
}
