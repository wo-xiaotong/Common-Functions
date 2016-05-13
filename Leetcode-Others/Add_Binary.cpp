///*
//Given two binary strings, return their sum(also a binary string).
//For example,
//a = "11"
//b = "1"
//Return "100".
//*/
//
////小数据二进制+-
//class Solution {
//public:
//	string addBinary(string a, string b) {
//		return intToStr(binToInt(a) + binToInt(b));
//	}
//
//	int binToInt(string bin) {
//		int res = 0;
//		int i = 0;
//		while (i++<bin.size()) {
//			res *= 2;
//			res += (bin[i - 1] == '0' ? 0 : 1);
//		}
//		cout << res << endl;
//		return res;
//	}
//
//	string intToStr(int val) {
//		if (val == 0)return "0";
//		string res;
//		while (val) {
//			res += (val % 2 + '0');
//			val /= 2;
//		}
//		reverse(res.begin(), res.end());
//		cout << res << endl;
//		return res;
//	}
//};
//
////用string处理加减
//class Solution1 {
//public:
//	string addBinary(string a, string b) {
//		while (b.size()<a.size())b.insert(b.begin(), '0');
//		while (a.size()<b.size())a.insert(a.begin(), '0');
//
//		int size = a.size(), carry = 0;
//		string val;
//		for (int i = size - 1; i >= 0; i--) {
//			if (a[i] == '0' && b[i] == '0') {
//				val += (carry + '0');
//				carry = 0;
//			}
//			else if ((a[i] == '0'&&b[i] == '1') || (a[i] == '1' && b[i] == '0')) {
//				val += (carry == 0 ? '1' : '0');
//			}
//			else {
//				val += (carry + '0');
//				carry = 1;
//			}
//		}
//
//		if (carry == 1)val += '1';
//		reverse(val.begin(), val.end());
//
//		return val;
//	}
//};