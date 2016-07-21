////Given an array nums, write a function to move all 0's to the end of it
////while maintaining the relative order of the non-zero elements.
////For example, given nums = [0, 1, 0, 3, 12], after calling your function, nums should be[1, 3, 12, 0, 0].
//
//class Solution {
//public:
//	void moveZeroes(vector<int>& nums) {
//		int idx0 = 0, idx1 = 0;
//		int n = nums.size();
//		while (idx0<n && idx1<n) {
//			while (idx0<n && nums[idx0] == 0)++idx0;
//			while (idx1<n && nums[idx1] != 0)++idx1;
//			if (idx0>idx1 && idx0<n)swap(nums[idx0], nums[idx1]);
//			++idx0;
//		}
//	}
//};