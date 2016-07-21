//
//class Solution {
//public:
//	vector<vector<int>> subsetsWithDup(vector<int>& nums) {
//		vector<vector<int>>res;
//		int len = nums.size();
//		int up = 1 << len;
//
//		int begin = 0;
//		while (begin < up) {
//			int offset = 0;
//			vector<int>now;
//			while (offset < len) {
//				if ((begin&(1 << offset)) != 0)now.push_back(nums[offset]);
//				++offset;
//			}
//			++begin;
//
//			if (hasVector(res, now) == false)res.push_back(now);
//		}
//
//		return res;
//	}
//
//	bool hasVector(vector<vector<int>>&vv, vector<int>&v) {
//		bool ret = false;
//		for (vector<int> now : vv) {
//			if (now.size() != v.size())continue;
//			sort(now.begin(), now.end());
//			sort(v.begin(), v.end());
//			int i = 0;
//			for (i = 0; i < v.size(); i++)
//			if (v[i] != now[i])break;
//			if (i == v.size())return true;
//		}
//		return ret;
//	}
//};
