//p will be used at once in which min b[i] 
//b[i ] is less than p
//utilize it to share other with min b[i]
//repeat 2 and 3 until all
//if b[i] is greater than p, then use p to share other with min b[i]

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,p;
        cin>>n>>p;

        vector<pair<int,int>> arr(n);
        

        for(int i=0;i<n;i++){
            cin>>arr[i].second; //a[i]
        }
 
        for(int i=0;i<n;i++){
            cin>>arr[i].first; // b[i]
        }

        long long ans = 0;

        sort(arr.begin(),arr.end());

        ans += p;
        n--;
        int i = 0;
        while(n--){
           //if a is their for b[i ] decrease n and a both 
           //and swtich b[i ] if a is 0
           if(arr[i].first < p){
                if(arr[i].second > 0){
                    ans += arr[i].first;
                    arr[i].second--;
                }
                else{
                    i++;
                    n++;
                }

            }
           
           else ans += p;
           
            
            
              
           
        }cout<<ans<<endl;

    }
}