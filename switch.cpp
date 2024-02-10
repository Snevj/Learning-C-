#include<iostream>

using namespace std;

int main(){
    int a, b;
    char operation;
    cout<<"Enter the numbers one by one respectively"<<endl;
    cin>>a>>b;
    cout<<"Enter an operator"<<endl;
    cin>>operation;
    switch (operation)
    {
    case '+' :
        cout<<a+b<<endl;
        break;
    case '-' :
        cout<<a-b<<endl;
        break;
    case '*' :
        cout<<a*b<<endl;
        break;
    case '/' :
        cout<<a/b<<endl;
        break;        
    default: cout<<"no worries"<<endl;
        break;
    }
}
