////invert a roman number to integer
///*
//��ǰ����ɨ�裬��һ����ʱ������¼�ֶ����֡�
//�����ǰ������ַ���Ӧ��ֵ����һ���ַ�һ������ô��ʱ������������ַ�������III = 3
//�����ǰ��ǰһ����˵����һ�ε�ֵӦ���ǵ�ǰ���ֵ��ȥǰ���¼�µ���ʱ�����е�ֵ������IIV = 5 �C 2
//�����ǰ��ǰһ��С����ô�Ϳ����Ƚ���ʱ������ֵ�ӵ�����У�Ȼ��ʼ��һ�μ�¼������VI = 5 + 1
//*/
//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//	int romanToInt(string s) {
//		if (s.length() < 1)return 0;
//		int result = 0;
//		
//		int curValue, lastValue;
//		for (int i = s.length()-1; i >= 0; i--) {
//			curValue = getRomanValue(s[i]);
//			if (i == s.length() - 1) {
//				result += curValue;
//				lastValue = curValue;
//				continue;
//			}
//			if (curValue>=lastValue)
//				result += curValue;
//			else
//				result -= curValue;
//
//			lastValue = curValue;
//		}
//
//		return result;
//	}
//
//	int getRomanValue(char c) {
//		switch (c) {
//		case 'I': return 1;
//		case 'V': return 5;
//		case 'X': return 10;
//		case 'L': return 50;
//		case 'C': return 100;
//		case 'D': return 500;
//		case 'M': return 1000;
//		default: return 0;
//		}
//	}
//};
//
//int main()
//{
//	Solution s;
//	cout<<s.romanToInt("XX");
//	return 0;
//}
