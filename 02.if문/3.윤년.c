#include <stdio.h>
//4의 배수이면서 100의 배수가 아닐때, 400의 배수일때
int main(){
int year;
scanf("%d",&year);
if(year%4==0 && (year%100!=0 || year%400==0))
printf("1");

else 
printf("0");
return 0;
}
