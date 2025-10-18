#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<int> arr(n);
        int min = INT_MAX;
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            if(arr[i] < min){
                min = arr[i];
            }
        }

        
        bool allEqual = true;
        for(int i = 1; i < n; i++) {
            if(arr[i] != arr[0]) {
                allEqual = false;
                break;
            }
        }
        if(allEqual) {
            cout << -1 << endl;
            continue;
        }

        vector<int> b;
        vector<int> c;

        for(int i = 0; i < n; i++){
            // if(arr[i] == 1) 
            //     b.push_back(arr[i]);
            // else 
            if(arr[i] == min) 
                b.push_back(arr[i]);
            else 
                c.push_back(arr[i]);
        }

        if(!(b.size() && c.size())){
            cout << -1 << endl;
            continue;
        }
        else{
            cout << b.size() << " " << c.size() << endl;
            for(int i = 0; i < b.size(); i++){
                cout << b[i] << " ";
            }
            cout << endl;
            for(int i = 0; i < c.size(); i++){
                cout << c[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
