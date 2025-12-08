#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        ll k = 0;


        // long long ka = -a[0];
        // for (int i = 1; i < n-2; i++) {
        //     long long x = ka - a[i];
        //     long long y = b[i] - ka;

        //     if (abs(x) >= abs(y)) ka = x;
        //     else ka = y;
        // }

        // long long kb = b[0];
        // for (int i = 1; i < n-2; i++) {
        //     long long x = kb - a[i];
        //     long long y = b[i] - kb;

        //     if (abs(x) >= abs(y)) kb = x;
        //     else kb = y;
        // }

        // //patter straight lines 
        // int k = 0;
        // int kas = max((ka-a[n-2])-a[n-1],b[n-1]-(b[n-2]-ka));
        // int kax = max((b[n-2]-ka)-a[n-1],b[n-1]-(ka-a[n-2]));
        // ka = max(kas,kax);
        
        // //pattern here is cross lighnes
        // int kbs = max((kb-a[n-2])-a[n-1],b[n-1]-(b[n-2]-kb));
        // int kbx = max((b[n-2]-kb)-a[n-1],b[n-1]-(kb-a[n-2]));
        // kb = max(kbs,kbx);

        // k = max(ka,kb);
        // // long long k = (abs(ka) >= abs(kb) ? ka : kb);
        // //still answer is incorrect another option i have is to now use this 
        // //straight and cross line pattern everywhere in eahc lines 
        // //currenlty usiing only on last three numbers considering . as single

        //simplified version of above pattern previously used for last 2 now for everyelement
        long long max_k = 0, min_k = 0;  // Starting score k = 0
        
        for (int i = 0; i < n; i++) {
            long long from_max1 = max_k - a[i];
            long long from_max2 = b[i] - max_k;
            
            long long from_min1 = min_k - a[i];
            long long from_min2 = b[i] - min_k;
            
            long long new_max = max({from_max1, from_max2, from_min1, from_min2});
            long long new_min = min({from_max1, from_max2, from_min1, from_min2});
            
            max_k = new_max;
            min_k = new_min;
        }
        
        k = max(max_k,min_k);

        cout << k << endl;
    }
}








// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;

//     while(t--){
//         int n;
//         cin>>n;

//         vector<int> a(n);
//         vector<int> b(n);

//         for(int i = 0; i < n; i++) cin>>a[i];
//         for(int i = 0; i < n; i++) cin>>b[i];

//         //k - ai
//         //bi-k

//         long long k = 0;

//         // for(int i = 0; i<n-1; i++ ){
//             //whatever k is
//             //if a then k will get more negative
//             //if b flip the sign of k add b
            
//             //choos a[i] or b[i ] based on a[i+1 ] and  b[i+1]
//             //if i have to choose b in next i will choose lesser number current

//             //if i have to choos a in next i will choose lesser number current
//             //four possibility
            
//             //aa
//             //ab
//             //bb
//             //ba


//             // int tempa = k - a[i];
//             // int tempb = b[i] - k;

//             // int aa = tempa - a[i+1];
//             // int ab = b[i+1]-tempa;
//             // int ba = tempb - a[i+1];
//             // int bb = b[i+1]-tempb;
//             int ka = -a[0];
//             for(int i = 1; i < n; i++){
//                 ka = max(ka-a[i],b[i]-ka);
                
//             }

//              int kb = b[0];
//             for(int i = 1; i < n; i++){
//                 kb = max(kb-a[i],b[i]-kb);
//             }

//             k = max(ka,kb);
//             cout<<k<<endl;
            

        

//         }
    
// }