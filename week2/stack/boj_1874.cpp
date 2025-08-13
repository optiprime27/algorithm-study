#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    stack <int> s;
    vector<char> result; // 결과 저장 벡터

    int cnt = 1; // 스택에 push 하기 위한, 1부터 시작해서 오름차순으로만 push

    for(int i=0; i<n; i++){
        int x;
        cin >> x; // 목표 수열을 입력 받는다.

        // 입력 받은 목표 수열이 x 일때, 1..x까지 순서대로 push 해야하므로
        while(cnt <=x){
            s.push(cnt);
            cnt ++;
            result.push_back('+');
        }
        // 스택의 top이 x여야 x를 출력 순서에 맞게 꺼낼 수 있음
        if(s.top() == x){
            s.pop();
            result.push_back('-');
        }
        // 만약에 스택의 top이 x가 아니라면, 이 수열은 스택으로 만들 수 없음
        else{
            cout << "NO" << '\n';
            return 0;
        }
    }
    for(int i=0;i<result.size();i++){
        cout << result[i] << '\n';
    }


}