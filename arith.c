#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,d,e,f,g;
    clrscr();
    printf("\n Enter the first number:");
    scanf("%d",&a);
    printf("\n Enter the second number:");
    scanf("%d",&b);
    c=a+b;
    d=a-b;
    e=a*b;
    f=a/b;
    g=a%b;
    printf("\n addition=%d",c);
    printf("\n substraction=%d",d);
    printf("\n multiplication=%d",e);
    printf("\n division=%d",f);
    printf("\n reminder=%d",g);
    getch();
}
