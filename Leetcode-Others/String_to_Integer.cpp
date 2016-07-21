////mplement atoi to convert a string to an integer.
////Hint: Carefully consider all possible input cases. If you want a challenge,
////please do not see below and ask yourself what are the possible input cases.
////Notes: It is intended for this problem to be specified vaguely
////(ie, no given input specs). You are responsible to gather all the input requirements up front.
//
//#include<iostream>
//#include<cstdlib>
//#include<cctype>
//using namespace std;
//
//class Solution {
//public:
//    //atoi()
//    int myAtoi(string str) {
//        if(str.empty())return 0;
//
//        int abs=1;
//        int index=0;
//        long long result=0;
//
//        while(str[index]==' ')
//            index++;
//        if(str[index]=='-')abs=-1;
//        if(str[index]=='+'||str[index]=='-')
//            index++;
//        while(str[index]<='9'&&str[index]>='0'){
//            result*=10;
//            result+=(str[index]-'0');
//            if(abs==1&&result>2147483647)return 2147483647;
//            if(abs==-1&&result>2147483648)return -2147483648;
//            index++;
//        }
//
//        return result*abs;
//    }
//};
//
//int main()
//{
//    Solution s;
//    cout<<s.myAtoi("2147483648");
//    return 0;
//}
