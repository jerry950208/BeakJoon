/*
        동전0
        동전은 총 N종류이다 동전을 적절히 사용해서 그 가치의 합을 K로 만들려고 한다
        이때 필요한 동전 개수의 최솟값을 구하는 프로그램을 작성하시오
*/
#include <iostream>

using namespace std;

int main(void){

        int N, K, cnt = 0;
        cin >> N >> K;
        int money[N];

        for(int i=0; i<N; i++)
                cin >> money[i];

        for(int i=N-1; i>=0; i--){

                if(K / money[i] > 0){
                        cnt += K/money[i];
                        K %= money[i];
                }
        }
        cout << cnt << "\n";

}
