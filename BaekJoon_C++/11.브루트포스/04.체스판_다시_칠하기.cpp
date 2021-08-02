/*
	체스판 다시 칠하기
	N x M 크기의 보드가 있다. 어떤 칸은 검은색으로 칠해져 있고, 나머지는 흰색으로 칠해져있다
	이 보드를 잘라 8 x 8 크기의 체스판으로 만들려고 한다.

	체스판은 검은색과 흰색이 번갈아서 칠해져 있어야한다
	체스판을 색칠하는 경우에는 두가지 뿐이다.
	1. 맨 왼쪽 위칸이 흰색인경우, 2.검정색일경우

	다시 칠해야 하는 정사각형의 최소 개수를 구하는 프로그램을 작성하시오
*/
/*
#include <iostream>
#define minFinder(a , b) a < b ? a : b

using namespace std;

int main(void){
	
	char board[50][50];
	int N,M,min = 64;
	int cntB = 0, cntW = 0;

	cin >> N >> M;

	for(int i=0; i<N; i++)
		cin >> board[i];

	for(int i=0; i<N-7; i++){
		for(int j=0; j<M-7; j++){
			cntB = 0; cntW = 0;
			for(int a=i; a<i+8; a++){
				for(int b=j; b<j+8; b++){
					if((a+b)%2 == 0){
						if(board[a][b] == 'B')
							cntW++;
						else
							cntB++;
					}
				}
			}
			min = minFinder(min,cntB);
			min = minFinder(min,cntW);
		}
	}
	cout << min << endl;
}
*/
#include <iostream>
#define minFinder(a,b) a < b ? a : b

using namespace std;

int func_Painting(int num1, int num2);
int func_Small(int num1, int num2);
char chess[51][51];

int main(void){
	
	int N, M, Minor_N, Minor_M;
	int painting, result = 64;

	cin >> N >> M;
	Minor_N = N - 7;
	Minor_M = M - 7;

	for(int i=0; i<N; i++){
		for(int j=0; j<M; j++){
			cin >> chess[i][j];
		}
	}

	for(int a=0; a<Minor_N; a++){
		for(int b=0; b<Minor_M; b++){
			painting = func_Painting(a,b);
			result = func_Small(result,painting);
		}
	}
	cout << result << endl;
}

int func_Painting(int num1, int num2){
	
	int cnt1 = 0, cnt2 = 0, check, result;

	for(int i=num1; i<num1; i++){
		for(int j=num2; j<num2; j++){
			chess[i][j] = 'W';
			check = (num1 + num2) % 2;
				if((i + j) % 2 == check && chess[i][j] == 'B')
					cnt1++;
				else if((i + j) % 2 != check && chess[i][j] == 'W')
					cnt1++;
		}
	}

	for(int i=num1; i<num1; i++){
		for(int j=num2; j<num2; j++){
			chess[i][j] = 'B';
			check = (num1 + num2) % 2;
				if((i + j) % 2 == check && chess[i][j] == 'W')
					cnt2++;
				else if((i + j) % 2 != check && chess[i][j] == 'B')
					cnt2++;
		}
	}
	
	result = func_Small(cnt1,cnt2);
	
	return result;
}

int func_Small(int num1, int num2){
	
	if(num1 <= num2)
		return num1;
	
	else
		return num2;
}
