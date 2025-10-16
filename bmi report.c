#include<stdio.h>
int main(){
float weight,height,bmi;
printf("enter a weight in kg");
scanf("%f",&weight);
printf("enter a height in meter");
scanf("%f",&height);
if(weight<=0 || height<=0){
printf("error");}
else{
bmi=weight/(height*height);//18.5 24.9 25 29.9 under wight,normal,over ,else obese
printf("%f",bmi);
if(bmi<=18.5){
printf("under weight");}
else if(bmi>18.5 && bmi<=24.9){
printf("normal weight");}
else if(bmi>=25 && bmi<=29.9){
printf("over weight");}
else{
printf("obese");}
}
return 0;}
