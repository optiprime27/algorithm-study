#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string init;
    cin >> init;
    list<char> L; // 연결리스트
    for(auto c:init) L.push_back(c); // 입력 받은 문자를 연결리스트로 만든다
    auto cursor = L.end();
    int q;
    cin >> q;
    while(q--){
        char op;
        cin >> op;
        if(op == 'P'){
            char add;
            cin >> add;
            L.insert(cursor, add);
        }
        else if(op == 'L'){
            if(cursor != L.begin()) cursor --;
        }
        else if(op == 'D'){
            if(cursor != L.end()) cursor++;
        }
        else{
            if(cursor != L.begin()){
                cursor--;
                cursor = L.erase(cursor); // cursor가 가리키는 값을 삭제
            }
        }
    }
    for(auto c : L) cout << c;
}