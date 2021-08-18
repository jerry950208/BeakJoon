/*
	스택수열
	
	1부터 N까지의 수를 스택에 넣음으로써 하나의 수열을 만들 수 있다
	이때, 스택에 push하는 순서는 반드시 오름차순을 지키도록 한다고 하자
	임의의 수열이 주어졌을때 스택을 이용해 그 수열을 만들수 있는지 없는지.
	있다면 어떤 순서로 push와 pop연산을 수행해야하는지를 알아낼수 있다
	이를 계산하는 프로그램을 작성하라
*/
#include <stdio.h>
#include <string.h>

void push(int K);
void pop();

int stack[100000], sequence_cnt, str_cnt;
int stack_cnt, flag;
char str[200050];

void func_Sequence(int K);

int main(void){
	
	int N,arr[100000];
	scanf("%d",&N);

	for(int i=0; i<N; i++){
		scanf("%d",&arr[i]);
		func_Sequence(arr[i]);
	}

	if(flag == 1)
		printf("NO\n");
	
	else
		for(int i=0; i<str_cnt; i++)
			printf("%c\n",str[i]);
	return 0;
}

void func_Sequence(int K){
	
	if(sequence_cnt < K){
		for(int i=sequence_cnt+1; i<=K; i++){
			push(i);
			str[str_cnt++] = '+';
		}
		sequence_cnt = K;
	}

	if(stack[stack_cnt-1] == K){
		pop();
		str[str_cnt++] = '-';
	}

	else if(stack[stack_cnt-1] != K)
		flag = 1;
}

void push(int K){
	
	stack[stack_cnt++] = K;
}

void pop(){
	
	stack[stack_cnt--] = 0;
}
