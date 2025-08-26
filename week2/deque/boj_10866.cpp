#include <iostream>
using namespace std;
#include <deque>

int main(){
    int n;
    cin >> n;
    deque <int> dq;
    for(int i=0; i<n; i++){
        string s;
        cin >> s;
        if(s=="push_front"){
            int x;
            cin >> x;
            dq.push_front(x);
        }else if(s=="push_back"){
            int y;
            cin >> y;
            dq.push_back(y);
        }else if(s=="pop_front"){
            if(dq.empty()){
                cout << -1 << '\n';
            }else{
                cout << dq.front() << '\n';
                dq.pop_front();
            }
        }else if(s=="pop_back"){
            if(dq.empty()){
                cout << -1 << '\n';
            }else{
                cout << dq.back() << '\n';
                dq.pop_back();
            }
        }else if(s=="size"){
            cout << dq.size()<<'\n';
        }else if(s=="empty"){
            if(dq.empty()){
                cout << 1 << '\n';
            }else{
                cout << 0 << '\n';
            }
        }else if(s=="front"){
            if(dq.empty()){
                cout << -1 << '\n';
            }else{
                cout<<dq.front()<<'\n';
            }        
        }else if(s=="back"){
            if(dq.empty()){
                cout << -1 << '\n';
            }else{
                cout<<dq.back()<<'\n';
            }
        }
}
return 0;
}