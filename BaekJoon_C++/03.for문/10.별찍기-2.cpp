/*
	별찍기-2
	첫째 줄에는 별 1개 둘째 줄에는 별 2개 N번째 줄에는 별 N개 찍기
	첫째줄 부터 N번째 줄까지 차례대로 별을 출력한다
*/
#include <iostream>

using namespace std;

int main(){
	
	int N;
	cin >> N;

	for(int i=1; i<=N; i++){
		for(int j=N-i-1; j>=0; j--)
			cout << " ";

		for(int j=0; j<i; j++)
			cout << "*";\

		cout << "\n";
	}

	return 0;
}
