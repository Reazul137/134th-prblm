#include<stdio.h>
int main()
{
    int i, n, sum = 0;

    printf("Input value of terms : ");
    scanf("%d",&n);

    printf("\n The first %d natural number is : \n",n);

    for (i=1 ; i <= n; i++)
    {
        printf(" %d",i);
        sum += i;
    }
    printf("\n The sum of Natural number upto %d terms : %d\n",n,sum);

    return 0;
}
