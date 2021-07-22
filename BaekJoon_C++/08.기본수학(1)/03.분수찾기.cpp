/*
	분수찾기
	
	1/1 -> 1/2 -> 2/1 -> 3/1 -> 2/2 -> 1/3 ... 순으로 분수가 있을때
	입력받은 X번째 분수를 구하는 프로그램 작성
*/
#include <iostream>

using namespace std;

int main(){
	
	int X,cnt = 1;
	cin >> X;
	
	while(X > cnt){
		X -= cnt;
		cnt++;
	}

	if(cnt % 2 == 1)
		cout << cnt + 1 - X << "/" <<  X << endl;
	else
		cout << X << "/" << cnt + 1 - X << endl;
}
