#include<stdio.h>

int main(){
	int num1,num2;
	int i,j;
	
	scanf("%d %d",&num1,&num2);
	
	num1=((num1%10)*100)+(((num1%100)/10)*10)+(num1/100);
	num2=((num2%10)*100)+(((num2%100)/10)*10)+(num2/100);
	
	if(num1<num2)
	printf("%d",num2);
	else if(num1>num2)
	printf("%d",num1);
	return 0;
}
