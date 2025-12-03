#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        int n = s.length();
        bool flag = false;

        // if(n % 4 != 0){
        //     flag = true;
        // }
        
        int count0 = 0;
        int count1 = 0;

        for(int i = 0; i < n; i++){
            if(s[i] == '0') count0++;
            else count1++;
        }
        int minCount = min(count0, count1);

        if(minCount%2 != 0){
            flag = true;
        }
        if(flag) cout<<"DA"<<endl;
        else cout<<"NET"<<endl;

    }
}