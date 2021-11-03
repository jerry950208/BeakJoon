/*
	팩토리얼
	0보다 크거나 같은 정수 N이 주어진다
	N!을 출력하는 프로그램을 작성하시오
*/
#include <iostream>
using namespace std;

int factorial(int a){
	
	if(a <= 1)
		return 1;
	return a * factorial(a-1);
}

int main(void){
	
	int input;
	cin >> input;

	cout << factorial(input) << endl;
	return 0;
}
