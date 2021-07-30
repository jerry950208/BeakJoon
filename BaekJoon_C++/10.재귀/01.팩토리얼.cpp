/*
	팩토리얼
	0보다 크거나 같은 정수 N이 주어진다
	N!을 출력하는 프로그램을 작성하시오
*/
#include <iostream>

using namespace std;

int func_Factorial(int N);

int main(){
	
	int N;
	cin >> N;
	
	cout << func_Factorial(N) << endl;
}

int func_Factorial(int N){	
	
	if(N <= 1)
		return 1;

	return func_Factorial(N-1) * N;
}
