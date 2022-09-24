#include <stdio.h>

int main()
{
    float amount,rate,payment;
    int i=0;
    
    printf("please input total amount,rate(for a year) and payment(a month) in order\n");
    scanf("%f %f %f",&amount,&rate,&payment);

    while(amount>0.0)
    {
        amount = amount - payment + amount * rate/1200.0;
        i = i + 1;
        if(amount>0.0){
            printf("%d : %.2f\n",i,amount);
        }else{
            printf("%d : 0.00\n",i);
        }
    }
    printf("total:%d months",i);
    return 0;
}
//本