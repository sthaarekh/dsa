// *  *  *  *  *
// *  *  *  *
// *  *  *
// *  *
// *

#include<iostream>
using namespace std;
void print(int n){
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main(){
    int n=3;
    int t=2;
    for(int i=0;i<t;i++){
    print(n);
    n=n+2;
    }
    return 0;
}