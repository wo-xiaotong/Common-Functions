//class Solution {
//public:
//	string numberToWords(int num) {
//		initMap();  //init the num to word map
//
//		if (num == 0)return "Zero";
//		string res;
//		int tmp;
//		if (num >= billion){
//			tmp = num / billion;
//			res = res + sayWord(tmp) + num2Str[billion];
//			num = num % billion;
//		}
//		if (num >= million){
//			tmp = num / million;
//			if (res.size() > 0)res += " ";
//			res = res + sayWord(tmp) + num2Str[million];
//			num = num % million;
//		}
//		if (num >= thousand){
//			tmp = num / thousand;
//			if (res.size() > 0)res += " ";
//			res = res + sayWord(tmp) + num2Str[thousand];
//			num = num % thousand;
//		}
//		if (num != zero){
//			if (res.size() > 0)res += " ";
//			res = res + sayWord(num);
//		}
//
//		if (*(res.end() - 1) == ' ')res.erase(res.end() - 1);
//		return res;
//	}
//
//	string sayWord(int n){
//		string s;
//		int h = n / 100;
//		if (h != 0)s += num2Str[h] + " " + num2Str[100] + " ";
//		int m = n % 100;
//		if (m != 0){
//			if (m > 20){
//				s = s + num2Str[m - m % 10] + " ";
//				if (m % 10 != 0)s = s + num2Str[m % 10] + " ";
//			}
//			else{
//				s = s + num2Str[m] + " ";
//			}
//		}
//
//		return s;
//	}
//
//	void initMap(){
//		num2Str[1] = "One"; num2Str[2] = "Two"; num2Str[3] = "Three"; num2Str[4] = "Four";
//		num2Str[5] = "Five"; num2Str[6] = "Six"; num2Str[7] = "Seven";	num2Str[8] = "Eight";
//		num2Str[9] = "Nine"; num2Str[10] = "Ten";
//		num2Str[11] = "Eleven"; num2Str[12] = "Twelve"; num2Str[13] = "Thirteen"; num2Str[14] = "Fourteen";
//		num2Str[15] = "Fifteen"; num2Str[16] = "Sixteen"; num2Str[17] = "Seventeen";	num2Str[18] = "Eighteen";
//		num2Str[19] = "Nineteen"; num2Str[20] = "Twenty";
//
//		num2Str[30] = "Thirty"; num2Str[40] = "Forty"; num2Str[50] = "Fifty"; num2Str[60] = "Sixty";
//		num2Str[70] = "Seventy"; num2Str[80] = "Eighty"; num2Str[90] = "Ninety"; num2Str[100] = "Hundred";
//
//		num2Str[1000] = "Thousand"; num2Str[1000000] = "Million"; num2Str[1000000000] = "Billion";
//	}
//
//private:
//	map<int, string>num2Str;
//	int zero = 0;
//	int thousand = 1000;
//	int million = 1000000;
//	int billion = 1000000000;
//};
