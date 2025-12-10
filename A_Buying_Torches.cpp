#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;


    while(t--){
        long long x,y,k;
        cin>>x>>y>>k;

        //k(y+1)<= p(x-1)+1
        //op = k+p

        long long p = 0;
        // while((p*(x-1)+1) < k*(y+1)){
        //     p++;
        // }
        //this fails becasue what if x =1 then makes (x-2) negative
        // p = ceil((k*(y+1)-1+(x-2))/(x-1));

        long long num = k*(y+1)-1;
        long long den = x-1;

        p = num/den;
        if(num%den != 0) p++;
        
        cout<< p+k<<endl;
    }
}




// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         long long x, y, k;
//         cin >> x >> y >> k;

//         __int128 num = (__int128)k * (y + 1) - 1;
//         long long den = x - 1;

//         long long p = num / den;
//         if (num % den != 0) p++;

//         cout << p + k << "\n";
//     }
// }
