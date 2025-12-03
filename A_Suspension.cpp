#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int y,r;
        cin>>y>>r;

        cout<<((y/2 + r)<n ?y/2 + r:n)<<endl;
    }
}