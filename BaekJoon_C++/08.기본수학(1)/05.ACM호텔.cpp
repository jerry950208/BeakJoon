/*
ACM호텔
같은 거리일때는 아래층 우선이
*/
#include <iostream>

using namespace std;

int main(){
	
	int T,H,W,N;//			H = 층 수, W = 각 층의 방 수, N = 몇번째 손님인가
	cin >> T; //			테스트 케이스

	for(int i=0; i<T; i++){
		
		cin >> H >> W >> N;		
		
		int H1,W1;

		H1 = N % H;
		W1 = N / H;

		if(H1 > 0)
			W1++;
		else
			H1 = H;

		cout << H1 * 100 + W1 << endl;
	
	}
}
