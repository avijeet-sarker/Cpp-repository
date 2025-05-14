#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter char:";
    cin>>ch;
    if(ch>='a' && ch<='z' ){
        cout<<"lower case";
    }
    else{
        cout<<"upper case";
    }
return 0;
}