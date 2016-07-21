//class Solution {
//public:
//	int hIndex(vector<int>& citations) {
//		sort(citations.begin(), citations.end());
//		int size = citations.size();
//		int res = 0;
//		for (int i = 0; i<size; i++) {
//			int h = size - i;
//			if (h <= citations[i]) {
//				res = h;
//				break;
//			}
//		}
//
//		return res;
//	}
//};