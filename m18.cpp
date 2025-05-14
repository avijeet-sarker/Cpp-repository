#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter char:";
    cin>>ch;
    if(ch>=65 && ch<=90 ){
        cout<<"upper case";
    }
    else{
        cout<<"lower case";
    }
return 0;
}