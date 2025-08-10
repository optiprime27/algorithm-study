#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i =0; i<t; i++){
        int n;
        string s;
        cin >> n >> s;
        for(int j=0; j<s.length();j++){ // 문자열 길이만큼 반복
            for(int k=0; k<n; k++){
                cout<<s[j];
            }
        }
        cout << endl; // 하나의 테스트케이스가 끝날 때마다 줄바꿈 주의
    }
}