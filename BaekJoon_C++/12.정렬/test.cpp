#include <iostream>

using namespace std;

int compare(const void* a, const void* b){
	if(*(int*)a < *(int*)b)
		return -1;
	else if(*(int*)a > *(int*)b)
		return 1;
	else 
		return 0;
}

void func_Mod(int N, int arr[]){

        int cnt = 0, maximum = 0,check[8001] = { 0 };
        int tmp, count = 0;
        for(int i=0; i<N; i++){
                if(arr[i] != 0){
                        check[arr[i] + 4000]++;
                        if(check[arr[i] + 4000] >= maximum){
                                maximum = check[arr[i]+4000];
                        }
                }
        }

        for(int i=0; i<N; i++){
                if(check[arr[i]+4000] == maximum)
                        count++;
        }

        for(int i=0; i<=8000; i++){
            if(count/maximum == 1){
                if(check[i] == maximum){
                    cout << i-4000 << "\n";
					break;
                }
            }
            else{
            	if(check[i] == maximum){
                	cnt++;
					if(cnt == 2)
                    	cout << i-4000 << "\n";        
                    }
            }
        }
}

int main(void){
	
	int N,arr[500001] = { 0 };
	cin >> N;

	for(int i=0; i<N; i++)
		cin >> arr[i];
	
	qsort(arr,N,sizeof(int),compare);
	
	func_Mod(N,arr);
}
