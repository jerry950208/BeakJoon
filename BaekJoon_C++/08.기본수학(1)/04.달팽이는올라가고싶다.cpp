/*
	달팽이는 올라가고 싶다
	높이가 V미터인 나무막대를 올라가고 싶다
	낮에는 A미터 올라갈수 있고 밤에는 B미터 미끄러진다
	다 올라가려면 며칠이 걸리는지 구하는 프로그램 작성
*/
#include <iostream>

using namespace std;

int main(){
	
	int A,B,V;
	int day = 1;
	cin >> A >> B >> V;
	
	day = (V-B-1)/(A-B)+1;

	cout << day << endl;
}
