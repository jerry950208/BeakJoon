/*
	스택
	정수를 저장하는 스택을 수현한 다음, 입력으로 주어지는 명령을 처리하는 프로그램을 작성
*/
#include <stdio.h>
#include <string.h>

int stack[10000], stack_cnt;
void func_Push();
void func_Pop();
void func_Size();
void func_Empty();
void func_Top();

int main(void){
	
	int N;
	char str[6];
	scanf("%d",&N);
	
	for(int i=0; i<N; i++){	
		scanf("%s",str);
		if(strcmp(str,"push") == 0) func_Push();
		else if(strcmp(str, "pop") == 0) func_Pop();	
		else if(strcmp(str, "size") == 0) func_Size();
		else if(strcmp(str, "empty") == 0) func_Empty();
		else  func_Top();
	}

	return 0;
}

//push X : 정수 X를 스택에 넣는 연산
void func_Push(){
	scanf("%d\n",&stack[stack_cnt]);
	stack_cnt++;
}

//pop : 스택에서 가장 위에 있는 정수를 빼고,  그 수를 출력, 스택에 들어있는 정수가 없는 경우에는 -1 출력
void func_Pop(){
	if(stack[0] < 1) printf("-1\n");
	
	else{
		stack_cnt--;
		printf("%d\n",stack[stack_cnt]);
		stack[stack_cnt] = 0;
	}
}

//size : 스텍에 들어가 있는 정수의 개수
void func_Size(){
	printf("%d\n",stack_cnt);
}

//empty : 스택이 비어있으면 1, 아니면 0출력
void func_Empty(){

	if(stack_cnt != 0) printf("0\n");

	else printf("1\n");
}

//top : 스택의 가장 위에 있는 정수를 출력 , 스택에 숫자가 없는 경우는 -1 출력
void func_Top(){
	
	if(stack_cnt != 0) printf("%d\n",stack[stack_cnt - 1]);

	else printf("-1\n");
}
