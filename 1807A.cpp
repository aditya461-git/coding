#include<iostream>
using namespace std;
int main(){
    int n; cin>>n;
    for(int i=1; i<=n; i++){
        int a,b,c;
        cin>>a;
        cin>>b;
        cin>>c;
        if(a+b==c){
            cout<<"+"<<endl;
        }else if(a-b==c){
            cout<<"-"<<endl;
        }
    }
    return 0;
}