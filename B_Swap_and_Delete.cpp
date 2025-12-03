#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        int n = s.size();
        int count0 = 0, count1 = 0;

        for(char c : s){
            if(c == '0') count0++;
            else count1++;
        }
        
        int len_t = 0;
        for(int i = 0; i < n; i++ ){
            if(s[i] == '0' && count1 > 0){
                count1--;
                len_t++;
            }
            else if(s[i] == '1' && count0 > 0){
                count0--;
                len_t++;
            }
            else{
                break;
            }
        }
        cout<<n-len_t<<endl;
    }
}