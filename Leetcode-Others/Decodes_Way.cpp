//class Solution
//{
//public:
//	int numDecodings(string s)
//	{
//		int len = s.size();
//
//		vector<int>res(len + 1, 1);
//		if (s[0] == '0' || len == 0)return 0;
//
//		res[0] = res[1] = 1;
//		for (int i = 1; i<len; i++)
//		{
//			int num = (s[i - 1] - '0') * 10 + s[i] - '0';
//
//			if (s[i] == '0' && (s[i - 1]>'2' || s[i - 1]<'1'))return 0;
//			if (num <= 26 && num >= 1)
//			{
//				if (s[i] != '0' && s[i - 1] != '0')res[i + 1] = res[i] + res[i - 1];
//				else res[i + 1] = res[i - 1];
//			}
//			else res[i + 1] = res[i];
//		}
//
//		return res[len];
//	}
//};