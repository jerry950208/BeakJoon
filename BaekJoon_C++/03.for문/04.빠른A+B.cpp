/*
	빠른 A+B
	cin.tie(NULL), sync_with_stdio(false), endl 대신 \n 사용해라
	해당 코드를 사용하는 이유는 입(출)력을 속도를 더욱 빠르게 하기위한 코딩이다.
*/

#include <iostream>

using namespace std;

int main(){
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	
	int T,A,B;
	cin >> T;

	for(int i=0; i<T; i++){
		cin >> A >> B;
		cout << A+B << "\n";
	}

	return 0;
}
