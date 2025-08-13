#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main(){
    int n;
    cin >> n;

    queue <int> qu;
    stack <int> st;

    int cnt =1;

    // 큐에 학생 줄 입력
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        qu.push(x);
    }

    while(!qu.empty()){//큐가 빌때까지 진행
        if(qu.front()==cnt){
            qu.pop();
            cnt++;
        }else{
            st.push(qu.front());
            qu.pop();
        }
        while(!st.empty() && st.top()==cnt){
            st.pop();
            cnt++;
        }
    }
    if(st.empty()) cout << "Nice"<<'\n';
    else cout << "Sad" << '\n';
}