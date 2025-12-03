#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        vector<int> a(n);
        ll asum = 0;
        for(int i=0;i<n;i++) {
            cin>>a[i];
            asum += a[i];
        }

        vector<int> b(n);
        for(int i=0;i<n;i++) cin>>b[i];

        sort(b.begin(),b.end());

        int maxb = b[n-1];
        

        //a would like to max so each time a would select max and b also
        if(k%2 == 0){
            cout<<asum<<endl;
        }else{
            cout<<asum +maxb<<endl;
        }

        
    }
}