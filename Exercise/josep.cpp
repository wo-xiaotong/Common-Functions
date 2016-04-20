#include<iostream>
#include<list>
using namespace std;

/*
	solve josepus problem with list data struct
	assume that the list contains int
*/

int josep(list<int> L,int cnt){
	int tmp=cnt-1;
	for(list<int>::iterator it=L.begin();L.size()!=1;--tmp){
		if(tmp==0){
			tmp=cnt;
			it=L.erase(it);
		}else{
			++it;
		}
		if(it==L.end())it=L.begin();
	}

	return *L.begin();
}


int main()
{
	int arr[]={0,1,2,3,4};
	list<int>l(arr,arr+5);
	cout<<josep(l,3)<<endl;

	return 0;
}
