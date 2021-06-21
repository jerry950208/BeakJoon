#include <stdio.h>

int main(){
        int input,N,count,cnt=0;

        scanf("%d",&input);
        for(int i=0; i<input; i++){
                scanf("%d",&N);
                count=0;
                for(int j=1; j<=N; j++){
                        if(N%j==0){
                        count++;
                                if(count>2||N==1){
                                        cnt++;
                                        break;
                                }
                        }
                }

        }
        printf("%d",input-cnt);
        return 0;
}
