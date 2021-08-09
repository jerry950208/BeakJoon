/*
	이항계수 1
	
	자연수 N과 정수 K가 주어졌을때 이항계수 nCk를 구하는 프로그램 작성
*/
#include <iostream>

using namespace std;

int func_Factorial(int a);
int func_Combination(int a, int b);

int main(void){
		
		ios::sync_with_stdio(false);
		cin.tie(NULL);
		cout.tie(NULL);

        int N, K;
        cin >> N >> K;

        cout << func_Combination(N, K) << "\n";
}

int func_Factorial(int a){
		
        if(a == 1)
        	return 1;
		
		int output = 1;
		for(int i=2; i<=a; i++)
			output *= i;

        return output;
}

int func_Combination(int a, int b){

        return func_Factorial(a) / (func_Factorial(b) * func_Factorial(a-b));
}
