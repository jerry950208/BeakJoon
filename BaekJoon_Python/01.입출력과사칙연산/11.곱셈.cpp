/*
	곱셈
	세자리수가 주어질때 각 자리수를 곱한값 출력
	마지막엔 A,B 곱셈이 나와야 한다
*/
#include <iostream>

using namespace std;

int main(){
	
	int A,B;
	cin >> A >> B;

	cout << A * (B % 10 ) << "\n";
	cout << A * ((B / 10) % 10) << "\n";
	cout << A * (B / 100) << "\n";
	cout << A * B << "\n";
	return 0;
}
