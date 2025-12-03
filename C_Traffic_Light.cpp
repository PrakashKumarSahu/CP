#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        char c;
        cin>>c;

        string s;
        cin>>s;

        //double the string 
        //then reverse check from 
       
        string doubled_s = s + s;
        int pos = -1;
        int time = 0;
        int max_time = 0;
        bool flag = false;
        n = n*2;
        for(int i = n-1; i>=0; i--){
            if(doubled_s[i] == 'g'){
                pos = i;
            }
             if(doubled_s[i] == c){
                time = pos-i;
                max_time = max(time,max_time);

            }
        }
        cout<<max_time<<endl;
                
            
    }
}

