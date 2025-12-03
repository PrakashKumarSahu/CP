//i can move only one element from one array to another
//in array any number of times elements can be added
//all are hapening at same time

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int minglob = INT_MAX;
        vector<long long> secondMin(n);
        //i want minimum of every array to max
        //in the array with min element push every other element min to that
        
        
        for(int i=0;i<n;i++)
        {
            int m;
            cin>>m;

            vector<int> arr(m);
            for(int j=0;j<m;j++){
                cin>>arr[j];
                minglob = min(minglob,arr[j]);
            }
            sort(arr.begin(),arr.end());
            secondMin[i] = arr[1];            
        }

        long long ans = 0;
        sort(secondMin.begin(),secondMin.end());
        ans = minglob+ accumulate(secondMin.begin(),secondMin.end(),0LL)-secondMin[0];
        // vector<vector<int>> arr(n);
        // int imin = 0;
        // int jmin = 0;
        // int minval = INT_MAX;
        // for(int i=0;i<n;i++){
        //     int m;
        //     cin>>m;

        //     for(int j=0;j<m;j++){
        //         int x;
        //         cin>>x;
        //         arr[i].push_back(x);
        //         if(x < minval){
        //             minval = x;
        //             imin = i;
        //             jmin = j;
        //         }
        //     } 
        // }


        cout<<ans<<endl;

    }
}