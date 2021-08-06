/*
	체스판 다시 칠하기
	N x M 크기의 보드가 있다. 어떤 칸은 검은색으로 칠해져 있고, 나머지는 흰색으로 칠해져있다
	이 보드를 잘라 8 x 8 크기의 체스판으로 만들려고 한다.

	체스판은 검은색과 흰색이 번갈아서 칠해져 있어야한다
	체스판을 색칠하는 경우에는 두가지 뿐이다.
	1. 맨 왼쪽 위칸이 흰색인경우, 2.검정색일경우

	다시 칠해야 하는 정사각형의 최소 개수를 구하는 프로그램을 작성하시오
*/

#include <iostream>
#include <string>
#define min_Finder(a,b) a <= b ? a : b

using namespace std;

char board[51][51];
int  minimum = 64;
char W_start[8] = {'W','B','W','B','W','B','W','B'};
char B_start[8] = {'B','W','B','W','B','W','B','W'};

int func_board(int a, int b);

int main(void){
	
	int N,M,N_board,M_board;
	int result, minimum = 64;

	cin >> N >> M;
	
	N_board = N - 8;
	M_board = M - 8;

	for(int i=0; i<N; i++)
		for(int j=0; j<M; j++)
			cin >> board[i][j];
	
	for(int a=0; a <= N_board; a++){
		for(int b=0; b <= M_board; b++){
			minimum = min_Finder(minimum, func_board(a,b));
			result = minimum;
		}
	}

	cout << result << "\n";
}

int func_board(int a, int b){
	
	int cnt1 = 0, cnt2 = 0, num = 0;

	for(int i=a; i<a+8; i++){
		
		num = 0;
		
		for(int j=b; j<b+8; j++){
			if(i%2 == 0 && board[i][j] != W_start[num])
				cnt1++;
			if(i%2 == 1 && board[i][j] != B_start[num])
				cnt1++;
			num++;
		}
	}
	
	for(int i=a; i<a+8; i++){
		
		num = 0;

		for(int j=b; j<b+8; j++){
			if(i%2 == 1 && board[i][j] != W_start[num])
				cnt2++;
			if(i%2 == 0 && board[i][j] != B_start[num])
				cnt2++;
			num++;
		}
	}

	return min_Finder(cnt1, cnt2);
}
