/*
	A+B -7 
	두정수를 입력받은다음 합을 출력해라
	첫째줄에 테스트 케이스 개수 T
	각 테스트 케이스마다 ""Case #x: A + B = C " 출력
*/

#include <iostream>

using namespace std;

int main(){
	
	int T,A,B;
	cin >> T;

	for(int i=1; i<=T; i++){
		cin >> A >> B;
		cout << "Case #" << i << ": " << A << " + " << B << " = " << A + B << endl;
	}
	return 0;
}
