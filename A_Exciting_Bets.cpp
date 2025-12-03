//depends on diff between two int a and b
//if diff is one the gcd gcd will be 1
//if diff is 0 cout 0 as infinite
//if diff is anything else gcd will be that diff

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long a,b;
        cin>>a>>b;

        long long diff = abs(a-b);

        if(diff == 0){
            cout<<0<<" "<<0<<endl;
        }
        else if(diff == 1){
            cout<<1<<" "<<0<<endl;
        }
        else{
            cout<<diff<<" "<<min(a%diff,diff-a%diff)<<endl;
        }

    }
}