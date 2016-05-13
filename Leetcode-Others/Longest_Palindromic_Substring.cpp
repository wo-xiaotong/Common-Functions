//class Solution {
//public:
//	string longestPalindrome(string s) {
//		int n = s.size();
//		int longestBegin = 0;
//		int maxLen = 1;
//		bool table[100][100] = {false};
//
//		for (int i = 0; i < n; i++) {
//			table[i][i] = true;
//		}
//
//		for (int i = 0; i < n-1; i++) {
//			if (s[i] == s[i + 1]) {
//				table[i][i + 1] = true;
//				longestBegin = i;
//				maxLen = 2;
//			}
//		}
//
//		for (int len = 3; len <= n; len++) {
//			for (int i = 0; i < n-len+1; i++) {
//				int j = i + len - 1;
//				if (s[i] == s[j] && table[i + 1][j - 1]) {
//					table[i + 1][j - 1] = true;
//					longestBegin = i;
//					maxLen = len;
//				}
//			}
//		}
//
//		return s.substr(longestBegin, maxLen);
//	}
//
//	//遍历每个字符，向两边扩展，得到最大值
//	string longestPalindrome2(string s) {
//		return "";
//	}
//};
