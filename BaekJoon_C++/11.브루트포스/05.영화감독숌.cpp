/*
	영화감독 숌
	6이 적어도 3개이상 연속으로 들어가는 수로 영화제목을 지을것이다
	첫번째 영화는 666, 두번째 영화는 1666이다
	N번째 영화제목을 출력하시오
*/
#include <iostream>

using namespace std;

int cnt,result;
void func_Movie_title(int k);

int main(void){
	
	int N, i = 665;
	cin >> N;

	while(1){		
		i++;
		func_Movie_title(i);
		
		if(cnt == N)
			break;
	}

	cout << result << "\n";
}

void func_Movie_title(int k){
	
	int a = k;
	int tmp;
	while(1){
		
		if(a == 0){
			result = k;
			break;
		}

		if(a % 1000 == 666){
			cnt++;
			result = k;
			break;
		}
		
		a /= 10;
	}
}
