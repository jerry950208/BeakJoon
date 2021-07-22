/*
	손익분기점
	A = 고정비용
	B = 가변비용
	C = 가격
	총수입(판매비용) > 고정비용 + 가변비용
	손익분기점 구하시오
*/
#include <iostream>

using namespace std;

int main(){
	
	int A,B,C,result;
	cin >> A >> B >> C;

	result = A / (C - B) + 1;
	
	if(C <= B)
	cout << "-1" << endl;
	else
	cout << result << endl;
}
