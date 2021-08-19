/*
	스도쿠
*/
/*
#include <iostream>

using namespace std;

void func_Sudoku_Check();
void func_Cube_3x3(int a, int b);
void func_Trans(int a, int b);
void func_Length(int a, int b);
int cnt, sudoku[10][10];

int main(void){
	
	//스도쿠 입력받기
	for(int i=1; i<10; i++){
		for(int j=1; j<10; j++){
			cin >> sudoku[i][j];
		}
	}
	
	func_Sudoku_Check();

	for(int i=1; i<10; i++){
		for(int j=1; j<10; j++){
			cout << sudoku[i][j] << " ";
		}
		cout << "\n";
	}
}

//스도쿠 전체 함수
void func_Sudoku_Check(){
	
	if(cnt == 0)
		return;
	
	for(int i=1; i<10; i++){
		for(int j=1; j<10; j++){
			if(i == 1 || i == 4 || i == 7 || j == 1 || j == 4 || j == 7){
				func_Cube_3x3(i, j);
			}
			else if(i == 1)
				func_Trans(i, j);
			
			else if(j == 1)
				func_Length(i, j);
		}
	}
	return func_Sudoku_Check();
}

//스도쿠 3x3체크
void func_Cube_3x3(int a, int b){
	
	
	int tmp_i, tmp_j, count = 0;
	bool check[10];

	for(int i=a; i<a+3; i++){
		for(int j=b; j<b+3; b++){
			if(sudoku[i][j] != 0)
				check[sudoku[i][j]] = true;
			else{
				tmp_i = i;
				tmp_j = j;
				count++;
			}
		}
	}
	if(count == 1){
		for(int i=1; i<10; i++){
			if(check[i] == false){
				sudoku[tmp_i][tmp_j] = i;
				cnt--;
			}
		}
	}
}

//스도쿠 가로 체크
void func_Trans(int a, int b){
	

}

//스도쿠 세로 체크
void func_Length(int a, int b){

}*/
