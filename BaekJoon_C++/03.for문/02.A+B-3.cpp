/*
	A+B
	T를 입력받고 T만큼 A,B를 입력받은후 A+B 출력
*/

#include <iostream>

using namespace std;

int main(){
	int T,A,B;

	cin >> T;

	for(int i=0; i<T; i++){
		cin >> A >> B;
		cout << A + B << endl;
	}

	return 0;
}
