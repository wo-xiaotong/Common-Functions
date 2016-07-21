////求1+2+3+...+n，要求不能使用乘除法、for、while、if、else、switch、case等关键字及条件判断语句（A?B:C）。
//
//class Solution {
//public:
//	int Sum_Solution(int n) {
//        int sum=0;
//
//        (n>0)&&(sum=n+Sum_Solution(n-1));  //&&有短路性质，当n<=0时候就不会去判断右边的式子
//
//        return sum;
//
//    }
//};
