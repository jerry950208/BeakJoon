/*
	큐2
	
	정수를 저장하는 큐를 구현한 다음, 입력으로 주어지는 명령을 처리하는 프로그램을 작성하시오
	
	1. push X : 정수 X를 큐에 넣는 연산이다
	2. pop : 큐에서 가장 앞에 있는 정수를 빼고, 그 수를 출력한다 (큐에 들어있는 정수가 없는 경우에는 -1 을 출력한다)
	3. size : 큐에 들어있는 정수의 개수를 출력한다
	4. empty : 큐가 비어있으면 1, 아니면 0을 출력한다
	5. front : 큐의 가장 앞에 있는 정수를 출력한다 (큐에 들어있는 정수가 없는 경우에는 -1 을 출력한다)
	6. back : 큐의 가장 뒤에 있는 정수를 출력한다 (큐에 들어있는 정수가 없는경우에는 -1 을 출력한다)
*/
#include <stdio.h>
#include <string.h>

int main(void){
	
	int N, q[2000001] = { 0 }, q_cnt = 0, num, zero = 0;
	char str[7];
	scanf("%d", &N);
	
	for(int i=0; i<N; i++){
		scanf("%s", str);

		if(strcmp(str,"push") == 0){
			scanf("%d", &num);
			q[q_cnt++] = num;
		}

		else if(strcmp(str,"front") == 0){

			if(q[zero] == 0)
				printf("-1\n");

			else
				printf("%d\n", q[zero]);
		}

		else if(strcmp(str,"back") == 0){
			
			if(q[zero] == 0)
				printf("-1\n");

			else
				printf("%d\n", q[q_cnt-1]);
		}

		else if(strcmp(str,"pop") == 0){
			
			if(q[zero] == 0)
				printf("-1\n");

			else{
				
				printf("%d\n", q[zero]);
				zero++;
			}
		}

		else if(strcmp(str,"size") == 0){
			printf("%d\n", q_cnt);
		}

		else if(strcmp(str,"empty") == 0){
			
			if(q[zero] == 0)
				printf("1\n");

			else
				printf("0\n");
		}
	}
	return 0;
}
