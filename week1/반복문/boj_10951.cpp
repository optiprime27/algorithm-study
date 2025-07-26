#include <iostream>
using namespace std;

int main(){
    int a,b;

    // 입력이 언제 끝나는지 모른다면 -> 입력을 조건으로 사용하자
    // 입력이 성공하면 -> true
    // 입력이 실패하거나 끝나면 -> false
    while (cin >> a >> b){
        cout << a+b << endl;
    }
}