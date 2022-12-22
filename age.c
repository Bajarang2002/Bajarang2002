#include<stdio.h>
int main()
{
    int age;
    printf("Enter the age:");
    scanf("%d",&age);
    if(age>=18)
    {
    printf("It is eligible for voting");
    }
    else
    {
    printf("It is not eligible for voting");
    }
    return 0;
}
