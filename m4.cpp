#include<iostream>
using namespace std;
int main(){
    char grade ='a'; //97
    int value = grade ;//implicit
    double price = 100.99;
    int newprice = (int)price;//explicit
cout<< value<< endl ;
cout << newprice;
return 0;
}
