#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        vector<pair<int,int>> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i].first;
            arr[i].first = arr[i].first%k?arr[i].first%k:k;
            arr[i].second=i+1;
        } 

        sort(arr.begin(), arr.end(), [&](pair<long long, long long> a, pair<long long, long long> b) {
			if (a.first != b.first)
				return a.first > b.first;
			return a.second < b.second;
		});
        

       for(int i=0;i<n;i++){
           cout<<arr[i].second<<" ";
       }
       cout<<endl;



        
    }
}