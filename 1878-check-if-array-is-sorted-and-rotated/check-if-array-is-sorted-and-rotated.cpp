class Solution {
public:
    bool check(vector<int>& nums) {
        int n=  nums.size();
        int ct = 0; 
        for ( int i = 0 ; i< n; i++  ){
            if( nums[i]> nums[(i+1)% n]){ 
                ct ++; 
            }

        } 
        if (ct <= 1 ) { 
            return true ; 

        } 
        else { 
            return false ; 
        }
    }
};