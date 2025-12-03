#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        bool flag = false;

        for(int j = 1; j < n-1; j++){
            int i = -1;
            int k = -1;

            for(int left = 0; left < j; left++){
                if(arr[left] < arr[j]){
                    i = left;
                    break;
                }
            }
            for(int right = j + 1; right < n; right++){
                if(arr[right] < arr[j]){
                    k = right;
                    break;
                }
            }
            if(i != -1 && k != -1){
                cout<<"YES"<<endl;
                cout<<i + 1<<" "<<j + 1<<" "<<k + 1<<endl;
                flag = true;
                break;
            }
        }
        if(!flag){
            cout<<"NO"<<endl;
        }
    }
}