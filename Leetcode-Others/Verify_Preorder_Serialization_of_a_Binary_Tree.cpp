//One way to serialize a binary tree is to use pre - order traversal.When we encounter a non - null node, we record the node's value. If it is a null node, we record using a sentinel value such as #.
//
//_9_
/// \
//3     2
/// \ / \
//4   1  #  6
/// \ / \ / \
//# # # #   # #
//For example, the above binary tree can be serialized to the string "9,3,4,#,#,1,#,#,2,#,6,#,#", where # represents a null node.
//
//Given a string of comma separated values, verify whether it is a correct preorder traversal serialization of a binary tree.Find an algorithm without reconstructing the tree.
//
//Each comma separated value in the string must be either an integer or a character '#' representing null pointer.
//
//You may assume that the input format is always valid, for example it could never contain two consecutive commas such as "1,,3".
//
//Example 1:
//"9,3,4,#,#,1,#,#,2,#,6,#,#"
//Return true
//
//Example 2 :
//"1,#"
//Return false
//
//Example 3 :
//"9,#,#,1"
//Return false
#include <stack>
#include <iostream>

using std::stack;
using std::string;
using std::cout;

class Solution {
public:
	bool isValidSerialization(string preorder) {
		stack<char>res;
		int len = preorder.size();
		string sp = ",";

		for (int begin = 0, end = 0; end<len;) {
			while (end<len && sp.find(preorder[end]) != string::npos)++end;
			if (end == len)break;
			begin = end;
			while (end<len && sp.find(preorder[end]) == string::npos)++end;

			string now = preorder.substr(begin, end - begin);
			if (now != "#")res.push('A');
			else res.push('#');

			while (!res.empty() && res.top() == '#') {
				res.pop();
				if (res.empty()) {
					res.push('#');
					break;
				}
				char top = res.top();
				if (top == '#') {
					res.pop();
					if (res.empty())return false;
					res.top() = '#';
				}
				else {
					res.push('#');
					break;
				}
			}
		}

		return res.size() == 1 && res.top() == '#';
	}
};