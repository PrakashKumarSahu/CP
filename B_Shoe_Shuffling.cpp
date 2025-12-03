#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> ss(n);
        for(int i = 0; i < n; i++) cin >> ss[i];

        unordered_map<int, vector<int>> pos;

        for (int i = 0; i < n; i++) {
            pos[ss[i]].push_back(i + 1);  
        }

        vector<int> arr(n);
        bool ok = true;

        for(auto &g : pos){
            auto &v = g.second;

            if(v.size() == 1){ 
                ok = false;
                break; 
            }

            
            for(int i = 0; i < v.size(); i++){
                arr[v[i] - 1] = v[(i + 1) % v.size()];
            }
        }

        if(ok){
            for(int i = 0; i < n; i++) cout << arr[i] << " ";
        } else {
            cout << -1;
        }
        cout << "\n";
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

//         vector<int> ss(n);
//         for(int i = 0; i < n; i++) cin>>ss[i];

//         unordered_map<int, vector<int>> pos;

//         for (int i = 0; i < ss.size(); i++) {
//             pos[ss[i]].push_back(i+1);
//         }
//         vector<int> arr(n);
//         for(int i = 0; i<n; i++){
//             arr[i] = pos[ss[i]].back();
//             pos[ss[i]].rend();
//         }
//         bool flag = true;
//         for(int i = 0; i < n; i++){
//             if(arr[i] == i+1){
//                 flag = false;
//                 break;
//             } 

//         }
//         if(flag ){
//             for(int i = 0; i < n; i++) cout<<arr[i]<<" ";
//         }else{
//             cout<<-1;
//         }
//         cout<<endl;
//         //i think that people having same number of shoe must be even;
//         //they will exchnage the shoes between them 
//         //i have to iterate through all shoe size and store their positional value
//     }
// }