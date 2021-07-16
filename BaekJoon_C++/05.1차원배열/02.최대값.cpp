/*
	최댓값
	9개의 서로 다른 자연수가 주어지고 이들중 최대값을 찾고 몇번째수인지 구하는 프로그램 작성
*/

#include <iostream>

using namespace std;

int main(){
	
	int max = 0,result = 0;
	int arr[10];

	for(int i=1; i<=9; i++){
		
		cin >> arr[i];
		
		if(arr[i] > max){
			max = arr[i];
			result = i;
		}
	}

	cout << max << "\n" << result << "\n";
}
