#include<iostream>
using namespace std;
int main(){
   int n=10;
    int i=1;
    int evenSum=0;
while(i<=n){

    if(i%2==0){
evenSum+=i;

    }
i++;
    
    
}
 cout<<"sum:"<<evenSum;
return 0;
}