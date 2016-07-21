///*
//Given an array of integers and an integer k, find out whether there are two distinct
//indices i and j in the array such that nums[i] = nums[j] and the difference between i and j is at most k.
//*/
//
//class Solution {
//public:
//	bool containsNearbyDuplicate(vector<int>& nums, int k) {
//		unordered_map<int, int>dup;
//		for (int i = 0; i < nums.size(); i++) {
//			if (dup.find(nums[i]) != dup.end() && i - (*dup.find(nums[i])).second <= k)
//				return true;
//			dup[nums[i]] = i;
//		}
//		return false;
//	}
//};
