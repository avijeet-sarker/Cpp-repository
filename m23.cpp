#include<iostream>
using namespace std;
int main(){
    int n=10;
    int sum=0;
for(int i=1; i<=n; i++){
    sum+=i;
    if(i==8){
        break;
    }
    
}
 cout<<"sum:"<<sum;
return 0;
}