# include <iostream>
using namespace std;

int main(){
    int n;
    int arr[1000000]; // 입력 받는 개수는 최대 1000000개이므로

    cin >> n;

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int max_tmp = -1000000;
    for(int j=0;j<n;j++){
        if(max_tmp<arr[j]){
            max_tmp = arr[j];
        }

    }
    int min_tmp = 1000000;
    for(int k=0; k<n; k++){
        if(min_tmp>arr[k]){
            min_tmp = arr[k];
        }
    }
    cout << min_tmp << " "<< max_tmp;
}