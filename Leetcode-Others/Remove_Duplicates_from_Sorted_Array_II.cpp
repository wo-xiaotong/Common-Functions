////For example,
////Given sorted array nums = [1, 1, 1, 2, 2, 3],
////
////Your function should return length = 5, with the first five elements of nums being 1, 1, 2, 2 and 3. It doesn't matter what you leave beyond the new length.
//
//class Solution {
//public:
//	int removeDuplicates(vector<int>& nums) {
//		int thisCnt = 0;
//		for (vector<int>::iterator begin = nums.begin(), end = nums.begin(); end != nums.end();) {
//			if (*begin == *end) {
//				++thisCnt;
//				if (thisCnt >= 3) {
//					end = nums.erase(end);
//					thisCnt--;
//					continue;
//				}
//			}
//			else {
//				thisCnt = 0;
//				begin = end;
//				continue;
//			}
//			++end;
//		}
//
//		return nums.size();
//	}
//};