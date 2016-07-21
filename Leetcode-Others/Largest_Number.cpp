//class Solution {
//public:
//	string largestNumber(vector<int>& nums) {
//		sort(nums.begin(), nums.end(), compare);
//		string res;
//		for (int i = 0; i<nums.size(); ++i){
//			res += to_string(nums[i]);
//		}
//
//		while (res.size() >= 2 && res[0] == '0')res.erase(res.begin());
//		return res;
//	}
//
//	bool static compare(int a, int b){
//		string sa = to_string(a);
//		string sb = to_string(b);
//
//		if (sa.size() == sb.size())
//			return strcmp(sa.c_str(), sb.c_str())>0 ? true : false;
//		else{
//			string newSa = sa + sb;
//			string newSb = sb + sa;
//			return strcmp(newSa.c_str(), newSb.c_str())>0 ? true : false;
//		}
//	}
//};