#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        long long n, k, b, s;
        cin >> n >> k >> b >> s;
        long long min_sum = b * k;
        long long max_sum = b * k + (n * (k - 1));

        if(s < min_sum || s > max_sum){
            cout << -1 << "\n";
            continue;
        }

        vector<long long> a(n, 0);
        a[0] = b * k;

        long long remaining = s - a[0];

        for(int i = 0; i < n; i++){
            long long add = min(remaining, k - 1);
            a[i] += add;
            remaining -= add;
        }

        for(long long x : a) cout << x << " ";
        cout << "\n";
    }
}


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;

//     while(t--){
//         long long n,k,b,s;
//         cin>>n>>k>>b>>s;

//         //have to find the array which sum is s and beuty is b
//         vector<long long> arr(n,0);
//         long long sum = 0;
//         long long ind = 0;
    
//         while(sum != s && ind<n){
//             long long max_num = k*(b+1)-1;
//             long long diff = s-sum;
            
//             if(diff >= max_num) {
//                 sum  += max_num;
//                 b = 0;
//                 arr[ind] = max_num;

//             }else if( diff >= k*b){
//                 arr[ind] = diff;
//                 b=0;
//                 sum += diff;
//             }
//             else{
//                 sum += diff;
//                 arr[ind] = diff;

//                 //can only increment till k-1 max
               

//             }
//             ind++;
//         }
        
//         if(sum != s )cout<<-1<<endl;
//         else for(auto e : arr) cout<<e<<" ";

//         cout<<endl;
        

        
//     }
// }


