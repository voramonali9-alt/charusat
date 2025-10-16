#include<stdio.h>
int main(){
    int n;
    int i;
    int count=0;
    int choice;
  scanf("choice %d",&choice);
    printf("enter a number");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
            if(choice==i){
printf("%d is booked ",i);
i=1;}
else{
    i=0;
}

printf("1.car arrived");
printf("2.car deparatus");
printf("3.display status");
printf("4. show empty slot");
printf("5.count occupied slots");
printf("0. exit");
printf("enter your choice");
scanf("%d",&choice);
 switch(choice){
  case 1: if(i==1){
  printf("slot is empty");}
      if(i==0)
    printf("slot is not empty");
    break;
  }
  case 2: if(i==1){
  printf(" warning slot is empty");
  break;}

  case 3: if(i==1){
  printf("slot it empty");}
  if(i==0){
    printf("slot is not available");
  break;}
case 4: if(i==0){
 printf("slot is not empty");
 break;}
 case 5:if(i ==1){
 printf("slot is empty");
 }
 else{
    printf("slot is not empty");
  break;}
 case 0:
    printf("exiting");
    break;
 }
 return 0;
}
