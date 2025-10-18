#include<iostream>
// #include<stack>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;

        // int w = n,l = 0,count = 1;
        
        // while(w != 1 ){
        //     w /= 2;
        //     count++;
        // }
        //seeing test case we can see the pattern
        //for n = 2 -> 2; +2
        //for n = 3 -> 4; +2
        //for n = 4 -> 6; +2
        //for n = 5 -> 8; +2
        //it is linearly increasing by +2 for each n
        // so we can form lin equation like ax + b = y
        // using test case
        // we find a=2 and b=-2
        // so the equation becomes 2n - 2 = y;-
        return 2*n-2;
    }
}