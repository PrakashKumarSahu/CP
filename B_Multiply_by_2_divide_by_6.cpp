#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int cnt3 = 0;
        int cnt2 = 0;

        while(n%3 == 0){
            n = n / 3;
            cnt3++;
        }
        while(n%2 == 0){
            n = n / 2;
            cnt2++;
        }
        if(n != 1 || cnt2 > cnt3){
            cout<<-1<<endl;

        }
        else{
            cout<<(2*cnt3 - cnt2)<<endl;

        }
    }
}