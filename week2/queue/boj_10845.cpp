#include <iostream>
#include <queue>
using namespace std;

int main(){
    int n;
    cin >> n;
    queue <int> q;
    
    for(int i=0; i<n; i++){
        string s;
        int result;

        cin >> s;

        if(s=="push"){
            int x;
            cin >> x;
            q.push(x);
        }
        else if(s=="pop"){
            if(q.empty()){
                result = -1;
            }else{
                result = q.front();
                q.pop();
            }
            cout << result << '\n';
        }
        else if(s=="size"){
            cout << q.size()<<'\n';
        }
        else if(s=="empty"){
            if(q.empty()){
                cout << 1 << '\n';
            }else {
                cout << 0 << '\n';
            }
        }
        else if(s=="front"){
            if(q.empty()){
                cout << -1 << '\n';
            }else{
                cout << q.front()<<'\n';
            } 
        }
        else if(s=="back"){
            if(q.empty()){
                cout << -1 << '\n';
            }else{
                cout << q.back()<<'\n';
            }
            
        }

    }
    return 0;
}