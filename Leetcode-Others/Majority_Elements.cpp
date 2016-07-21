////Given an array of size n, find the majority element. The majority element is the element that
////appears more than n/2  times.
////
////You may assume that the array is non-empty and the majority element always exist in the array.
//
//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    int majorityElement(vector<int>& nums) {
//        int major=nums[0];
//        int times=1;
//        int size=nums.size();
//
//        for(int j=1;j<size;j++){
//            if(nums[j]==major)times++;
//            else{
//                times--;
//                if(times<=0){
//                    major=nums[j];
//                    times=1;
//                }
//            }
//        }
//
//       return major;
//    }
//};
//int main()
//{
//
//
//    return 0;
//}
