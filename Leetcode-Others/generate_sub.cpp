//class Solution {
//public:
//	//生成子序列
//	void printSub(int n, int *A, int cur) {
//		for (int i = 0; i < cur; i++) {
//			cout << A[i];
//		}
//		if (cur != 0)cout << endl;
//		int s = cur ? A[cur - 1] + 1 : 0;
//		for (int i = s; i < n; i++) {
//			A[cur] = i;
//			printSub(n, A, cur + 1);
//		}
//	}
//};