/*
	최소공배수

	두 자연수 A와 B가 주어졌을 때, A와 B의 최소 공배수를 구하는 프로그램을 작성
*/

#include <iostream>

using namespace std;

int func_LCM(int a, int b);

int main(void){
	
	int N;
	int min[1001], max[1001];
	cin >> N;
	
	for(int i=0; i<N; i++){
		cin >> min[i] >> max[i];

		cout << func_LCM(min[i], max[i]) << "\n";
	}
}

int func_LCM(int a, int b){
	
	int cnt = 2, lcm = 1;
	
	while(1){
		
		if(a <= cnt && b <= cnt){
			lcm *= a * b;
			break;
		}

		else if(a % cnt == 0 && b % cnt == 0){
			lcm *= cnt;
			a /= cnt;
			b /= cnt;
		}

		else
			cnt++;
	}
	return lcm;
}
