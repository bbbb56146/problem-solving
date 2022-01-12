#include <iostream>
#include <queue>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

struct sellCmp
{
    bool operator()(pair<int, int> a, pair <int, int> b) {
        if (a.first == b.first) {
            return a.second > b.second;
        }
        return a.first < b.first;
    }
};

struct stockInfo {
    priority_queue<pair<int, int>> sellStock;//미체결 (주식번호, 가격)
    priority_queue<pair<int, int>,sellCmp> buyStock;//미체결
    vector<int> stock_change; // 주식별 체결 가격 변동값 저장
    int cur_price; //현재 체결 가격
    vector<int> cur_sell_best_profit;// 지금 매도할 때 주식별 이익 저장 (dp)
};

stockInfo stockInfos[6]; //주식 정보 저장

unordered_set<int> cancelStock;//취소 주문번호 저장
unordered_map<int,int> stockQuantity;//(주문번호, 수량) 테이블

int mStockMax = 5;

void init()
{
    //set
    cancelStock.clear();
    //int

    //map?
    stockQuantity.clear();
    //자료구조 초기화
    for (int i = 1; i < 6; i++) {
        //queue
        stockInfos[i].buyStock = priority_queue<pair<int, int>, sellCmp>();
        stockInfos[i].sellStock = priority_queue<pair<int, int>>();
        
        stockInfos[i].stock_change.clear();
        stockInfos[i].cur_sell_best_profit.clear();

    }

}

int buy(int mNumber, int mStock, int mQuantity, int mPrice)
{
    
    //sellStock 체크
    //pop할게 없다면 buyStock에 추가(미체결)

    while (mQuantity > 0) {
        if()
        //체결할 수량이 없거나 sellstock이 빌 때 까지 (기준 이하)
            //pop한 값(체결가격)으로 체결가격 변화 기록 stock_change
            //먼저 pop한값이 cancel인지 아닌지 체크
            //cancel이면 또 pop (cancel 아닐때까지 pop)
            //만약 stock_change가 비어있다면 stock_change에 0 insert
            //아니라면 체결가격 - cur_price insert
            //cur_price = 체결가격
    }

    if (mQuantity > 0) {
        //미체결 수량 기록
        stockQuantity.insert(mNumber, mQuantity);
        //미체결 구매 테이블 기록
        stockInfos[mStock].buyStock.push(make_pair(mNumber, mPrice));
    }

    return 0;
}

int sell(int mNumber, int mStock, int mQuantity, int mPrice)
{
    //
    return 0;
}

void cancel(int mNumber)
{
    cancelStock.insert(mNumber);
}

int bestProfit(int mStock)
{
    return 0;
}