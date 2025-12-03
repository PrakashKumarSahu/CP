// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes here
// 	//arr A of N distinc int
// 	int t;
// 	cin>>t;
	
// 	while(t--){
// 	    int n;
// 	    cin>>n;
	    
// 	    vector<int> arr(n);
//         vector<pair<int,int>> temp(n);
// 	    for(int i = 0; i < n; i++){
//             cin>>arr[i];
//             temp[i].first = arr[i];
//             temp[i].second = i;

//         } 
	    


	    
// 	    //I have to plot the numbers in the nubmerline
// 	    //extremes will have -1
// 	    //mid between even even 
// 	    //mid beween odd odd
// 	    //mid between even odd
// 	    // mid between odd even

//         sort(temp.begin(), temp.end());
//         vector<int> result(n, 0);
        
//         for(int i = 1; i<n;i++){
//             if(temp[i].first %2 == 0 && temp[i-1].first %2 == 0 || temp[i].first %2 !=0 && temp[i-1].first %2 !=0){
//                 int mid = (temp[i].first+temp[i-1].first)/2;
//                 result[i] += temp[i].first - mid-1;
//                 result[i-1] += mid - temp[i-1].first;
//                 result[i] +=1;
//             }
//             else{
//                 int temp0 =  temp[i].first - temp[i-1].first;
//                 result[i-1] += ceil((float)temp0/2);
//                 temp0 -= ceil((float)temp0/2);
//                 result[i] += temp0;
//                 result[i] +=1;
//             }
        
//         }
//         result[0] = -1;
//         result[n-1] = -1;
//         sort(temp.begin(), temp.end(), [](const pair<int,int> &a, const pair<int,int> &b) {
//     return a.second < b.second;
// });
// for(int i = 0; i<n;i++){
//     cout<<result[temp[i].second]<<" ";
// }
//         cout<<endl;
        

	    
	    
// 	}

// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        vector<int> arr(n);
        vector<pair<int,int>> temp(n);
        for(int i = 0; i < n; i++){
            cin>>arr[i];
            temp[i].first = arr[i];
            temp[i].second = i;
        } 
        
        sort(temp.begin(), temp.end());
        vector<long long> result(n, 0);
        
        // if(n > 1) {
        //     long long mid = (temp[0].first + temp[1].first) / 2;
        //     if((temp[0].first + temp[1].first) % 2 == 0) {
        //         result[0] = mid - temp[0].first;
        //     } else {
        //         result[0] = mid - temp[0].first + 1;
        //     }
        // }
        

        for(int i = 1; i < n-1; i++){
            long long left_mid, right_mid;
            

            if((temp[i].first + temp[i-1].first) % 2 == 0) {
                left_mid = (temp[i].first + temp[i-1].first) / 2 + 1;
            } else {
                left_mid = (temp[i].first + temp[i-1].first) / 2 + 1;
            }
            
            if((temp[i].first + temp[i+1].first) % 2 == 0) {
                right_mid = (temp[i].first + temp[i+1].first) / 2;
            } else {
                right_mid = (temp[i].first + temp[i+1].first) / 2;
            }
            
            result[i] = right_mid - left_mid + 1;
        }
        
        if(n > 1) {
            long long mid = (temp[n-1].first + temp[n-2].first) / 2;
            if((temp[n-1].first + temp[n-2].first) % 2 == 0) {
                result[n-1] = temp[n-1].first - mid;
            } else {
                result[n-1] = temp[n-1].first - mid;
            }
        }
        
        
        
        result[0] = -1;          
        result[n-1] = -1;
            
        vector<long long> final_result(n);
        for(int i = 0; i < n; i++){
            final_result[temp[i].second] = result[i];
        }
        for(int i = 0; i < n; i++){
            cout << final_result[i] << " ";
        }
        cout << endl;
        
    }
    return 0;
}