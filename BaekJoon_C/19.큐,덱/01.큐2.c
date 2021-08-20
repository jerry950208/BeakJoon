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

int N, queue[2000001], q_cnt;

void func_push();
int func_pop();
int func_size();
int func_empty();
int func_front();
int func_back();

int main(void){

        char str[7];
        scanf("%d", &N);

        for(int i=0; i<N; i++){

                scanf("%s",str);

                if(strcmp(str,"push") == 0) 
					func_push();
                else if(strcmp(str,"pop") == 0) 
					printf("%d\n", func_pop());
                else if(strcmp(str,"size") == 0) 
                    printf("%d\n",func_size());
                else if(strcmp(str,"empty") == 0) 
                    printf("%d\n",func_empty());
                else if(strcmp(str,"front") == 0) 
                    printf("%d\n",func_front());
                else if(strcmp(str,"back") == 0) 
                    printf("%d\n",func_back());
        }
        return 0;
}


void func_push(){

        int num;
        scanf("%d", &num);

        queue[q_cnt++] = num;
}

int func_pop(){

        if(queue[0] == 0)
        	return -1;

		int pop = func_front();

        for(int i=0; i<q_cnt-1; i++)
        	queue[i] = queue[i+1];
        q_cnt--;

        if(q_cnt == 0)
                queue[0] = 0;

		return pop;
}
int func_size(){
        return q_cnt;
}

int func_empty(){

        if(q_cnt == 0)
            return 1;
        else
            return 0;
}

int func_front(){

        if(queue[0] == 0)
            return -1;
    
        return queue[0];
}

int func_back(){

        if(queue[0] == 0)
            return -1;
    
        return queue[q_cnt-1];
}
/*
#include <stdio.h>
#include <string.h>

int N, queue[2000001], q_cnt;

void func_push();
void func_pop();
void func_size();
void func_empty();
void func_front();
void func_back();

int main(void){
	
	char str[7];
	scanf("%d", &N);

	for(int i=0; i<N; i++){
		
		scanf("%s",str);
		
		if(strcmp(str,"push") == 0) func_push();
		else if(strcmp(str,"pop") == 0) func_pop();
		else if(strcmp(str,"size") == 0) func_size();
		else if(strcmp(str,"empty") == 0) func_empty();
		else if(strcmp(str,"front") == 0) func_front();
		else if(strcmp(str,"back") == 0) func_back();
	}
	return 0;
}


void func_push(){

	int num;
	scanf("%d", &num);

	queue[q_cnt++] = num;
}

void func_pop(){
	
	if(queue[0] == 0){
		printf("-1\n");
		return;
	}
	
	func_front();
		
	for(int i=0; i<q_cnt-1; i++) 
		queue[i] = queue[i+1];
	q_cnt--;

	if(q_cnt == 0)
		queue[0] = 0;
}

void func_size(){
	
	printf("%d\n",q_cnt);
}

void func_empty(){
	
	if(queue[0] == 0){
		printf("1\n");
		return;
	}

	printf("0\n");
}

void func_front(){
	
	if(queue[0] == 0){
		printf("-1\n");
		return;
	}
	printf("%d\n",queue[0]);
}

void func_back(){
	
	if(queue[0] == 0){
		printf("-1\n");
		return;
	}
	printf("%d\n",queue[q_cnt-1]);
}*/
