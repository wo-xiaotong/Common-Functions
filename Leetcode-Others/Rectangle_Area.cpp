//class Solution {
//public:
//	int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
//		int area = (D - B)*(C - A) + (H - F)*(G - E);            //假设两者不相交的全部面积
//		if (A >= G || B >= H || C <= E || D <= F)return area;
//
//		//相交之后相交的部分，上下左右
//		int top = min(D, H);
//		int bottom = max(B, F);
//		int left = max(A, E);
//		int right = min(C, G);
//
//		return area - (top - bottom)*(right - left);
//
//	}
//};