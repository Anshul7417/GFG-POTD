class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        unordered_map<int, int> mp;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            
            
            if(sum==0 || arr[i]==0  ||  mp[sum]) return true;
            mp[sum]++;
            
        }
        
        return false;
    }
};