#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        string s;
        cin>>s;

        //as i can't jump fro separation

        //Three cases
        // . 1
        // .. 2
        // ... 3

        int seg1 = 0;
        int seg2 = 0;
        int seg3 = 0;
        int max = 0;
        for(int i=0;i<n;i++){
            if(s[i]=='.'){
                max++;
            }
            else{
                if(max != 0) {
                    if(max == 1) seg1++;
                    else if(max == 2) seg2++;
                    else if(max >= 3) seg3++;
                }
                max = 0;
            }
        } 
        if(max != 0) {
            if(max == 1) seg1++;
            else if(max == 2) seg2++;
            else if(max >= 3) seg3++;
        }

        int ans = 1*seg1 + 2*seg2 + 2*seg3;
        ans = seg3>0 ? 2 : ans;
        cout<<ans<<endl;

    }
    return 0;
}