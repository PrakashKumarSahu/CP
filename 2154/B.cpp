#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> b(n);
        for(int i = 0; i < n; i++) cin>>b[i];

        int maxe = *max_element(b.begin(),b.end());

        bool flag = true;
        int ans = 0;
        for(int i = 0; i < n-1; i++) {
            if(i%2 == 0){
                if(!(b[i]<b[i+1])){
                    if(b[i+1]<maxe) ans += 1;
                    else  ans += 1+b[i]-b[i+1];
                    
            }else{
                if(!(b[i]>b[i+1])){
                    
                    if(b[i+1]<maxe) ans+=1;
                    else 1+b[i+1]-b[i];
                }
            }       
        }
        
    }cout<<ans<<endl;


   }
}