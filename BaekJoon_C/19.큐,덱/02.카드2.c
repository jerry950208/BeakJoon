/*
	카드 2
	N장의 카드가 있다(1부터 N까지) 
	1번카드가 제일 위에, N번 카드가 제일 아래인 상태로 순서대로 카드가 놓여있다
	1. 아래 동작을 카드가 한 장 남을때 까지 반복하게 된다
	2. 우선 제일 위에있는 카드를 바닥에 버리고, 그 다음 제일 위에있는 카드를 제일 아래에 있는 카드 밑으로 옮긴다
	
	첫째 줄에 남게 되는 카드의 번호를 출력한다
*/

#include <stdio.h>

int tmp, q[1000001];

int card(int N);
void pop();
void back(int index);

int main(void){
	
	int N;
	scanf("%d", &N);

	printf("%d\n", card(N));

	return 0;
}

void pop(){
	tmp++;
}

void back(int index){
	q[index] = q[tmp];
	tmp++;
}

int card(int N){
	
	int check = 0, index;
	index = N;

	for(int i=1; i<=N; i++)
		q[i-1] = i;
	
	while(index - tmp > 1){
		
		if(check){
			back(index);
			check = 0;
			index++;
		}

		else{
			pop();
			check = 1;
		}
	}

	return q[tmp];
}
