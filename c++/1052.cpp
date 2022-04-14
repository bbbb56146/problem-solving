#include <stdio.h>

int main(){
    int N,K;
    scanf("%d %d",&N,&K);

    int tmp = N;

    int arr[25] = {0,};

    int i=0;
    while(tmp){
        arr[i++] = tmp%2;
        tmp /=2;
    }

    for(i-=1;i>=0;i--){
        if(arr[i]){
            K--;
        }
        if(K==0){
            break;
        }
    }

    if(i<=0){
        printf("0");
        return 0; 
    }
    
    int answer = (2<<i) - N%(2<<i);

    printf("%d",answer); 



    return 0;
}