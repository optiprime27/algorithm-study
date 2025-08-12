#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    int sum = 0;
    for(int i=0; i<t;i++){
        int n;
        cin >> n;
        sum = sum +n;
    }
    cout << sum << endl;
}