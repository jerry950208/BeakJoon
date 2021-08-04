/*
	N과 M(2)
	자연수 N과 M이 주어졌을때, 아래조건을 만족하는 길이가 M인 수열을 모두 구하는 프로그램을 작성
	* 1부터 N까지 자연수 중에서 중복 없이 M개를 고른 수열
	* 고른 수열은 오름차순 이어야 한다
*/
#include <iostream>

using namespace std;

int result[9], check[9];

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
			if(k == 0){
				result[k] = i;
				check[i] = 1;
				func_sequence(k+1, N, M);
				check[i] = 0;
			}
			else if(result[k-1] < i){
				result[k] = i;
				check[i] = 1;
				func_sequence(k+1, N, M);
				check[i] = 0;
			}
		}
	}
}
