#include<iostream>
using namespace std;

int main(){
    int row, col;
    cout<<"Input the number of rows and columns you want to add"<<endl;
    cin>>row>>col;
    for (int i=1;i<=row;i++){
        for(int j=1;j<=i;j++){
            if(i==1||i==row||j==1||j==col){
                cout<<"*";
            }
            else{
                cout<<" ";
            }            
        }
        cout<<endl;
    }
    return 0;

}