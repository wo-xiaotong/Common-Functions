/*
Given two strings s and t, write a function to determine if t is an anagram of s.
For example,
s = "anagram", t = "nagaram", return true.
s = "rat", t = "car", return false.
Note:
You may assume the string contains only lowercase alphabets.
*/

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

class Solution {
public:
	bool isAnagram(string s, string t) {
		sort(s.begin(), s.end());
		sort(t.begin(), t.end());
		return s.compare(t)==0?true:false;
	}
};

int main()
{
	Solution s;
	cout<<s.isAnagram("a", "a");

	return 0;
}