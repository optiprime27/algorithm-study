#include <iostream>
#include <stack>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        stack <char> st;
        string s;
        cin >> s; // 괄호 한줄을 문자열로 입력
        for(int j=0; j<s.length(); j++){
            if(st.empty()){
                st.push(s[j]);
            }else{
                if(st.top()=='(' && s[j]== ')'){
                    st.pop();
                }else{
                    st.push(s[j]);
                }
            }
        }
        if(st.empty()){
            cout << "YES"<<'\n';
        }
        else{
            cout << "NO"<< '\n';
        }
    }
}