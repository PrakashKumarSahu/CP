#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long n;
		cin >> n; 
		vector<long long> a(n);
		for (long long i = 0; i < n; i++) 
			cin >> a[i];

		vector<pair<long long, long long>> building_map;
		for (int i = 0; i < n; i++)
			building_map.push_back({a[i], i});

		sort(building_map.rbegin(), building_map.rend());


		vector<long long> ans(n + 1, 0);

		ans[0] = 0;

		long long minutes = 0; 
		long long coordinate = 1; 
		for (int i = 0; i < n; i++)
		{
			ans[building_map[i].second + 1] = coordinate;
			minutes += (2 * abs(coordinate) * building_map[i].first);
			if (coordinate < 0)
				coordinate = abs(coordinate) + 1;
			else
				coordinate = -coordinate;
		}

		cout << minutes << endl;
		for (auto it : ans)
			cout << it << " ";
		cout << endl;
	}
}























// #include<bits/stdc++.h>
// using namespace std;

// #define ll long long

// int main(){
//     int t;
//     cin>>t;

//     while(t--){
//         ll n;
//         cin>>n;

//         vector<ll> arr(n);
//         for(int i = 0; i < n; i++) cin>>arr[i];


//         vector<pair<ll,ll>> valPos(n);
//         for(int i = 0; i < n; i++) {
//             valPos[i].first = arr[i];
//             valPos[i].second = i;
//         }

//         sort(valPos.begin(),valPos.end());

//         //if n is even centre is x0;
//         vector<pair<ll,ll>> x;
        
//         x.push_back({-1,-1});
//         bool val = true;
//         for(auto it : valPos){
//             if(val) {
//                 x.push_back(it);
//                 val = false;
//             }
//             else{
//                  x.emplace(x.begin(),it);
//                  val = true;
//             }
           
//         }

//         //sorting in the order of i want
//         sort(valPos.begin(), valPos.end(), 
//             [](const pair<int,int> &a, const pair<int,int> &b) {
//             return a.second < b.second;
//         });


//         vector<ll> pos(n+1);
//         ll basePos = 0;
//         for(int i = 0; i < n+1; i++){
//             if(x[i].first == -1) {
//                 basePos = i;
//             }
//         }

                
        

        

        

        
//     }
// }