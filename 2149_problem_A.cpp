#include<iostream>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        int count1 = 0,count0 = 0,count = 0;

        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i] == -1){
                count1 += 1;
            }
            else if (arr[i] == 0){
                count0 += 1;
            }
        }
        if(count1%2 == 0){
            count = count0;
        }
        else{
            count = count0 + 2;
        }
        cout<<count<<endl;


    }
    return 0;
}