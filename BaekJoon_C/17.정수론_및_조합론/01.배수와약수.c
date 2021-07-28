/*
	배수와 약수
	1.첫 번째 숫자가 두 번째 숫자의 약수이다. 				-> factor
	2.첫 번째 숫자가 두 번째 숫자의 배수이다.				-> multiple
	3.첫 번째 숫자가 두 번째 숫자의 약수와 배수 모두 아니다.-> neither
*/
#include <stdio.h>

int main(){

	int first = 1 ,end = 1;

	while(1){
		scanf("%d %d",&first, &end);
		
		if(first == 0 && end == 0)
			break;
		else if(end % first == 0)
			puts("factor");
		else if(first % end == 0)
			puts("multiple");
		else
			puts("neither");

	}
	return 0;
}
