#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;

    while(t--){
    int a,b;
    cin>>a>>b;

    int max_op = INT_MAX;
    int incrb = 0;

    for(int i = 0; i < 32; i++){
        int op = i;
        int tempb = b+i;
        int tempa = a;

        if(tempb == 1) continue;

        while(tempa != 0){
            tempa /= tempb;
            op++;
        }
    
        max_op = min(op,max_op);
    }
    cout<<max_op<<endl;

    
    // do{
    //     incrb++;
    //     float floga = log(a);
    //     float flogb = log(b);
    //     float flogbp = log(b+1);
    //     prev = ceil(floga/flogb);
    //     curr = ceil(floga/flogbp);
        
    // }while(prev>curr);

    // if(incrb>0) incrb--;
    // cout<<curr+incrb<<endl;

    }
}