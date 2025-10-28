#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long n,k;
        cin>>n>>k;
        
        string s;
        cin>>s;

        vector<int> freq_char(26,0);
        for(int i = 0; i < n; i++){
            freq_char[s[i]-'a']++;
        }
        int odd = 0;
        for(int i = 0; i < 26; i++){
            if(freq_char[i]%2 == 1) odd++;
        }

        if(odd>k+1) cout<<"NO"<<endl;

        else cout<<"YES"<<endl;
    }
}


