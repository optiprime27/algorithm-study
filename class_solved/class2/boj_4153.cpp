#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    while(1){
        int a,b,c;

        cin >>a>>b>>c;

        // 멈추는 조건
        if(a==0 && b==0 && c==0) break;

        // 가장 긴변 찾기
        int max_length = max({a,b,c});
        if(max_length * max_length == a*a + b*b + c*c - max_length * max_length){
            cout << "right"<< endl;
        }else{
            cout << "wrong"<<endl;
        }

    }
}