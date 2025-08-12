#include <iostream>
#include <vector>
#include <cstdlib>  // abs 함수
using namespace std;

typedef long long ll; // 64비트 정수형

// 벡터에 들어있는 4개의 수가 모두 같은지 확인하는 함수
bool isConvergence(vector <ll> num){
    if(num[0] == num[1] && num[1]==num[2] && num[2]==num[3] ) return true;
    return false;
}

vector <ll> getNextSequence(vector <ll> num){
    vector <ll> tmp(4);
    tmp[0] = abs(num[0] - num[1]);
    tmp[1] = abs(num[1] - num[2]);
    tmp[2] = abs(num[2] - num[3]);
    tmp[3] = abs(num[3] - num[0]);
    return tmp;
}

int main(){
    while(1){
        int cnt = 0;
        vector <ll> num(4); // ll 타입의 크기 4짜리 벡터(동적배열) 만든다
        for(int i=0; i<4; i++){
            cin >> num[i];
        }
        if(!num[0] && !num[1] && !num[2] && !num[3]) break;

        while(!isConvergence(num)){
            cnt++;
            num = getNextSequence(num);
        }
        cout << cnt << endl;
    }
}