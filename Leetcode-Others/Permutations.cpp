////Given a collection of numbers, return all possible permutations.
////
////For example,
////[1, 2, 3] have the following permutations :
////[1, 2, 3], [1, 3, 2], [2, 1, 3], [2, 3, 1], [3, 1, 2], and[3, 2, 1].
//
//class Solution {
//public:
//	vector<vector<int>> permute(vector<int>& nums) {
//		sort(nums.begin(), nums.end());
//		vector<vector<int>>res;
//		do {
//			vector<int>tmp(nums);
//			res.push_back(tmp);
//		} while (next_permutation(nums.begin(), nums.end()));   //����next_permutation֮ǰ��Ҫ���а����ֵ�˳������
//
//		return res;
//	}
//};