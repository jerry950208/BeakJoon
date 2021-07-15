
/*
	N찍기
	자연수 N이 주어졌을때, 1부터 N까지 한줄에 하나씩 출력해라
*/



#include <iostream>

using namespace std;

int main(){
	
	int N;
	cin >> N;

	for(int i=1; i<=N; i++)
		cout << i << "\n";

	return 0;
}
