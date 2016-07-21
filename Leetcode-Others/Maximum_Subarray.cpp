////Find the contiguous subarray within an array (containing at least one number) which has the largest sum.
////For example, given the array [−2,1,−3,4,−1,2,1,−5,4],
////the contiguous subarray [4,−1,2,1] has the largest sum = 6.
//
//class Solution {
//public:
//    int maxSubArray(vector<int>& nums) {
//        int max=-100000;
//        int temp=0;
//        int size=nums.size();
//        for(int i=0;i<size;i++){
//            temp=temp+nums[i];
//            if(temp>max)max=temp;
//            if(temp<0)temp=0;
//        }
//
//        return max;
//    }
//};
