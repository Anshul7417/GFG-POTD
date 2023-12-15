class Solution{
	public:
		int nthPoint(int n){
		    int prevTerm = 0, currentTerm = 1;
		    
		    
		    for(int i=1;i<=n;i++){
		        int temp = currentTerm;
		        currentTerm = (prevTerm + currentTerm)%(1000000007);
		        prevTerm=temp;
		    }
		    
		    
		    return currentTerm;
		}
};