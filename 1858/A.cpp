#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;

        //anna can press even
        //kitti can press odd
        //even places is 1 extra when odd game
        // for odd game kitti will press game/2
        //for odd game anna will press game/2 + 1 anna start kitt fail
        //for even game both will press game/2 anna starts anna fail
        //
        if(a == b){
            if((c)%2==0){
                cout<<"Second"<<endl;
            }
            else{
                cout<<"First"<<endl;
            }
        }else if(a > b){
            cout<<"First"<<endl;
        }else{
            cout<<"Second"<<endl;
        }
    }
    return 0;
}