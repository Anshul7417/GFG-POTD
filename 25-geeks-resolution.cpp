//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
    
    public:
    int isPossible(int N , int coins[]) 
    {
        set<int> sums;
        sums.insert(0);

        for (int i = 0; i < N; ++i) {
            set<int> ss = sums;
            for (auto it : ss) {
                int t = it + coins[i];
                if (t % 20 == 0 || t % 24 == 0)
                    return 1;
                sums.insert(it + coins[i]);
            }
        }
        return sums.find(2024) != sums.end();
    }
    
};




//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int coins[N];
        for(int i=0 ; i<N ; i++)
            cin>>coins[i];

        Solution ob;
        cout << ob.isPossible(N,coins) << endl;
    }
    return 0;
}
// } Driver Code Ends