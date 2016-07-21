////Given an array of n integers where n > 1, nums, return an array output such that output[i] is equal to the product of all the elements of nums except nums[i].
////Solve it without division and in O(n).
////For example, given[1, 2, 3, 4], return[24, 12, 8, 6].
//
//class Solution {
//public:
//	vector<int> productExceptSelf(vector<int>& nums) {
//		int val = 1;
//		for (int i = 0; i<nums.size(); i++)
//			val *= nums[i];
//
//		vector<int>output;
//		for (int i = 0; i<nums.size(); i++)
//		if (nums[i] != 0)output.push_back(val / nums[i]);
//		else {
//			int tmp = 1;
//			for (int j = 0; j<nums.size(); j++)      //主要是要考虑出现0的情况
//			if (j != i)tmp *= nums[j];
//			output.push_back(tmp);
//		}
//
//		return output;
//	}
//};