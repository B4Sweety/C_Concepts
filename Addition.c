#include<stdio.h>

int Addition(int Number1, int Number2)
{
    int Add = 0;

    Add = Number1 + Number2;

    return Add;

}

int main()
{
    int No1 = 0, No2 = 0, Ans = 0;

    printf("Enter first number : \n");
    scanf("%d",&No1);

    printf("Enter second number : \n");
    scanf("%d",&No2);

    Ans = Addition(No1,No2);

    printf("Addition is : %d\n",Ans);

    return 0;
}