#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;

int arr[9][9];

int square(int a){
    if (sqrt(double(a))==int(sqrt(double(a)))){
        return a;
    }

    return -1;
}


int main(){
    int r,c;
    cin >> r>> c;
    for (int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%1d",&arr[i][j]);
        }
    }

    //브루트 포스
    int squareNum = -1;
    if(r==1&&c==1){
        cout << max(square(arr[0][0]),squareNum);
        return 0;
    }

    for(int i = 0;i<r;i++){
        for(int j=0;j<c;j++){
            
            for(int dr = -r+1; dr <r;dr++){
                for(int dc = -c+1;dc<c;dc++){
                    //수열 시작점, 공차 모두 정해짐

                    if(dr==0&&dc==0) continue;

                    //수열 구하기
                    int cr = i;
                    int cc = j;
                    int cur = arr[i][j];
                    squareNum = max(square(cur),squareNum);
                    while((cr+dr<r)&&(cr+dr>=0)&&(cc+dc<c)&&(cc+dc>=0)){
                        cur = cur*10+arr[cr+dr][cc+dc];
                        cc = cc+dc;
                        cr = cr+dr;
                        squareNum = max(square(cur),squareNum);

                    }

                    
                }
            }
        }
    }

    cout << squareNum;
    return 0;
}