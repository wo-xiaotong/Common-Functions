//class Solution {
//public:
//	vector<int> diffWaysToCompute(string input) {
//		map<string, vector<int>>tmpVal;
//		return diffWaysToCompute(input, tmpVal);
//	}
//
//	vector<int>diffWaysToCompute(string input, map<string, vector<int>>& tmpVal){
//		int size = input.size();
//		vector<int>res;
//
//		for (int i = 0; i<size; i++){
//			char c = input[i];
//			if (ispunct(c)){
//				string left = input.substr(0, i);
//				string right = input.substr(i + 1);
//
//				vector<int>leftRes, rightRes;
//				if (tmpVal.find(left) != tmpVal.end())
//					leftRes = tmpVal[left];
//				else
//					leftRes = diffWaysToCompute(left, tmpVal);
//
//				if (tmpVal.find(right) != tmpVal.end())
//					rightRes = tmpVal[right];
//				else
//					rightRes = diffWaysToCompute(right, tmpVal);
//
//				for (int j = 0; j<leftRes.size(); j++)
//				for (int k = 0; k<rightRes.size(); k++){
//					switch (c){
//					case '+':res.push_back(leftRes[j] + rightRes[k]); break;
//					case '-':res.push_back(leftRes[j] - rightRes[k]); break;
//					case '*':res.push_back(leftRes[j] * rightRes[k]); break;
//					}
//				}
//			}
//		}
//
//		if (res.empty())res.push_back(stoi(input));
//		tmpVal[input] = res;
//
//		return res;
//	}
//};