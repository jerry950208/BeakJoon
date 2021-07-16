/*
	최소,최대
	N개의 정수중에 최솟값 최댓값 구해라
*/

#include <iostream>

using namespace std;

int main(){
	
	int N, arr[1000000] = { 0 };
	int min = 1000001, max = -1000001;
	cin >> N;

	for(int i=0; i<N; i++){
		
		cin >> arr[i];
		
		if(arr[i] > max)
			max = arr[i];
		if(arr[i] < min)
			min = arr[i];
	}
	
	cout << min << " " << max << endl;

	return 0;
}
