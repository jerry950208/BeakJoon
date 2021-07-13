#include <stdio.h>
#define MAX 1000000
int arr[MAX];
int main(){
	int n;
	int num1,num2,num3,num4,num5,num6,num7;
	int cnt=0;
	
	scanf("%d",&n);
	
	for(int i=n;i>=0;i--){
		if(i/100000>0){
			num1=i%10;
			num2=(i%100)/10;
			num3=(i%1000)/100;
			num4=(i%10000)/1000;
			num5=(i%100000)/10000;
			num6=(i%1000000)/100000;
			num7=i/1000000;
			if(i+num1+num2+num3+num4+num5+num6+num7==n){
				cnt++;
				arr[cnt]=i;	
			}
		}
		else if(i/10000>0){
			num1=i%10;
			num2=(i%100)/10;
			num3=(i%1000)/100;
			num4=(i%10000)/1000;
			num5=(i%100000)/10000;
			num6=i/100000;
			if(i+num1+num2+num3+num4+num5+num6==n){
				cnt++;
				arr[cnt]=i;	
			}
		}
		else if(i/1000>0){
			num1=i%10;
			num2=(i%100)/10;
			num3=(i%1000)/100;
			num4=(i%10000)/1000;
			num5=i/10000;
			if(i+num1+num2+num3+num4+num5==n){
				cnt++;
				arr[cnt]=i;	
			}
		}
		else if(i/1000>0){
			num1=i%10;
			num2=(i%100)/10;
			num3=(i%1000)/100;
			num4=i/1000;
			if(i+num1+num2+num3+num4==n){
				cnt++;
				arr[cnt]=i;	
			}
		}
		else if(i/100>0){
			num1=i%10;
			num2=(i%100)/10;
			num3=i/100;
			if(i+num1+num2+num3==n){
				cnt++;
				arr[cnt]=i;	
			}
		}
		else if(i/10>0){
			num1=i%10;
			num2=i/10;
			if(i+num1+num2==n){
				cnt++;
				arr[cnt]=i;	
			}
		}
	}
	printf("%d",arr[cnt]);
	return 0;
}
