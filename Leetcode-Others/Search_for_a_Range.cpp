////iven a sorted array of integers, find the starting and ending position of a given target value.
////
////Your algorithm's runtime complexity must be in the order of O(log n).
////
////If the target is not found in the array, return [-1, -1].
////
////For example,
////Given [5, 7, 7, 8, 8, 10] and target value 8,
////return [3, 4].
//
//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    vector<int> searchRange(vector<int>& nums, int target) {
//        vector<int>res;
//        res.push_back(-1);
//        res.push_back(-1);
//        int left=0,right=nums.size()-1;
//        int mid;
//        while(left<=right){
//            mid=(left+right)/2;
//            if(nums[mid]==target){
//                left=right=mid;
//                while(nums[--left]==target);
//                while(nums[++right]==target);
//                res[0]=left+1;
//                res[1]=right-1;
//                break;
//            }
//            if(nums[mid]<target)left=mid+1;
//            else right=mid-1;
//        }
//        return res;
//    }
//
//    vector<int> searchRange2(vector<int>& nums, int target) {
//        vector<int>res;
//        res.push_back(-1);
//        res.push_back(-1);
//        int left=0,right=nums.size()-1;
//        int mid;
//        while(left<=right){
//            mid=(left+right)/2;
//            if(nums[mid]==target){
//                left=right=mid;
//                while(nums[left]==target)left--;
//                while(nums[right]==target)right++;
//                if(left<0)left=0;
//                else left+=1;
//                if(right>=nums.size())right=nums.size()-1;
//                else right-=1;
//                res[0]=left;
//                res[1]=right;
//
//                cout<<left<<right<<endl;
//                break;
//            }
//            if(nums[mid]<target)left=mid+1;
//            else right=mid-1;
//        }
//        return res;
//    }
//};
//
//int main()
//{
//    Solution s;
//    vector<int>v;
//    v.push_back(0);
//    v.push_back(0);
//    v.push_back(0);
//    v.push_back(1);
//    v.push_back(2);
//    v.push_back(3);
//    s.searchRange2(v,0);
//    return 0;
//}
