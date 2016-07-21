////Write a function to find the longest common prefix string amongst an array of strings.
//#include<iostream>
//#include<string>
//using namespace std;
//
//class Solution {
//public:
//    string longestCommonPrefix(vector<string>& strs) {
//        string prefix="";
//        if(strs.size()==0)return prefix;
//        if(strs.size()==1)return strs[0];
//
//        for(int i=0;i<strs[0].size()&&i<strs[1].size();i++){
//            if(strs[0][i]==strs[1][i])prefix+=strs[0][i];
//            else break;
//        }
//
//        for(int size=2;size<strs.size();size++){
//                if(strs[size].empty())return "";
//                string temp="";
//                for(int i=0;i<strs[size].size()&&prefix.size();i++){
//                if(strs[size][i]==prefix[i])temp+=prefix[i];
//                else break;
//            }
//            prefix=temp;
//        }
//
//        return prefix;
//
//    }
//};
//
//int main()
//{
//
//    return 0;
//}
