#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        vector<int> a(n);

        bool sorted = true;    
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(i>0){
                if(!(a[i]>=a[i-1])){
                    sorted = false;
                }
                
            }

        } 
        if(sorted && k <2){
            cout<<"YES"<<endl;
        }
        else if(k>=2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;

        }
        
    }
    return 0;
}