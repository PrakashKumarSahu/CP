#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;
        long long temp = n;
        long long ans = 0;
        int count = 0;

        while(temp){
            temp /= 10;
            count++;           
        }
        ans += n/pow(10,count-1);
        ans += (count-1)*9;
        cout<<ans<<endl;

    }
    return 0;
}
