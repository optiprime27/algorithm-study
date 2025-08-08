#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack <int> s; // 스택
    int n; // 명령어 수
    string command; // 명령어
    int num; // push.. 스택에 넣을 정수
    int result; // 반환할떄 사용 (결과값)

    cin >> n;
    
    for(int i=0; i<n; i++){
        cin >> command; // 이 생각을 왜 못했지? ㅡㅡ
        // 명령어 자체를 string으로 받기
        // 단, cin은 공백을 기준으로 입력을 받음 주의

        // 1. push
        if(command == "push"){
            cin >> num;
            s.push(num);
        }

        // 2. pop
        else if(command == "pop"){
            if (s.size()==0){
                result = -1;
                cout << result << endl;
            }
            else{
                result = s.top(); // result = s.pop() 불가 !!!
                // s.pop() -> pop 함수는 리턴값이 없음
                cout << result << endl;
                s.pop();
            }
        }

        // 3. size
        else if (command == "size"){
            cout << s.size()<<endl;
        }

        // 4. empty
        else if (command == "empty"){
            if (s.size()==0){
                result = 1;
                cout << result << endl;
            }
            else{
                result = 0;
                cout << result << endl;
            }
        }

        // 5. top
        else if (command == "top"){
            if(s.size()==0){
                result = -1;
                cout << result << endl;
            }
            else{
                result = s.top();
                cout << result << endl;
            }
        }

    }

}