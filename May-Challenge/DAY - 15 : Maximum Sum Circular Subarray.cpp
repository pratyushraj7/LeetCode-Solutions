class Solution {
public:
    int maxSubarraySumCircular(vector<int>& A) 
    {
        int mini = A[0], sum1 = 0, maxi = A[0], sum2 = 0, sum = 0;
        int n = A.size();

        
        for(int i=0 ; i<n ; i++)
        {
            sum += A[i];
            sum1 = A[i] + max(sum1, 0);
            sum2 = A[i] + min(sum2, 0);
            mini = min(mini, sum2);
            maxi = max(maxi, sum1);
        }
        
        if(maxi > 0)
            return max(maxi, sum - mini);
        return maxi;
    }
};
