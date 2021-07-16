/*
	평균
	과목의 개수 N을 입력받고 최고점수를 M이라고 했을때 
	모든 점수를 점수/M*100으로 고쳤다
	새로운 평균을 구하시오
*/
#include <iostream>

using namespace std;

int main(){
	
	int N,M = 0;
	int arr[1000];
	double avg = 0.0;
	cin >> N;
	
	for(int i=0; i<N; i++){
		cin >> arr[i];
		if(arr[i] > M)
			M = arr[i];
			avg += arr[i];
	}
	
	avg = (100 * avg / M) / N;
	
	cout << fixed;
	cout.precision(6);
	cout << avg << endl;

}
