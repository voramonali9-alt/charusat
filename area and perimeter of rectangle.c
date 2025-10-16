#include<stdio.h>
int main(){
float length,breadth,area,perimeter;

printf("enter a leangth ");
scanf("%f",&length);
printf("enter a breadth ");
scanf("%f",&breadth);
if(length<=0 || breadth<=0){
printf("dimensions must be positive");
}
else{
area=length*breadth;
perimeter=2*(length+breadth);
printf("%.2f sq.m \n",area);
printf("%.2f m \n",perimeter);}

return 0;}
