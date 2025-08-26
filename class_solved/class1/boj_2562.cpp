#include <iostream>
using namespace std;

int main(){
    int arr[9]; // 9칸짜리 1차원 배열 생성
    for(int i=0; i<9; i++){
        cin >> arr[i];
    }
    //최댓값 찾기
    int tmp = 0;
    for(int j=0;j<9;j++){
        if(tmp<arr[j]){
            tmp = arr[j];
        }
    }
    cout << tmp << endl;
    //몇번째인지 찾기
    for(int k=0; k<9;k++){
        if(tmp==arr[k]){
            cout << k+1 << endl;
            return 0;
        }
    }
}