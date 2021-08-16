/*	
	제로
	정수 K를 입력받고 숫자를 입력받는다
	만약 0이 입력되었다면 가장 최근의 입력받는수를 지운다
	맞는 수들의 합을 출력하시오
*/
#include <stdio.h>

int stack[100000], stack_cnt;

void func_Push(int N);
void func_Pop();

int main(void){
	
	int K,num;
	scanf("%d",&K);

	for(int i=0; i<K; i++){
		
		scanf("%d",&num);
		
		if(num != 0)	func_Push(num);
		else	func_Pop();
	}

	int sum = 0;
	for(int i=0; i<stack_cnt; i++) sum += stack[i];
	
	printf("%d\n",sum);
}

void func_Push(int N){

	stack[stack_cnt] = N;
	stack_cnt++;
}

void func_Pop(){
	
	stack[stack_cnt-1] = 0;
	stack_cnt--;
}
