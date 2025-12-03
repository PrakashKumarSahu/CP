#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;

    while(t--){
        long long a;
        cin>>a;

        // if(a%2==0){
        //     cout<<"NO"<<endl;
        //     continue;
        // }
        // else{
        //     cout<<"YES"<<endl;
        // }
        while(a%2==0){
            a/=2;
        }
        if(a==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }

    }
}