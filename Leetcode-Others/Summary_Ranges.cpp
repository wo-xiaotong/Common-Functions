//Given a sorted integer array without duplicates, return the summary of its ranges.
//For example, given [0,1,2,4,5,7], return ["0->2","4->5","7"].
//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//	vector<string> summaryRanges(vector<int>& nums) {
//		vector<string>res;
//		int size = nums.size();
//		if (size == 0)return res;
//
//		string tmp;
//		int begin = 0, end = 0;
//
//		while (true) {
//			while (end != size - 1 && nums[end + 1] == nums[end] + 1)++end;
//
//			if (end == begin)tmp = to_string(nums[end]);
//			else tmp = to_string(nums[begin]) + "->" + to_string(nums[end]);
//			res.push_back(tmp);
//
//			if (end != size - 1)begin = end = end + 1;
//			else break;
//		}
//
//		return res;
//	}
//};
//
//int main()
//{
//    string s="22";
//    cout<<s;
//    return 0;
//}
