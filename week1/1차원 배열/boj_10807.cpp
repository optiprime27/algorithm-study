#include <iostream>
using namespace std;

int main(){
    int n; int s; int sum = 0;
    int arr[100]; // 최대 크기를 설정한다
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> arr[i]; // 입력 자체를 반복문으로 받는다
    }
    cin >> s;

    for(int j=0; j<n; j++){
        if(arr[j]==s){
            sum ++ ;
        }
    }

    cout << sum;
}