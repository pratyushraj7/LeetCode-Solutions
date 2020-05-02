// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) 
    {
        int left = 1;
        while(left < n)
        {
            int mid = left + (n - left)/2;
            bool num = isBadVersion(mid);
            if(num == false)
            {
                left = mid + 1;
            }
            else
            {
                n = mid;
            }
        }
        return left;
    }
};
