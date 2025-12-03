//it allows n2 hence i will use greedy uproach
#include <bits/stdc++.h>
using namespace std;


pair<int,int> func1(int a,int b,int n){
    if(a+1 < n){
        return {a+1,b};
    }else{
        return {-1,-1};
    }
}
pair<int,int> func2(int a,int b,int n){
    if(b+1 < n){
        return {a,b+1};
    }else{
        return {-1,-1};
    }
}
pair<int,int> func3(int a,int b,int n){
    if(a-1 > -1){
        return {a-1,b};
    }else{
        return {-1,-1};
    }
}
pair<int,int> func4(int a,int b,int n){
    if(b-1 >-1){
        return {a,b-1};
    }else{
        return {-1,-1};
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<vector<int>> a(n,vector<int>(n));

        long long max = INT_MIN;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                a[i][j] = j+i*n+1;

            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int temp = 0;
                pair<int,int> p;
                temp = a[i][j];

                p = func1(i,j,n);
                temp += p.first == -1 ? 0 : a[p.first][p.second];

                
                p = func2(i,j,n);
                temp +=  p.first == -1 ? 0 :a[p.first][p.second];

                p = func3(i,j,n);
                temp +=  p.first == -1 ? 0 :a[p.first][p.second];

                p = func4(i,j,n);
                temp +=  p.first == -1 ? 0 :a[p.first][p.second];


                if(temp>max) max = temp;

            }
        }
        cout<<max<<endl;

    }

}