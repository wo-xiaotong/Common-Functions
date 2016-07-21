////Given an array and a value, remove all instances of that value in place and return the new length.
////The order of elements can be changed.It doesn't matter what you leave beyond the new length.
//
//class Solution {
//public:
//	int removeElement(vector<int>& nums, int val) {
//		vector<int>::iterator it;
//		for (it = nums.begin(); it != nums.end();) {
//			if (*it == val)it = nums.erase(it);
//			else ++it;
//		}
//		return nums.size();
//	}
//};