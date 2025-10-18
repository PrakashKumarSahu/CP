#include<bits/stdc++.h>
using namespace std;


int main(){
    int T;
    cin>>T;
    while(T--){
        int n,x;
        cin>>n>>x;
        
        vector<int> a(n);
        int ans = 0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(i>0){
                ans  = max(ans,a[i]-a[i-1]);
            }
        } 
        ans = max(ans,a[0]);
        ans = max(ans,2*(x - a[n-1]));

        cout<<ans<<endl;
    }
    return 0;
}