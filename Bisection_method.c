#include<stdio.h>
#include<conio.h>
float fun(float x)
{
float a;
a=(x*x*x)-2*x-5;
return a;
}
int main()
{
    float a,b,avg,fn;
    printf("Enter the closest -ve value of =>");
    scanf("%f",&a);
    printf("\nEnter the closest +ve value of =>");
    scanf("%f",&b);
    printf("\nThe Values are=>\nNo\t|A\t\t|B\t\t|Average\t|f(x)\n");

    for (int i = 0; i < 20; i++)
    {
        avg=(a+b)/2;
        fn=fun(avg);
        printf("%d\t|%f\t|%f\t|%f\t|%f",i+1,a,b,avg,fn);
        printf("\n");
        if(fn>0)
        {
            b=avg;
        }
        else
        {
            a=avg;
        }
        
    }
    printf("\n");
    printf("The Real Root of this equation=>%.5f",avg);
}