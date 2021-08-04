/*
	N-Qeen
	크기가 N x N인 체스판 위에 퀸 N개를 서로 공격할수 없게 놓는 문제이다
	N이 주어졌을때 퀸을 놓는 방법의 수를 구하는 프로그램 작성
*/
#include <iostream>

using namespace std;

int N, cnt, board[16];

void func_Queen(int k);

int main(void){
	
	cin >> N;
	
	Back_tracking(0);
}

void func_Queen(int k){
	
	if(k == N){
		cnt++;
		return;
	}

	
}
