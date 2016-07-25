//cout << Solution().multiply("60596603068309117326156554571597748508937989890734549217896065950802895715617890546669370", "765815848755463380392830529892888662358143900430499874826937");
//
//
class Solution {
public:
	string multiply(string num1, string num2) {
		int len1 = num1.size(), len2 = num2.size();
		if (len1 == 1 || len2 == 1){
			if (len1 + len2 >= 6){
				if (len1 == 1){
					string c = num2.substr(0, len2 / 2), d = num2.substr(len2 / 2, len2 - len2 / 2);
					return add2str(multiply(num1, c) + string(len2 - len2 / 2, '0'), multiply(num1, d));
				}
				else{
					string a = num1.substr(0, len1 / 2), b = num1.substr(len1 / 2, len1 - len1 / 2);
					return add2str(multiply(num2, a) + string(len1 - len1 / 2, '0'), multiply(num2, b));
				}
			}
			return to_string(atoi(num1.c_str())*atoi(num2.c_str()));
		}

		string a = num1.substr(0, len1 / 2), b = num1.substr(len1 / 2, len1 - len1 / 2);
		string c = num2.substr(0, len2 / 2), d = num2.substr(len2 / 2, len2 - len2 / 2);

		string ac = multiply(a, c) + string(len1 + len2 - len1 / 2 - len2 / 2, '0');
		string ad = multiply(a, d) + string(len1 - len1 / 2, '0');
		string bc = multiply(b, c) + string(len2 - len2 / 2, '0');
		string bd = multiply(b, d);

		return add2str(add2str(ac, ad), add2str(bc, bd));
	}

	string add2str(string num1, string num2){
		int l1 = num1.size(), l2 = num2.size();
		if (l1 > l2)num2 = string(l1 - l2, '0') + num2;
		if (l1 < l2)num1 = string(l2 - l1, '0') + num1;

		int carry = 0;
		string ret;
		for (int i = num1.size() - 1; i >= 0; i--){
			int now = (num1[i] - '0') + (num2[i] - '0') + carry;
			if (now >= 10){
				carry = 1;
				now = now - 10;
			}
			else carry = 0;
			ret.insert(ret.begin(), now + '0');
		}
		ret = carry ? "1" + ret : ret;
		if (all_of(ret.begin(), ret.end(), [](int x){return x == '0'; }) == true)ret = "0";
		return ret;
	}
};