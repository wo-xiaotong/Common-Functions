////通过前序和中序构建后续遍历二叉树
//
//class Solution {
//public:
//	string buildPost(string pre, string in){
//		string res;
//		int size = pre.size();
//		const char *cPre = pre.c_str();
//		const char *cIn = in.c_str();
//
//		build(size, cPre, cIn, res);
//
//		return res;
//	}
//private:
//	void build(int n, const char* cPre, const char* cIn, string& res){
//		if (n <= 0)return;
//		int p = strchr(cIn, *cPre) - cIn;
//		build(p, cPre + 1, cIn, res);
//		build(n - p - 1, cPre + p + 1, cIn + p + 1, res);
//		res += *cPre;
//	}
//};