
//split a string by sp
vector<string> split(const string& content,const string& sp){
	vector<string>res;
	int len=content.size();
	
	for(int begin=0,end=0;end<len;){
		while(end<len && sp.find(content[end])!=string::npos)++end;
		if(end==len)break;
		begin=end;
		while(end<len && sp.find(content[end])==string::npos)++end;
		res.push_back(content.substr(begin,end-begin));
	}

	return res;
}
