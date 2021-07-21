/*
	숫자의합
	N개의 숫자가 공백없이 쓰여있다 이 숫자를 모두 합해서 출력하시오
*/

#include <iostream>

using namespace std;

int main(){
	
	int N,result = 0;
	char num;
	cin >> N;

	for(int i=0; i<N; i++){
		cin >> num;
		result += num-48;
	}

	cout << result << endl;
}
