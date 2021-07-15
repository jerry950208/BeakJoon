/*
	기찍N
	자연수 N이 주어졌을때, N부터 1까지 한줄에 하나씩 출력해라
*/

#include <iostream>

using namespace std;

int main(){
	
	int N;
	cin >> N;
	
	for(int i=N; i>=1; i--)
		cout << i << "\n";

	return 0;
}
