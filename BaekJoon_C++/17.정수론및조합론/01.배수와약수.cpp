/*
	배수와 약수
	두 수가 주어졌을 때, 다음 3가지중 어떤 관계인지 구하는 프로그램을 작성하시오
	
	1. 첫 번째 숫자가 두 번째 숫자의 약수이다
	2. 첫 번째 숫자가 두 번째 숫자의 배수이다
	3. 첫 번째 숫자가 두 번째 숫자의 약수와 배수 모두 아니다
*/
#include <iostream>

using namespace std;

int main(void){
	
	int natural_num1 = -1, natural_num2 = -1;
	
	while(1){
		
		cin >> natural_num1 >> natural_num2;
		
		if(natural_num1 == 0 && natural_num2 == 0)
			return 0;

		else if(natural_num2 % natural_num1 == 0 )
			puts("factor");
		
		else if(natural_num1 % natural_num2 == 0)
			puts("multiple");
		
		else
			puts("neither");
	}
}
