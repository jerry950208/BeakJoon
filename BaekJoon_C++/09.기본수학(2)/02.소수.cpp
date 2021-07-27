/*
	소수
	자연수 M이상 N이하의 자연수 중 소수인 것을 모두골라 이들 소수의 합과 최솟값을 찾는 프로그램
	첫째줄에 소수들의 합, 둘째줄에 최솟값 출력
	소수가 없을 경우 -1 출력
*/
#include <iostream>

using namespace std;

int main(){
	
	int M,N,cnt = 0;
	int sum = 0, min = 10001;

	cin >> M >> N;

	for(int i=M; i<=N; i++){
		cnt = 0;
		for(int j=1; j<=i; j++){
			if(i % j == 0){
				cnt++;
				if(j == i && cnt == 2){
					if(sum == 0)
						min = i;
					sum += i;
				}
			}
		}
	}
	if(min == 10001)
		cout <<  "-1" << endl;
	else{
	cout << sum << endl;
	cout << min << endl;
	}
}
