/*
	구구단
	N을 입력받은뒤 N * dan = result 형식으로 출력
*/

#include <iostream>

using namespace std;

int main(){
	
	int N;
	cin >> N;

	for(int i=1; i<10; i++)
		cout << N << " * " << i << " = " << N * i <<endl;
	return 0;
}
