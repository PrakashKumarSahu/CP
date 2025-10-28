// //initiate with false;
// //i wnat to find the chars in string then as soon as i find it  then true;
// //then i will proceed if i found any of the wanted char in processing chars then false;


#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string s,w;
        cin>>s>>w;
        unordered_set<char> wanted(w.begin(), w.end());
        unordered_set<char> temp;
        int j = 0;
        bool found = false;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == w[j] && !found){
                j++;
                temp.insert(s[i]);
                if(j == w.size()){
                    found = true;
                }
            }else if(!found){
                if(temp.count(s[i])){
                    found = false;
                }    break;
            }
            else{
                if(wanted.count(s[i]) && found){
                    found = false;
                    break;
                }

                //i want to check if any char of w is present in s after found is true
                
            }
        }
        cout<<(found ? "YES\n" : "NO\n");
    }
}

//Upper solution fails AAABC ABC
//Corrected code below
//

#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long test;
	cin >> test;
	while (test--)
	{
		string s, t;
		cin >> s >> t;

		// Get the lengths of the initial word s and the target word t
		int n = s.size();
		int m = t.size();

		// Create a frequency vector to count occurrences of each letter in t
		vector<int> frequency_in_t(26, 0);
		for (int i = 0; i < m; i++) // Iterate over each character in t
			frequency_in_t[t[i] - 'A']++;

		// Traverse the initial word s from the end to the beginning
		for (int i = n - 1; i >= 0; i--) // Iterate over each character in s
		{
			// If the character in s is needed in t, decrement its count
			if (frequency_in_t[s[i] - 'A'] > 0)
				frequency_in_t[s[i] - 'A']--;
			else
				// Otherwise, mark it as removed by setting it to '.'
				s[i] = '.';
		}

		// Construct the final string by excluding marked characters
		string final_string = "";
		for (int i = 0; i < n; i++) // Iterate over each character in s
		{
			if (s[i] != '.')
				final_string += s[i];
		}

		// Check if the constructed final string matches the target word t
		if (final_string == t) // Compare the final string with t
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}

// Time Complexity (TC): O(n+m) = O(30)
// Space Complexity (SC): O(n+m+26+m) = O(n+m) = O(30)
