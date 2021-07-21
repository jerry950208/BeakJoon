/*
	상수
	세자리수 두 수를 입력을 받아 반대로 했을경우 더 큰수를 출력해라
	Ex)734 893 일때 정답은 437이 된다
*/
#include <iostream>

using namespace std;

int main(){
	
	string  A,B;
	int temp;
	cin >> A >> B;


	temp = A[0];
	A[0] = A[2];
	A[2] = temp;

	temp = B[0];
	B[0] = B[2];
	B[2] = temp;
	
	if(A > B)
		cout << A << endl;
	else
		cout << B << endl;
}
