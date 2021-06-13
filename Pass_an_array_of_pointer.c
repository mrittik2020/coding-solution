#include<stdlib.h>
#include<stdio.h>
void Display(int *[],int);

int main()
{
    int A=100,B=200,C=400;
    int *X[3]={NULL};
    X[0]=&A;
    X[1]=&B;
    X[2]=&C;
    Display(X,3);
    printf("After Modification\n");
    *(X[2])=500;
    Display(X,3);
}

void Display(int *P[],int Num)
{
for (int CR = 0; CR < Num; CR++)
{
    printf("%p ---> %d\n",P[CR],*(P[CR]));
}


}

