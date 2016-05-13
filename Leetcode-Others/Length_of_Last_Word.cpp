//Given a string s consists of upper/lower-case alphabets and empty space characters ' ',
// return the length of last word in the string.
//If the last word does not exist, return 0.
//Note: A word is defined as a character sequence consists of non-space characters only.
//For example,
//Given s = "Hello World",
//return 5.
#include<iostream>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int length=0;
        int size=s.size();
        bool lastWord=true;

        for(int i=size-1;i>=0;i--){
                if(s[i]==' '){
                    if(lastWord);
                    else break;
                }else {
                    length++;
                    lastWord=false;
                }
        }

        return length;
    }
};

int main()
{
    Solution s;
    cout<<s.lengthOfLastWord(" ddd");

    return 0;
}
