#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    double arr[1000]; // 최대 1000개의 과목
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    double max =0;
    for(int j=0;j<n;j++){
        if(arr[j]>max){
            max = arr[j];
        }
    }
    for(int k=0; k<n;k++){
        arr[k] = arr[k]/max * 100;
    }

    double sum=0;
    for(int i=0; i<n; i++){
        sum=sum+arr[i];
    }
    cout << sum/(double)n << endl;
}