//class Solution {
//public:
//	int getMoneyAmount(int n) {
//		vector<vector<int>>arr(n + 1, vector<int>(n + 1, 0));
//		return setVV(arr, 1, n);
//	}
//private:
//	int setVV(vector<vector<int>>&arr, int begin, int end){
//		if (begin == end)return 0;
//		if (begin + 1 == end)return begin;
//		int maxV = INT_MAX;
//		for (int i = begin + (end - begin) / 2; i + 1 <= end; i++){
//			if (arr[begin][i - 1] == 0) arr[begin][i - 1] = setVV(arr, begin, i - 1);
//			if (arr[i + 1][end] == 0) arr[i + 1][end] = setVV(arr, i + 1, end);
//			int thisMax = max(i + arr[begin][i - 1], i + arr[i + 1][end]);
//			maxV = min(maxV, thisMax);
//		}
//		arr[begin][end] = maxV;
//		return maxV;
//	}
//};