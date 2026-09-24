#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> s;
    int input;

    while (cin >> input){
        s.push(input);
    }
    while(!s.empty()){
        cout<< s.top() << " ";
        s.pop();
    }
    cout << endl;
    return 0;
}