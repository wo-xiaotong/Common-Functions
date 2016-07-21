//class Solution {
//public:
//	int maxArea(vector<int>& height) {
//		int tmpArea = 0, maxArea = 0;
//		int left = 0, right = height.size() - 1;
//
//		while (left<right){
//			tmpArea = min(height[left], height[right])*(right - left);
//			if (maxArea<tmpArea)maxArea = tmpArea;
//
//			if (height[left]>height[right])
//				--right;
//			else
//				++left;
//		}
//
//		return maxArea;
//	}
//};