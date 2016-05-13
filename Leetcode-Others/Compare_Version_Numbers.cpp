/*
Compare two version numbers version1 and version2.
If version1 > version2 return 1, if version1 < version2 return -1, otherwise return 0.

You may assume that the version strings are non-empty and contain only digits and the . character.
The . character does not represent a decimal point and is used to separate number sequences.
For instance, 2.5 is not "two and a half" or "half way to version three", it is the fifth second-level revision of the second first-level revision.

Here is an example of version numbers ordering:

0.1 < 1.1 < 1.2 < 13.37
*/

class Solution {
public:
	int compareVersion(string version1, string version2) {
		int size1 = version1.size();
		int size2 = version2.size();

		int i = 0, j = 0;
		int tmp1, tmp2;
		while (i<size1 || j<size2) {    //用||运算符表示两者之中有一项没结束 即接着比较 排除1.1 和 1 
			tmp1 = tmp2 = 0;
			while (i<size1 && version1[i] != '.') {
				tmp1 *= 10;
				tmp1 += (version1[i++] - '0');
			}
			while (j<size2 && version2[j] != '.') {
				tmp2 *= 10;
				tmp2 += (version2[j++] - '0');
			}
			if (tmp1>tmp2)return 1;
			if (tmp1<tmp2)return -1;

			++i;
			++j;
		}

		return 0;
	}
};