/*
	N과M(1)
	자연수N과 M이 주어졌을 때, 아래 조건을 만족하는 길이가 M인 수열을 모두 구하는 프로그램을 작성하시오
	* 1부터 N까지 자연수 중에서 중복없이 M개를 고른 수열
*/
#include <iostream>
#include <vector>
using namespace std;

int solution(int n, int m){
	
	for(int i=0; i<n; i++){
		int cnt = 0;
		
	}
	return 0;
}

int main(void){
	int n, m;

	cin >> n >> m;

	solution(n, m);
}
/*
#include <iostream>

using namespace std;

int check[9], result[9];

void func_sequence(int k, int N, int M);

int main(void){
	
	int N,M;
	cin >> N >> M;
	
	func_sequence(0,N,M);
}

void func_sequence(int k, int N, int M){
	
	if(k == M){
		for(int i=0; i<M; i++)
			cout << result[i] << " ";
		cout << "\n";
	}

	else{
		for(int i=1; i<=N; i++){
			if(check[i] == 0){
				result[k] = i;
				check[i] = 1;
				func_sequence(k+1,N,M);
				check[i] = 0;
			}
		}
	}
}*/
