/*
	분해합
	자연수 N이 있을 때, 그 자연수 N의 분해합은 N과 N을 이루는 각 자리수의 합을 의미한다. 
	어떤 자연수 M의 분해합이 N인 경우, M을 N의 생성자라 한다
	

	자연수 N이 주어졌을 때, N의 가장 작은 생성자를 구해내는 프로그램을 작성하시오.
	
	첫째줄에  답을 출력하고 생성자가 없을경우에는 0을 출력한다
*/
#include <stdio.h>

int func_decp(int num);

int main(void){
	
	int N;
	scanf("%d",&N);

	for(int i=1; i<=N; i++){
		
		int result = func_decp(i) + i;
		if(result == N){
			printf("%d\n",i);
			break;
		}
		else if(i == N){
			printf("0\n");
			break;
		}
	}
	return 0;
}

int func_decp(int num){
	
	int sum = 0;
	while(1){
		
		if(num == 0)
			break;
		
		else{
			sum += num%10;
			num /= 10;
		}
	}

	return sum;
}
/*
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
}*/
