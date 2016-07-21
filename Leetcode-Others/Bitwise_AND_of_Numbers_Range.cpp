//class Solution {
//public:
//	int rangeBitwiseAnd(int m, int n) {
//		int bitSame = 0;
//		while (m != n){
//			m >>= 1;
//			n >>= 1;
//			bitSame++;
//		}
//
//		return n << bitSame;
//	}
//};