#include <iostream>
#include <vector>
#include <set>
#include <cstdlib>
#include <ctime>

using namespace std;

set<int> getrandMfromN_1(int n,int m){
	set<int>res;
	
	srand(time(NULL));
	for(int i=n-m+1;i<=n;++i){
		int t=rand()%i+1;
		if(res.find(t)==res.end())res.insert(t);
		else res.insert(i);
	}

	return res;
}


set<int> getrandMfromN_2(int n,int m){
	set<int>res;
	
	srand(time(NULL));
	while(res.size()<m){
		int t=rand()%n+1;
		res.insert(t);
	}

	return res;
}

vector<int>shuffle(int n){
	vector<int>res(n,0);
	for(int i=1;i<=n;++i)res[i-1]=i;

	srand(time(NULL));
	for(int i=n-1;i>=1;--i){
		int t=rand()%(i+1);
		int temp=res[i];
		res[i]=res[t];
		res[t]=temp;
	}

	return res;
}


int main()
{
	for(auto i:shuffle(2))
		cout<<i<<" ";
	return 0;
}
