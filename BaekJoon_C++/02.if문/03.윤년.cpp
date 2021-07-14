/*
	윤년이면 1 출력, 아니면 0 출력
	윤년 : 연도의 4배수이면서 100의 배수가 아닐때 또는 400의 배수일때
	Ex) 2012년은 윤년, 1900년은 윤년x, 2000은 윤년
*/
#include <iostream>

using namespace std;

int main(){
	
	int year;
	cin >> year;

	if(year % 4 == 0)
		if(year % 400 == 0 || year % 100 != 0)
			cout << "1\n";
		else
			cout << "0\n";


	else
		cout << "0\n";
		
	return 0;
}
