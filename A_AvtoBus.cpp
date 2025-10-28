#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;

        long long min = 0;
        long long max = 0;

        if(n<4 || n%2 != 0){
            cout<<-1<<endl;
            continue;
        }
        
            cout<<(n/6?n/6:n/4)<<" "<<n/4<<endl;
        

    }
}