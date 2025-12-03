#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string s;
        cin>>s;
        
        //unique element till i
        long long cnt = 0;
        long long maxcnt = 0;

        set<char> unique_chars;
        set<char> unique_chars_rev;

        vector<int> prefix_unique_count(n,0);//include
        vector<int> suffix_unique_count(n,0);//exclude

        for(int i = 0; i < s.size(); i++){
            unique_chars.insert(s[i]);
            unique_chars_rev.insert(s[s.size()-1-i]);

            prefix_unique_count[i] = unique_chars.size();
            suffix_unique_count[s.size()-1-i] = unique_chars_rev.size();

            // cnt = (unique_chars.size() + unique_chars_rev.size());
            // if(cnt>maxcnt){
            //     maxcnt = cnt;
            // }
           
        }

        for(int i = 0; i < n-1; i++){
            cnt = prefix_unique_count[i] + suffix_unique_count[i+1];
            if(cnt>maxcnt){
                maxcnt = cnt;
            }
        }
        cout<<maxcnt<<endl;
        

    }
}