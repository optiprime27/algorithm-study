#include <iostream>
using namespace std;
// 별 거꾸로 찍기

/*
    *
   **
  ***
 ****
*****

*/

int main(){
    int n;
    cin >> n;
    // 결과가 2차원 배열이므로 for문을 2번 써야한다고 생각
    for(int i=0;i<n;i++){
        // 오른쪽 정렬 별이기 때문에 -> 공백처리를 해주어야 한다
        // 공백은 점점 줄어들어야 하므로 -> 증감식이 -- 이 된다
        for(int j=n-1;j>i;j--){
            cout << " ";
        }
        for(int k=0;k<=i;k++){
            cout << "*";
        }
        cout << endl; // 한줄이 끝난 후 줄바꿈을 한다
    }

}