#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
     
    while(t--){
        int n,r,b;
        cin>>n>>r>>b;

        string s;
        int partition = r/(b+1);
        int partitionmod = r%(b+1);
        for(int j = 1; j <= b+1; j++){
            for(int i = 1; i <= partition; i++){
                s += 'R';
            }
            if(partitionmod){
                partitionmod--;
                s += 'R';
            }
            
            if(j != b+1){
                
                s +='B';
           
            }
            
            

        }
        cout<<s<<endl;
        
    }
}