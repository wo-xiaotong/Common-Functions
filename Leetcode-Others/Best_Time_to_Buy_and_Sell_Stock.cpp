//Say you have an array for which the ith element is the price of a given stock on day i.
//If you were only permitted to complete at most one transaction(ie, buy one and sell one share of the stock), design an algorithm to find the maximum profit.

class Solution {
public:
	int maxProfit(vector<int>& prices) {
		int tmp = 0;
		for (int i = 1; i<prices.size(); i++) {
			prices[i - 1] = prices[i] - prices[i - 1];
		}

		int max = 0;
		int temp = 0;
		int size = prices.size();
		for (int i = 0; i<size - 1; i++) {
			temp = temp + prices[i];
			if (temp>max)max = temp;
			if (temp<0)temp = 0;
		}

		return max;
	}
};