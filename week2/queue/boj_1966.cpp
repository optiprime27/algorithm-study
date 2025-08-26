#include <iostream>
#include <queue>
using namespace std;

int main(){
    int t;
    cin >> t; // 총 테스트케이스 개수
    while(t--){
        int n; int m; string s;
        cin >> n >> m; // 문서의 개수, 궁금한 문서 현재 몇번째 위치
        queue <pair<int,int>> q;
        priority_queue<int> pq; // 우선순위 큐
        // 가장 우선순위가 높은 것이 pop 된다.

        for(int i=0; i<n; i++){
            int importance;
            cin >> importance;
            q.push({importance,i}); // 중요도와 함께, 몇번째인지 함께 저장
            pq.push(importance); // 중요도만 저장
        }
        // 큐에서 인덱스로 접근 불가능
        int count =0;
        while(!q.empty()){ // 큐가 비어있지 않을 때까지 반복
            int current_importance = q.front().first;
            int current_index = q.front().second;
            q.pop();
            // 큐에서 팝하면, 가장 앞에 있는 것이 나온다.
            // 큐에서 팝된 것의 중요도가 우선순위 큐에서 팝한 것과 일치하면
            // 그것이 가장 우선순위가 높은 것

            // 현재 문서 중요도가 가장 높은 경우
            if(current_importance == pq.top()){
                pq.pop();
                count ++;
                if(current_index==m){
                    cout << count << '\n';
                    break; // 찾았으니까 멈춘다.
                }
                

            }
            // 아닌 경우 -> 가장 뒤로 보낸다
            else{
                q.push({current_importance,current_index});
            }
        }



        


    }
}