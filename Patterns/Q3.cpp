// 1
// 1  2
// 1  2  3
// 1  2  3  4
// 1  2  3  4  5

#include<iostream>
using namespace std;
void print(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
    cin>>n;
    print(n);
    }
    return 0;
}