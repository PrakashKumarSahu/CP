// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <set>
// using namespace std;

// int helper(vector<int> &brr, int diff) {
//     auto it = find_if(brr.begin(), brr.end(), [diff](int x) -> bool { return x >= diff; });

//     if(it == brr.end()) it = brr.begin();
//     int val = *it;      
//     brr.erase(it); 
//     return val;
// }

// int main() {
//     int t;
//     cin >> t;

//     while(t--) {
//         int n;
//         cin >> n;

//         vector<int> arr(n);
//         vector<int> brr(n); 
//         vector<int> ans(n); 

//         for(int i = 0; i < n; i++) {
//             cin >> arr[i];
//             brr[i] = i + 1;
//         }


//         ans[0] = helper(brr, 1);

//         for(int i = 1; i < n; i++) {
        
//             int diff = arr[i-1] + ans[i-1] - arr[i];
//             ans[i] = helper(brr, diff);
//         }

//         for(int i = 0; i < n; i++) cout << ans[i] << " ";
//         cout << "\n";
//     }

//     return 0;
// }

#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int arr[n];
        for(int i = 0; i < n; i++){
            cin>>arr[i];
        }
        for(int i = 0; i < n; i++){
            cout<<n+1-arr[i]<<" ";

        }
        cout<<endl;
    }
    return 0;
}