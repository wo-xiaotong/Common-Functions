class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mm;
        int l=0;
        for(int i=0;i<s.size();i++)
        {
            if(mm.find(s[i])!=mm.end()){
                int before=mm[s[i]];
                for(auto it=mm.begin();it!=mm.end();){
                    if(it->second<=before)it=mm.erase(it);
                    else ++it;
                }
            }
            else{
                if(mm.size()+1>l)l=mm.size()+1;
            }
            mm[s[i]]=i;
        }
        
        return l;
    }
};
