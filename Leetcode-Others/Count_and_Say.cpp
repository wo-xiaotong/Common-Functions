////The count - and - say sequence is the sequence of integers beginning as follows :
////1, 11, 21, 1211, 111221, ...
////1 is read off as "one 1" or 11.
////11 is read off as "two 1s" or 21.
////21 is read off as "one 2, then one 1" or 1211.
////Given an integer n, generate the nth sequence.
//
//
//class Solution {
//public:
//	string countAndSay(int n) {
//		string last = "1", now;
//		if (n == 0)return now;
//		if (n == 1)return last;
//
//		int begin, end, count;
//		while (n-->1) {
//			count = 0;
//			now = "";
//			for (begin = 0, end = 0; end<last.size();) {
//				while (end < last.size() && last[begin] == last[end]) {
//					++count;
//					++end;
//				}
//				now = now + to_string(count) + last[begin];
//				begin = end;
//				count = 0;
//			}
//			last = now;
//		}
//
//		return now;
//	}
//};
