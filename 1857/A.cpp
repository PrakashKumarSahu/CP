#include<iostream> 
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int> arr(n);
        vector<int> even;
        vector<int> odd;
        int oddSum = 0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%2==0){
                even.push_back(arr[i]);
            }else{
                odd.push_back(arr[i]);
                oddSum += arr[i];
            }
        } 
     
       //even + even = even
         //odd + odd = even
        //even + odd = odd

    }
}