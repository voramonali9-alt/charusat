#include<stdio.h>
int main(){
int  balance=5000;
int amount,choice;
while(1){
printf("1.withdraw cash \n  ");
printf(" 2.check balance\n ");
printf(" 3.exit\n ");
printf(" enter your choice:  ");
scanf("%d",&choice);
switch(choice){
case 1:
printf("enter withdraw amount: ");
scanf("%d",&amount);
if(amount<=0){
printf("invalid amount try again");}
else if(amount> balance){
printf("it is a unsufficient");}
else if(amount== balance){
printf(" currently balance%d",balance);
}
break;
case 2:
printf("current balance%d",balance);
break;
case 3:
printf("tahnk you for using atm,good bye");
return 0;
default:
printf("invalid choice try again\n");


}
}
}
