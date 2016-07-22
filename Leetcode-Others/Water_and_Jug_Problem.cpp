//class Solution {
//public:
//	bool canMeasureWater(int x, int y, int z) {
//		if (x + y<z)return false;
//
//		int big = max(x, y);
//		int small = x + y - big;
//		if (small == 0)return z == big || z == 0;
//
//		int m = big%small;
//		while (m != 0){
//			big = small;
//			small = m;
//			m = big%small;
//		}
//
//		return z%small == 0;
//	}
//};