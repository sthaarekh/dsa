// 1
// 2  2
// 3  3  3
// 4  4  4  4
// 5  5  5  5  5

#include<iostream>
using namespace std;
void print(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
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