/*
	사분면고르기
	(X,Y)라는 좌표가 있을경우
	어느 사분면에 속하는지 알아내야한다
	1사분면 : (X,Y)		2사분면 : (-X,Y)
	3사분면 : (-X,-Y)	4사분면 : (X,-Y)
*/
#include <iostream>

using namespace std;

int main(){
	int X,Y;
	cin >> X >> Y;

	if(X > 0)		 // X가 양수일경우
		if(Y > 0)
			cout << "1\n";
		else
			cout << "4\n";
	
	else 			//X가 음수일경우
		if(Y > 0)
			cout << "2\n";
		else
			cout << "3\n";

	return 0;
}
