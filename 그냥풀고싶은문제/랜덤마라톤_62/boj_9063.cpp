#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;

    if(n==1){
        cout << 0 << endl;
    }else{
        int arr_1[100000];
        int arr_2[100000];
        for(int i=0;i<n;i++){
            int a,b;
            cin >> a>>b;
            arr_1[i]=a;
            arr_2[i]=b;
        }
        
        int max_1 = arr_1[0];
        int min_1 = arr_1[0];
        for(int i=0; i<n; i++){
            if(arr_1[i]>max_1) max_1 = arr_1[i];
            if(arr_1[i]<min_1) min_1 = arr_1[i];
        }
        int max_2 = arr_2[0];
        int min_2 = arr_2[0];
        for(int i=0;i<n;i++){
            if(arr_2[i]>max_2) max_2 = arr_2[i];
            if(arr_2[i]<min_2) min_2 = arr_2[i];
        }
        int result = (max_1-min_1)*(max_2-min_2);

        cout << result << endl;

    }
}