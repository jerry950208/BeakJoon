/*
	하노이 탑 이동순서
	
	1. 한 번에 한 개의 원판만을 다른 탑으로 옯길 수 있다
	2. 쌓아 놓은 원판은 항상 위의 것이 아래의 것보다 작아야 한다
	이 작업을 수행하는데 필요한 이동 순서를 출력하는 프로그램을 작성
	단, 이동 횟수는 최소가 되어야 한다
*/
#include <iostream>

using namespace std;

void hanoi(int N, int start, int mid, int end);

int main(void){
	
	int K;
	cin >> K;

	cout << (1<<K) -1 << "\n";
	hanoi(K, 1, 3, 2);
}

void hanoi(int N, int start, int mid, int end){	
	if(N == 1)
		cout << start << " " << mid << "\n";
	
	else{
		hanoi(N-1, start, end, mid);
		cout << start << " " << mid << "\n";
		hanoi(N-1, end, mid, start);
	}
}

