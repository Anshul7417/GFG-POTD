//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string removeKdigits(string num, int k) {
        string digit_stack="";
        
        for(char &ch:num){
            while(digit_stack.size() and digit_stack.back()>ch and k){
                digit_stack.pop_back();
                k--;
            }
            if(digit_stack.size() or ch!='0')
                digit_stack.push_back(ch);
        }
        
        while(digit_stack.size()  and k--)
            digit_stack.pop_back();
        
        if(digit_stack=="")
            return "0";
        
        return digit_stack;
    }

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        int K;
        cin >> K;
        Solution obj;
        cout << obj.removeKdigits(S, K) << endl;
    }
    return 0;
}

// } Driver Code Ends