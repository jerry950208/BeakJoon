/*
	덩치

*/
#include <iostream>

using namespace std;

int main(void){
	
	int N,cnt = 1; 
	int pysical[51][2] = { 0 };
	cin >> N;

	for(int i=0; i<N; i++)
		cin >> pysical[i][0] >> pysical[i][1];
	
	for(int i=0; i<N; i++){
		
		cnt = 1;
		
		for(int j=0; j<N; j++){
			
			if(pysical[i][0] < pysical[j][0] && pysical[i][1] < pysical[j][1])
				cnt++;
		}
		
		cout << cnt << " ";
	}
	
	cout << endl;
}
