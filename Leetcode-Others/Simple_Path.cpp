//class Solution
//{
//public:
//	string simplifyPath(string path)
//	{
//		stack<string>res;
//		char* p = strtok((char*)path.c_str(), "/");
//		while (p != NULL)
//		{
//			string temp(p);
//			if (temp == ".." && !res.empty())res.pop();
//			if (temp != "." && temp != "..")res.push(temp);
//			p = strtok(NULL, "/");
//		}
//
//		string ret;
//		while (!res.empty())
//		{
//			ret = res.top() + "/" + ret;
//			res.pop();
//		}
//
//		ret = "/" + ret;
//		if (ret.size()>1)ret.pop_back();
//		return ret;
//	}
//};