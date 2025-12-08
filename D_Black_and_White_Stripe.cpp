#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        string s;
        cin>>s;

        int wtb = 0;
        int min_wtb = INT_MAX;

        for(int i = 0; i < n; i++){
            if(s[i] == 'W') wtb++;

            if(i >= k){
                if(s[i - k] == 'W') wtb--;
            }

            if(i >= k - 1){
                min_wtb = min(min_wtb, wtb);
            }
        }

        cout << min_wtb << endl;
    }
}



// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;

//     while(t--){
//         int n,k;
//         cin>>n>>k;

//         string s;
//         cin>>s;

//         //i can select segment of lenght 
//         int wtb = 0;
//         int min_wtb = INT_MAX;
      
//         for(int i = 0; i < n; i++){
           
            
//             if(s[i] == 'W'){
//                 wtb++;
//                  if(i+1-k){
//                     if(s[i+1-k] == 'W'){
//                         wtb--;
//                         min_wtb = min(wtb,min_wtb);
//                     }
//                 }
//             }
            
            
//         }
//          min_wtb = min(wtb,min_wtb);
//          cout<<min_wtb<<endl;
//     }
// }