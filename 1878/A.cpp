#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,k;
        cin>>a>>k;

        int arr[a];
        bool flag = false;
        for(int i=0;i<a;i++){
            cin>>arr[i];
            if(arr[i] == k) flag = true;
        } 
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;

}