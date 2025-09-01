#include <bits/stdc++.h>
using namespace std;

int freq[26]; // 알파벳 횟수에 대한 배열만들기
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    for(auto c : s){
        freq[c-'a'] ++;
    }
    for(int i=0; i<26; i++){
        cout << freq[i] << ' ';
    }
}