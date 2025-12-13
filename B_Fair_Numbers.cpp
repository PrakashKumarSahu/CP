#include<bits/stdc++.h>
using namespace std;


bool div_by_num_check(long long x){
    long long temp = x;
    bool flag = true;
    long long dig = 0;
    while(temp){
        dig = temp%10;
        temp = temp/10;
        if(dig != 0 && x%dig != 0){
            flag = false;
            break;
        }
    }
    return flag;
}


int main(){
    int t;
    cin>>t;

    while(t--){
        long long n;
        cin>>n;

        long long x = n;
        while(x!= LONG_LONG_MAX){
            if(div_by_num_check(x)){
                break;
            }
            x++;
        }
        cout<<x<<endl;
        //find fair number greater than n or equal
        
    }
}