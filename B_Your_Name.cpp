#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string s;
        string st;
        cin>>s>>st;

        sort(s.begin(),s.end());
        sort(st.begin(),st.end());

        cout<<(s == st ? "YES":"NO");
        cout<<endl;

    }
}