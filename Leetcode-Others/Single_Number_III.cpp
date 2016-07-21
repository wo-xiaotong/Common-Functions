//class Solution {
//public:
//	vector<int> singleNumber(vector<int>& nums) {
//		vector<int>res(2, 0);
//
//		for (int i = 0; i<nums.size(); i++)
//			res[0] ^= nums[i];
//
//		int temp = 1;
//		while ((res[0] & temp) != temp)temp <<= 1;
//
//		res[0] = 0;
//		for (int i = 0; i<nums.size(); i++)
//		if ((temp&nums[i]) == temp)
//			res[0] ^= nums[i];
//		else
//			res[1] ^= nums[i];
//
//		return res;
//	}
//};