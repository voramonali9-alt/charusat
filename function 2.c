#include<stdio.h>
int add(int,int);
int main(){
int result;
int n1,n2;
scanf("%d",&n1);
scanf("%d",&n2);
result=add(n1,n2);
printf("%d ",result);
return 0;}
int add(int a,int b){
return a+b;}
