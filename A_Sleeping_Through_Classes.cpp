#include<bits/stdc++.h>
using namespace std;


#define ll long long

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        string s;
        cin>>s;

        int slpe = 0; 
        int fawake= -1;

        for(int i = 0; i < n; i++){
            if(s[i] == '1'){
                fawake = i+k;
            }else if(i>fawake){
                slpe++;
            }
        }
        cout<<slpe<<endl;
    }
}