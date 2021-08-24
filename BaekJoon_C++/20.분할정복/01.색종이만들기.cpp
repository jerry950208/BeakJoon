/*
	색종이만들기
*/
#include <iostream>
using namespace std;

int map[129][129];
int w_cnt, b_cnt;

void func_div(int x, int y, int N);

int main(void){
	
	int N;
	cin >> N;

	for(int i=1; i<=N; i++){
		for(int j=1; j<=N; j++){
			cin >> map[i][j];
		}
	}

	func_div(0, 0, N);

	cout << w_cnt << "\n" << b_cnt << "\n";
}

void func_div(int x, int y, int N){
	
	int tmp_cnt = 0;
	
	for(int i=x; i<x+N; i++){
		for(int j=y; j<y+N; j++){
			if(map[i][j])
				tmp_cnt++;
		}
	}
	if(!tmp_cnt) w_cnt++;
	else if(tmp_cnt == N * N) b_cnt++;
	else{
		func_div(x, y, N/2);
		func_div(x, y + N/2, N/2);
		func_div(x + N/2, y, N/2);
		func_div(x + N/2, y + N/2, N/2);
	}
	return;
}
