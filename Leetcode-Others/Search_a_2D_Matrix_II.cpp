////Write an efficient algorithm that searches for a value in an m x n matrix.This matrix has the following properties :
////Integers in each row are sorted in ascending from left to right.
////Integers in each column are sorted in ascending from top to bottom.
////For example,
////Consider the following matrix :
////[
////	[1, 4, 7, 11, 15],
////	[2, 5, 8, 12, 19],
////	[3, 6, 9, 16, 22],
////	[10, 13, 14, 17, 24],
////	[18, 21, 23, 26, 30]
////]
//
//
//class Solution {
//public:
//	bool searchMatrix(vector<vector<int>>& matrix, int target) {
//		int find = false;
//		int m = matrix.size(), n = matrix[0].size();
//		for (int i = 0; i<m; i++) {
//			if (matrix[i][0] <= target && target <= matrix[i][n - 1]) {
//				find = binSearch(matrix[i], target);
//				if (find == true)break;
//			}
//
//		}
//
//		return find;
//	}
//
//	bool binSearch(vector<int>& v, int target) {
//		int l = 0, r = v.size() - 1;
//		int mid;
//		while (l <= r) {
//			mid = l + ((r - l) / 2);
//			if (v[mid] == target)return true;
//			if (v[mid]>target)r = mid - 1;
//			else l = mid + 1;
//		}
//
//		return false;
//	}
//};