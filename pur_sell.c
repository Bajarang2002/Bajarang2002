#include<stdio.h>
int main()
{
    int purchase_amount,selling_amount,loss,profit;
    printf("Enter the purchase amount:");
    scanf("%d",&purchase_amount);
    printf("Enter the Selling amount:");
    scanf("%d",&selling_amount);
    if(purchase_amount>selling_amount)
    {
    loss=purchase_amount-selling_amount;
    printf("loss is:%d",loss);
    }
    else
    {
    profit=selling_amount-purchase_amount;
    printf("profit is:%d",profit);
    }
    return 0;
}
