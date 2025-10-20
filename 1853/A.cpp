#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int arr[n];
        int diff = 0;
        int min = 1e9;
        for(int i = 0,j=1; i < n; i++,j++) {
            cin>>arr[i];
        }
        bool flag = false;
        for(int i = 1; i < n; i++){
            diff = arr[i] - arr[i-1];
            if(diff < 0) {
                flag = true;
                break;
            }
            if(diff < min){
                min = diff;
            }
        }
        if(flag){
            cout<<0<<endl;
            continue;
        }else
        cout<<(min/2)+1<<endl;
    }
    return 0;
}