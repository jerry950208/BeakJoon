/*
	나머지
	두 자연수 A와 B가 있을 때, A%B는 A를 B로 나눈 나머지 이다. 
	Ex)  7, 14, 27, 38을 3으로 나눈 나머지는 1, 2, 0, 2이다. 

	수 10개를 입력받은 뒤, 이를 42로 나눈 나머지를 구한다. 
	그 다음 서로 다른 값이 몇 개 있는지 출력하는 프로그램을 작성하시오.
*/
#include <iostream>

using namespace std;

int main(){
	
	int arr[10],check[10] = { 0 };
	int cnt = 0;

	for(int i=0; i<10; i++){
		cin >> arr[i];
		arr[i] %= 42;
	}

	for(int i=0; i<10; i++){
		if(check[i] == 0){
			for(int j=i+1; j<10; j++){
				if(arr[i] == arr[j]){
					check[j] = 1;
				}
			}
		}
	}

	for(int i=0; i<10; i++){
		if(check[i] == 0)
			cnt++;
	}

	cout << cnt << endl;

}
