//#include<iostream>
//#include<cmath>
//using namespace std;
//
//class Solution
//{
//public:
//    int countPrimes(int n)
//    {
//        int count=0;
//        bool isPrime;
//        for(int i=2; i<n; i++)
//        {
//            if(i==2||i==3){
//                    count++;
//                    continue;
//            }
//            isPrime=true;
//            for(int j=2; j<=sqrt(i); j++)
//            {
//                if(i%j==0)
//                {
//                    isPrime=false;
//                    break;
//                }
//            }
//            if(isPrime)count++;
//        }
//
//        return count;
//    }
//};
//
//class Solution2{
//public:
//    int countPrime(int n){
//        bool *isPrime=new bool[n];
//        for (int i = 2; i < n; i++)
//        {
//            isPrime[i] = true;
//        }
//
//        for (int i = 2; i * i < n; i++)
//        {
//            if (!isPrime[i]) continue;
//            for (int j = i * i; j < n; j += i)
//            {
//                isPrime[j] = false;
//            }
//        }
//        int count = 0;
//        for (int i = 2; i < n; i++)
//        {
//            if (isPrime[i]) count++;
//        }
//
//        delete []isPrime;
//        return count;
//    }
//};
//
//int main()
//{
//    Solution s;
//    Solution2 s2;
//    //cout<<s.countPrimes(1500000);
//    cout<<s2.countPrime(1500000);
//
//    return 0;
//}
