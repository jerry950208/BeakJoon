#include <stdio.h>

int han_num(int input){
        int cnt=0;

        for(int i=1; i<=input; i++){
                if(i<100)
                        cnt++;
                else if(i<1000){
                        if((i/100)-((i%100)/10)==((i%100)/10)-(i%10))
                                cnt++;
                }
        }
        printf("%d",cnt);
        return 0;
}

int main(){
        int input;
        scanf("%d",&input);
        han_num(input);
        return 0;
}
