#include <stdio.h>

int func_fact(int N){
    if(N<=1)
        return 1;    
    return N*func_fact(N-1);
}
int main(){
        int N;
        scanf("%d",&N);
        printf("%d\n",func_fact(N));
        return 0;
}
