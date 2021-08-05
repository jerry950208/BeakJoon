/*
	N-Qeen
	크기가 N x N인 체스판 위에 퀸 N개를 서로 공격할수 없게 놓는 문제이다
	N이 주어졌을때 퀸을 놓는 방법의 수를 구하는 프로그램 작성
*/
#include <iostream>

using namespace std;

int N, cnt, board[16] = { -1 };

void Backtracking(int k);
bool func_check(int a, int b);

int main(void){
	
	cin >> N;
	
	Backtracking(0);
	
	cout << cnt << endl;
}


void Backtracking(int k){
	
	if(k == N){
		cnt++;
		return;
	}	

	for(int i=0; i<N; i++){
		if(func_check(k,i)){
			board[k] = i;
			Backtracking(k+1);
			board[k] = -1;
		}
	}
}

bool func_check(int a, int b){
	//직선
	for(int i=0; i<a; i++){
		if(board[i] == b) return false;
	}
	//대각선
	for(int i=0; i<=a; i++){
		//왼쪽 대각선
		if(board[a-i] == b-i) return false;
		//오른쪽 대각선
		if(board[a-i] == b+i) return false;
	}
	return true;
}
