#include <iostream>
#include <deque>
using namespace std;

int main(){
    int n;
    cin >> n;
    deque <pair<int,int>> dq;
    
    // 덱 만들기
    for(int i=1;i<=n;i++){
        int x;
        cin >> x;
        dq.push_back({i,x});

    }

    while(!dq.empty()){
        auto cur = dq.front(); // auto는 타입을 자동으로 추론함 - 편리 -> pair<int,int>와 동일
        dq.pop_front();

        cout << cur.first << ' '; // 풍선 번호 출력

        int move = cur.second; // 현재 팝된 풍선 종이에 써있는 번호
        if(dq.empty()) break;

        if(move>0){
            for(int i=0; i<move-1;i++){
                dq.push_back(dq.front());
                dq.pop_front();
            }
        }else{
            for(int i=0; i<-move;i++){
                dq.push_front(dq.back());
                dq.pop_back();
            }
        }

    }


}