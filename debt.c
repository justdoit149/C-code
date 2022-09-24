#include <stdio.h>

int main()
{
    float amount,rate,payment;
    int i=0;
    
    printf("please input total amount,rate(for a year) and payment(a month) in order\n");
    scanf("%f %f %f",&amount,&rate,&payment);                //输入数据

    while(amount>0.0)
    {
        amount = amount - payment + amount * rate/1200.0;    //重置剩余欠款数
        i = i + 1;                                           //记月
        if(amount>0.0){
            printf("%d : %.2f\n",i,amount);                  //未还清的情况
        }else{
            printf("%d : 0.00\n",i);                         //能还清的情况              
        }
    }
    printf("total:%d months",i);                             //输出总时间
    return 0;
}
//目的：输入贷款总额、贷款年利率以及每月应还的钱数，输出每个月欠款数以及还清贷款的总时间。