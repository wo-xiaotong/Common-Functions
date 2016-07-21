////judge a  integer is power of 2
//
//class Solution {
//public:
//	bool isPowerOfTwo(int n) {
//		if (n<0)return false;
//		int count = 0;
//		while (n&&++count)n = n&(n - 1);
//		return count == 1;                   //判断2进制中1的个数是否是1
//	}
//};