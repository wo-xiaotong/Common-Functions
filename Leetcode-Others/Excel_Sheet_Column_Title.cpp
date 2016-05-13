//Given a positive integer, return its corresponding column title as appear in an Excel sheet.
//For example:
//
//    1 -> A
//    2 -> B
//    3 -> C
//    ...
//    26 -> Z
//    27 -> AA
//    28 -> AB

#include<iostream>
#include<algorithm>
using namespace std;

class Solution {
public:
    string convertToTitle(int n) {
        string Title="";
        int t;
        while(n)
        {
            t=n%26;
            if(t==0)
            {
                Title+='Z';
                t=26;
            }
            else
            {
                Title+=(t-1+'A');
            }
            n=n-t;
            n/=26;
        }

        reverse(Title.begin(),Title.end());
        return Title;
    }
};
int main()
{
    Solution s;
    cout<<s.convertToTitle(1222);
    return 0;
}
