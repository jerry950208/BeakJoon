/*
	설탕배달
	N kg 의 설탕이 있고 3kg or 5kg 봉지가 있을경우
	봉지의 최소 개수를 출력한다.
	만약 정확하게 N kg 을 만들수 없다면 -1 출력
*/
#include <iostream>

using namespace std;

int main(){
	
	int N,cnt;
	cin >> N;

	cnt = N / 5;
	N %= 5;

	while(N>0){
		if(N != 0 && N % 3 == 0){
			cnt += N / 3;
			N %= 3;
		}
		else if(N !=0 && N % 3 != 0 && cnt == 0){
			cout << "-1\n";
			return 0;
		}

		else if(N != 0 && N % 3 !=0){
			cnt -= 1;
			N += 5;
		}
	}

	cout << cnt << endl;
}
