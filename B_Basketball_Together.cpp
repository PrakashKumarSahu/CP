// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n,d;
//     cin>>n>>d;

//     vector<int> arr(n);
//     for(int i = 0; i < n; i++) cin>>arr[i];

//     //number of different subsets of arr that's max value into arralenght greater than d;
//     sort(arr.begin(),arr.end());
//     int ind = 1;
//     int ans = 0;
//     for(int i = 0; i < n; i++){
//         long long sum = (*max_element(arr.begin(),arr.begin()+i+1));
//         sum = sum*ind;
//         if(sum>d){
//             ans++;
//             ind = 1;
//         }else ind++;
        

//     } cout<<ans<<endl;
// }

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,d;
    cin>>n>>d;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin>>arr[i];

    int left = -1;
    int right = n-1;
    int team = 0;
    int team_size= 1;
    while(left<right){
        if(arr[right]*team_size <= d){
            left++;
            team_size++;

        }else{
            team++;
            team_size = 1;
            right--;
        }

    }
    cout<<team<<endl;
}




