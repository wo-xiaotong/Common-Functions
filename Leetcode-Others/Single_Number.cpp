////Given an array of integers, every element appears twice except for one. Find that single one.
//
//class Solution {
//public:
//    int singleNumber(vector<int>& nums) {
//        int size=nums.size();
//        int res=0;
//        for(int i=0;i<size;i++)
//            res=res^nums[i];
//
//        return res;
//    }
//};
