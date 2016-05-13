/*Isomorphic Strings
Given two strings s and t, determine if they are isomorphic.
Two strings are isomorphic if the characters in s can be replaced to get t.
All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character but a character may map to itself.
For example,
Given "egg", "add", return true.
Given "foo", "bar", return false.
Given "paper", "title", return true.
Note:
You may assume both s and t have the same length.
*/

#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        bool isIsomorphic=true;
        int size=s.size();
        int temp_s,temp_t;
        for(int i=0;i<size;i++){
            temp_s=s.find_first_of(s[i],i+1);
            temp_t=t.find_first_of(t[i],i+1);

            while(temp_s!=string::npos||temp_t!=string::npos){
                if(temp_s!=temp_t){
                    isIsomorphic=false;
                    break;
                }
            temp_s=s.find_first_of(s[i],temp_s+1);
            temp_t=t.find_first_of(t[i],temp_t+1);
            }
        }

        return isIsomorphic;
    }
};

int main()
{
    Solution s;
    cout<<s.isIsomorphic("ab","aa");
    cout<<s.isIsomorphic("egg","add");
    cout<<s.isIsomorphic("foo","bar");
    cout<<s.isIsomorphic("paper","title");

    return 0;
}
