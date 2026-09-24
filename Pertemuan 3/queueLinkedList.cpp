#include<iostream>
#include<queue>

using namespace std;
int main(){
    queue<int> q;
    int input;
    while(cin >> input){
        q.push(input);
    
}

while(!q.empty()){
    cout<< q.front()<< " ";
    q.pop();
}
cout << endl;
return 0;
}