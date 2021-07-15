/*
	합
	n이 주어졌을때 1부터 n까지 합을 구하는 프로그램을 작성해라
*/

#include <iostream>

using namespace std;

int main(){
	
	int n,sum;
	cin >> n;

	for(int i=1; i<=n; i++)
		sum += i;

	cout << sum << endl;

	return 0;
}
