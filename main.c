#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double math,x1,x2,delta;
    unsigned int N,variant;

    printf("Enter variant (1 or 2):");
    scanf("%d",&variant);
   while(variant!= 1 && variant!= 2)        {
        printf("Enter variant again(1 or 2):");
        scanf("%d",&variant);
        }
    if (variant == 1)
        {
        printf("\nEnter x1: ");
        scanf("%lf",&x1);
        printf("\nEnter x2: ");
        scanf("%lf",&x2);
        printf("\nSelect N: ");
        scanf("%u",&N);

            printf("\n***********************");
            printf("\n*  N  *  X  *  F(X)   *");
            printf("\n***********************");

        delta=(x2-x1)/(N-1);
        for(int i=1;i<=N;i++)
        {
            math=1+x1+1;
            printf("\n|%6.0d|%15.2f|%16.2f|",i,x1,math);
            if(i%10==0)
            {
                printf("\n|__________|______________|_______________|\n");
                system("pause");
                printf("\n_____________________________________________");
            }
        x1+=delta;
            }
        }
    if (variant == 2){
        printf("\nEnter x1: ");
        scanf("%lf",&x1);
        printf("\nEnter x2: ");
        scanf("%lf",&x2);
        printf("\nEnter delta:");
        scanf("%lf",&delta);

        printf("\n************************************************");
        printf("\n*  N  *         X         *        F(X)        *");
        printf("\n************************************************");
        while(x1<x2)
        {
            math=1+x1+1;
            printf("\n|%6.0d|%15.2f|%16.2f|\n",N,x1,math);
            if(N%10==0)
            {
                printf("\n|_____|___________________|____________________|\n");
                system("pause");
                printf("\n________________________________________________");
            }
            x1+=delta;
            N++;
        }
    }
    return 0;
}
