class Solution {
public:
	int minSubArrayLen(int s, vector<int>& nums) {
		int len = nums.size();
		for (int i = 1; i<len; i++){
			nums[i] += nums[i - 1];
		}

		int sub = 0, ret = len+1;
		for (int i = 0; i<len; i++){
			if (i>=1)sub = s - (nums[i] - nums[i - 1]);
			else sub = s - nums[0];
			if (sub <= 0)return 1;
			int begin = i + 1, end = len - 1;
			while (begin <= end){
				int mid = begin + (end - begin) / 2;
				if ((nums[mid] - nums[i]) >= sub){
					if (mid - i + 1<ret)ret = mid - i + 1;
					end = mid - 1;
				}
				else begin = mid + 1;
			}
		}

		return ret==len+1?0:ret;
	}
};
