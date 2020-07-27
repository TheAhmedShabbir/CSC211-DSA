#include <iostream>
#include "stack.cpp"
using namespace std;

bool IsOperator(char c){
    if(c == '+' || c=='-' || c=='*' || c=='/' || c== '^'){
        return true;
    }
    else {
        return false;
    }
}

int Precedence(char c){
    if(c=='^'){
        return 3;
    }
    else if(c=='+' || c=='-'){
        return 1;
    }
    else if(c=='*' || c=='/'){
        return 2;
    }
    else{
        return -1;
    }
}

string InfixToPostfix(stack(char s), string infix){
    string postfix;
    for(int i = 0; i<infix.length(); i++){
        if(infix[i] >= '0'  && infix[i] <= '9'){
            postfix+=infix[i];
        } else if(infix[i] == '('){
            s.push(infix[i]);
        }
        else if(infix[i]==')'){
            while(s.top() != '(' && (!s.empty())){
                char temp = s.top();
                postfix+=temp;
                s.pop();
            }
        } else {
            if(IsOperator(infix[i])){
                if(s.empty()){
                    s.push(infix[i]);
                }
                else if(Precedence(infix[i]) > Precedence(s.top())){
                    s.push(infix[i]);
                }
                else if(Precedence(infix[i]) == Precedence(s.top()) && (infix[i]=='^')){
                    s.push(infix[i]);
                }
                else{
                    while(!s.empty() && Precedence(infix[i])<= Precedence(s.top())){
                        postfix+=s.top();
                        s.pop();
                    }
                    s.push(infix[i]);
                }
            }
        }
    while(!s.empty()){
        postfix+=s.top();
        s.pop();
    }
    return postfix;
    }
}

int main(){
    string infix, postfix;
    cout<<"Enter an infix expression"<<endl;
    cin>>infix;
    stack (char s);
    cout<<"The infix expression is: \n"<<infix;
    postfix = InfixToPostfix(s , infix);
    cout<<"Postfix expression is: "<<postfix<<endl;

    return 0;
}
