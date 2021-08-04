#include<bits/stdc++.h>
#include<queue>
#include<stack>
using namespace std;

void reverse(queue <int> &q){
    stack<int> s;
    while(q.empty()==false){
        s.push(q.front());
        q.pop();
        
    }
    while(s.empty()==false){
        q.push(s.top());
        s.pop();
        cout<<q.front()<<" "; 
        q.pop();   
    }
    
}

int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    reverse(q);
}