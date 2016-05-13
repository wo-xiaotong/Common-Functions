//You are climbing a stair case. It takes n steps to reach to the top.
//Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

#include<iostream>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        int a=1,b=2;

        if(n==1)return a;
        if(n==2)return b;

        int result;
        for(int i=3;i<=n;i++){
            result=a+b;
            a=b;
            b=result;
        }

        return result;
    }
};
int main()
{


    return 0;
}
