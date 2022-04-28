#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int PA,PB,y=0;
        float G1,G2;
        scanf("%d%d%f%f",&PA,&PB,&G1,&G2);
        while(1)
        {
            PA = PA + (int)(((float)PA*G1)/100);
            PB = PB + (int)(((float)PB*G2)/100);
            y++;
            if(PA>PB)
                break;
        }
        if(y>100)
            printf("Mais de 1 seculo.\n",y);
        else
            printf("%d anos.\n",y);
    }

    return 0;
}
