/*
	가장 긴 증가하는 부분 수열

	수열 A가 주어졌을 때, 가장 긴 증가하는 부분 수열을 구하는 프로그램을 작성

	예를 들어, 수열 A =. 10, 20, 10, 30, 20, 50} 인 경우에 가장 긴 증가하는 부분수열은 {10, 20, 30, 50} 이고 길이가 4이다
*/
#include <iostream>
#include <vector>
using namespace std;

int main(void){
	
	int T;
	int N, M ,K, H;
	int X, Y;
	int answer = 0;

	int dp[1001];
	vector<int> v;
	cin >> T;

	for(int i=0; i<T; i++){
		cin >> K;
		v.empalce_back(K);
		int dp_max = 0;

		for(int j=0; j<v.size(); j++){
			if(v[i] > v[j]){
				if(dp_max < dp[j])
					dp_max = dp[j];
			}
		}

	dp[i] = dp_max + 1;
	answer = max(answer, dp[i]);
	}

	cout << anwser << endl;
}
