#include<bits/stdc++.h>
using namespace std;

int xd[] = {1,-1,-1,1}, yd[] = {1,1,-1,-1};

int main(){
    int t;
    cin>>t;

    while(t--){
        int a,b;
        cin>>a>>b;

        int xk,yk,xq,yq;
        cin>>xk>>yk>>xq>>yq;

        set<pair<int,int>> king;
        set<pair<int,int>> queen;
        for(int i = 0; i < 4; i++){
            king.insert({xk+xd[i]*a,yk+yd[i]*b});
            king.insert({xk+xd[i]*b,yk+yd[i]*a});

            queen.insert({xq+xd[i]*a,yq+yd[i]*b});
            queen.insert({xq+xd[i]*b,yq+yd[i]*a});

        }
        int count = 0;
        for(auto i :king )
            for(auto j : queen)
                if(i==j) count++;

        cout<<count<<endl;
    }

    return 0;
}