#include <iostream>
using namespace std;

int main(){
    int n,m;
    int i,j,k;
    int arr[100]={0};
    cin >> n >> m;
    for(int t=0; t<m; t++){
        cin >> i >> j >> k;
        for(int x=i; x<=j; x++){ // 위에서 i 값을 그대로 사용하고 싶어서 for(int i; i<=j; i++) 로 해서 틀림
            // 무조건 초기화를 해주어야 하므로 새로운 변수 x를 도입해서 위의 i값을 넣어준다
            arr[x-1]=k;
        }
    }
    for(int p=0; p<n;p++){
        cout << arr[p] << " ";
    }

}