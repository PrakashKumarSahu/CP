#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    int min  = INT_MAX;
    for(int i=0;i<n;i++) {
        cin>>arr[i];
        if(abs(arr[i])<min){
            min = abs(arr[i]);
        }
    }
    cout<<min<<endl;

    return 0;
}