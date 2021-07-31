#include <iostream>
#include <stack>
using namespace std;

bool match(char a,char b){
    return (a=='('&& b==')' || a=='{'&& b=='}' || a=='['&& b==']') ;
}

bool isBalanced(string str){
    stack<int> s;
    for(int i=0;i<str.length();i++){
        if(str[i]=='(' || str[i]=='[' || str[i]=='{' ) s.push(str[i]);
        else{
            if(s.empty()==true) return false;
            else if(match(s.top(),str[i])==false) return false;
            else s.pop();
        }
    }
    return (s.empty()==true);
}

int main(){
    string str= "(()){}[()()]" ;
    cout<<isBalanced(str);
}