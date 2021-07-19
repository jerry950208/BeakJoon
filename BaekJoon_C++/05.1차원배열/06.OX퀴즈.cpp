/*
	OX퀴즈
	O가 연속되면 연속된 O의 개수만큼 점수 증가 
	Ex) "OOXXOXXOOO"의 점수는 1+2+0+0+1+0+0+1+2+3 = 10점이다
*/
#include <iostream>

using namespace std;

int main(){
	
	char  arr[80] = { 0 };
	int N, score = 0, result = 0;
	
	cin >> N;

	for(int i=0; i<N; i++){
		cin >> arr;

		for(int j=0; j<80; j++){
			if(arr[j] == 0){
				score = 0;
				break;
			}
			if(arr[j] == 'O'){
				score = score + 1;
				result = result + score;
			}
			else
				score = 0;
		}
		cout << result << "\n";
		result = 0;
	}
}
