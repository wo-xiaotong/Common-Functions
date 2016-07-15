class Solution {
public:
	bool canFinish(int numCourses, vector<pair<int, int>>& prerequisites) {
		unordered_map<int, int>nodes;
		for (auto p : prerequisites)
		{
			if (nodes.find(p.first) == nodes.end())nodes[p.first] = 0;
			if (nodes.find(p.second) != nodes.end())nodes[p.second]++;
			else nodes[p.second] = 1;
		}

		int r = 0;
		while (!nodes.empty())
		{
			bool flag = true;
			for (auto it = nodes.begin(); it != nodes.end();)
			{
				if (it->second == 0){
					for (auto p : prerequisites)
					{
						if (p.first == it->first)nodes[p.second]--;
					}
					flag = false;
					it = nodes.erase(it);
					++r;
				}
				else ++it;
			}
			if (flag)break;
		}

		return r >= numCourses || nodes.empty();
	}
};
