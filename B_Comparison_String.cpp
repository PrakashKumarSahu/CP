#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        string s;
        cin>>s;

        long long count = 0;
        long long max = INT_MIN;

        for(long long i=0;i<n-1;i++){
            if(s[i] == s[i+1]){
                count++;
            }else{
                if(count > max){
                    max = count;
                }
                count = 0;
            }
        }
        if(count > max){
                    max = count;
        }
        
        cout<<max+2<<endl;

    }
}