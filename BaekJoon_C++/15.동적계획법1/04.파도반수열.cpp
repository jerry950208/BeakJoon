/*
	파도반 수열
*/
#include <iostream>

using namespace std;

long long sequence[101];
void func_Sequence(int k);

int main(void){
	
	int T,N;	
	cin >> T;

	for(int i=0; i<3; i++)
		sequence[i] = 1;
	
	for(int i=0; i<T; i++){
		cin >> N;
		if(sequence[N] == 0)
			func_Sequence(N);
		cout << sequence[N-1] << "\n";
	}	
}

void func_Sequence(int k){
	
	for(int i=3; i<k; i++)
		if(sequence[i] == 0)
			sequence[i] = sequence[i-3] + sequence[i-2];
}
