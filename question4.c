#include<stdio.h>
#include<stdbool.h>
#include<string.h>
int main(){
    float subtotal,finalbill,dis_amnt;
    float q,p,d,t;
    printf("enter quantity,rate,discount,tax");
    scanf(" %f",&q);
    scanf(" %f",&p);
    scanf(" %f",&d);
    scanf(" %f",&t);
    if (q<0 || p<0 || d<0 || t<0 ){
        printf("negetive value not allowed");
    }else
    {
        subtotal=q*p;
        dis_amnt=subtotal-(subtotal*d)/100;
        finalbill=dis_amnt+(dis_amnt*t)/100;
        printf("bill details");
        printf("your sutotal is %f",subtotal);
        printf("your discounted amount is %f",dis_amnt);
        printf("your final bill is %f",finalbill);
    }
    



    return 0;
}