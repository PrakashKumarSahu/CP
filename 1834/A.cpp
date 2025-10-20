#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int arr[n];
        int cnt1 = 0, cntm1 = 0;
        for(int i = 0; i < n; i++){
            cin>>arr[i];
            if(arr[i] == 1) cnt1++;
            else cntm1++;
        }

        int ops = 0;

        

        
        if(cntm1 > cnt1){
            int diff = cntm1 - cnt1;

            ops += ceil((float)diff/2.0f);  
            cntm1 -= ceil((float)diff/2.0f);
            cnt1 += ceil((float)diff/2.0f);
        }

        if(cntm1 % 2 == 1){
            ops++;
        }

        cout << ops << endl;
    }
    return 0;
}
