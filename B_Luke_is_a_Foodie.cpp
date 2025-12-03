#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;

    while(t--){
        ll n,x;
        cin>>n>>x;

        vector<ll> food(n);
        for(int i = 0; i < n; i++){
            cin>>food[i];
        } 
        vector<pair<ll,ll>> segment(n);
        for(int i = 0; i < n; i++){
            segment[i].first = food[i]-x;
            segment[i].second = food[i] +x;
        }
        int count = 0; 
        ll l = LONG_LONG_MIN;
        ll r =  LONG_LONG_MAX;
        for(int i = 0; i< n; i++){
            l = max(segment[i].first,l);
            r = min(segment[i].second,r);

            if(l>r){
                count++;
                l = segment[i].first;
                r = segment[i].second;

            }
        }
        
        
cout<<count<<endl;
        // ll min_el = *min_element(food.begin(),food.end());
        // ll max_el = *max_element(food.begin(),food.end());
        // //INITIALIZE V WITH AVG OF MIN MAX
        // for(int i = 0; i < n; i++){

        // }

        // //afinity = (v-a[i]) and afinity<= x



        
    }
}