/*
	A+B - 5
	두 정수를 입력받은 다음 합을 출력해라
	입력은 여러개의 테스트 케이스로 이루어져 있다
	"0 0"을 입력하면 탈출
*/
#include <iostream>

using namespace std;

int main(){
	
	int A,B;

	while(1){
		
		cin >> A >> B;

		if(A == 0 && B == 0)
			break;
			
		cout << A + B << endl;
	}
	
	return 0;
}
