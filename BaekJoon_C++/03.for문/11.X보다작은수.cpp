/*
	X보다 작은 수
	정수 N개로 이루어진 수열 A와 정수 X가 주어진다. 이때, A에서 X보다 작은 수를 모두 출
	X보다 작은 수를 입력받은 순서대로 공백으로 구분해 출력
*/

#include <iostream>

using namespace std;

int main(){
	
	int N,X;
	int arr[10001];
	cin >> N >> X;

	for(int i=0; i<N; i++)
		cin >> arr[i];
	
	for(int i=0; i<N; i++)
		if(arr[i] < X)
			cout << arr[i] << " ";
	
	cout << "\n";
	
	return 0;
}
