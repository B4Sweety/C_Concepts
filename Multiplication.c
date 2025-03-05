#include<stdio.h>

int Multiplication(int Number1, int Number2)
{
    int Mult = 0;

    Mult = Number1 * Number2;

    return Mult;

}

int main()
{
    int No1 = 0, No2 = 0, Ans = 0;

    printf("Enter first number : \n");
    scanf("%d",&No1);

    printf("Enter second number : \n");
    scanf("%d",&No2);

    Ans = Multiplication(No1,No2);

    printf("Multiplication is : %d\n",Ans);

    return 0;
}