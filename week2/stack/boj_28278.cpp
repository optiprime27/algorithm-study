#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> s;
    int n;
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        int command;
        scanf("%d",&command);

        if(command==1){
            int num;
            scanf("%d",&num);
            s.push(num);
        }
        else if(command==2){
            if(s.empty()){
                printf("-1\n");
            }else{
                printf("%d\n",s.top());
                s.pop();
            }
        }
        else if(command==3){
            printf("%d\n",s.size());
        }
        else if(command==4){
            printf("%d\n",s.empty()?1:0);
        }
        else if(command==5){
            printf("%d\n",s.empty()?-1:s.top());
        }
    }
    return 0;
}