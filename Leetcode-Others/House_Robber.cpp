/*
You are a professional robber planning to rob houses along a street.Each house has a certain amount of money stashed, 
the only constraint stopping you from robbing each of them is that adjacent houses have security system connected and 
it will automatically contact the police if two adjacent houses were broken into on the same night.
Given a list of non - negative integers representing the amount of money of each house, determine the maximum amount
of money you can rob tonight without alerting the police.
*/

//动态规划转移方程递推关系为maxV[i] = max(maxV[i-2]+num[i], maxV[i-1])
//可能会对上述递推关系产生疑问，是否存在如下可能性，maxV[i - 1]并不含num[i - 1]？
//在这种情况下maxV[i - 1]等同于maxV[i - 2]，因此前者更大。


class Solution {
public:
	int rob(vector<int>& nums) {
		int size = nums.size();
		if (size == 0)
			return 0;
		if (size == 1)
			return nums[0];

		int maxV_2 = nums[0], maxV_1 = max(nums[0], nums[1]);
		int maxV = maxV_1;
		for (int i = 2; i<size; i++) {
			maxV = max(maxV_2 + nums[i], maxV_1);
			maxV_2 = maxV_1;
			maxV_1 = maxV;
		}
		return maxV;
	}
};