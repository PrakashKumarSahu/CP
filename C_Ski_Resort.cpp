//combino math 2ptr
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,k,q;
        cin>>n>>k>>q;

        vector<int> arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];

        long long  vac= 0;
        int cnt1 = 0;
        long long diff =  0;
  
        for(int i=0;i<n;i++){
            if(arr[i]<=q){
                cnt1++;
            }else{
                if(cnt1>=k){
                    diff = (cnt1 - k + 1);
                    vac += diff*(diff + 1)/2;
                    
                }
                cnt1 = 0;
            }
        }

        if(cnt1>=k){
                    diff = (cnt1 - k + 1);
                    vac += diff*(diff + 1)/2;
                    cnt1 = 0;
                }

        cout<<vac<<endl;
        //considering vac how many wasy to choos k days from that
    }
}