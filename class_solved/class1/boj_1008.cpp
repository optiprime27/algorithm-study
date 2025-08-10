#include <iostream>
using namespace std;

int main(){
    double x,y; // 정수로 입력하지만, 실수로 받자
    cin >> x >> y;

    // 몫을 출력하는 것이 아니라 실제로 나눈 소수를 출력하기 때문에
    // 둘 중 하나를 실수로 바꾼다

    // 또한 문제에서 실제 정답과 출력값의 절대오차 또는 상대오차가 10^(-9)이하이면 정답이라는 조건 제시
    // 소숫점 아래 자릿수 조절하여 출력을 해야한다.
    cout.precision(15); // 소수점 이하 15자리까지 출력하라.
    cout << x/y << endl;
}