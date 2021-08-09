/*
	링
*/
#include <iostream>

using namespace std;

void func_gcd(int N, int arr[]);

int main(void){
	
	int N, R[101];
	int result1, result2;
	cin >> N;

	for(int i=0; i<N; i++)
		cin >> R[i];
	
	func_gcd(N, R);
}

void func_gcd(int N, int arr[]){
	
	int result1, result2;

	for(int i=1; i<N; i++){
		
		int gcd = 2;
		int tmp = arr[0];
		
		while(1){
			
			if(arr[i] < gcd || tmp < gcd){
				cout << tmp << "/" << arr[i] << "\n";
				break;
			}

			else if(arr[i] % gcd == 0 && tmp % gcd == 0){
				arr[i] = arr[i] / gcd;
				tmp = tmp / gcd;
			}
			
			else
				gcd++;
		
		}
	}
}
