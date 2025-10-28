//ans += desi-curr; must be positive
//ans  += dis - curr; must be positive
#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int ans = 0;
        int a,b,c,d;
        cin>>a>>b>>c>>d;

        if(d-b ==0 && a-c == 0 ){
            cout<<0<<endl;
            continue;
        } 
        else if (d<b){
            cout<<-1<<endl;
            continue;
        }
        else{
            ans += d-b;
            b += ans;
            a += ans;
            // cout<<ans<<" ";
            if(a-c>=0){
                ans += a-c;
                // cout<<ans <<" ";
            }
            else{
                cout<<-1<<endl;
                continue;
            }
        }
        cout<<ans<<endl;
        
    }
    return 0;
}