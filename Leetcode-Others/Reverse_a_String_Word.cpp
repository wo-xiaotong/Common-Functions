//class Solution
//{
//public:
//	void reverseWords(string &s)
//	{
//		reverse(s.begin(), s.end());
//		int len = s.size();
//
//		string ans;
//		int begin = 0, end = 0;
//		for (; end<len; ++end)
//		{
//			while (end<len && s[end] == ' ')end++;
//			begin = end;
//			while (end<len && s[end] != ' ')end++;
//			if (begin == end)continue;
//			string temp = s.substr(begin, end - begin);
//			reverse(temp.begin(), temp.end());
//			ans = ans + temp + " ";
//		}
//
//		s = ans;
//		if (!s.empty())s.pop_back();
//	}
//};
