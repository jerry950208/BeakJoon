/*
	괄호
	
	주어진 괄호 문자열이 VSP인지 아닌지 판단하여 결과를 YES 또는 NO로 출력하라
	* VSP : 괄호모양이 바르게 구성된 문자열을 올바른 괄호 문자열이라 한
*/
#include <stdio.h>
#include <string.h>

void func_Checker(char str[]);

int main(void){
	
	int N;
	char str[51];
	scanf("%d",&N);

	for(int i=0; i<N; i++){
		scanf("%s",str);
		func_Checker(str);
	}
	return 0;
}

void func_Checker(char str[]){
	
	int len = strlen(str);
	int stack[51] = {0,}, cnt = 0;

	for(int i=0; i<len; i++){
		
		if(str[i] == '('){
			stack[cnt] = str[i];
			cnt++;
		}

		else{
			if(stack[0] == 0){
				printf("NO\n");
				return;
			}
			else{
				stack[cnt-1] = 0;
				cnt--;
			}
		}
	}

	if(stack[0] == 0)	printf("YES\n");
	else	printf("NO\n");
}
