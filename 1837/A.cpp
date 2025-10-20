#include<iostream>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int x,k;
        cin>>x>>k;
        //target is x and i can only jump to non divisible by k

        if(x%k==0){
            cout<<2<<endl;
            cout<<1<<" "<<x-1<<endl;
            continue;
        }
        else{
        cout<<1<<endl;
        cout<<x<<endl;
        }
    }
}