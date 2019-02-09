string letterMap[10] = { "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };
class Solution {
public:
	void _letterCombinations(vector<string>& strs, size_t index, const string& digits, string combin)
	{
		if (digits.size() == index)
		{
			strs.push_back(combin);
			return;
		}
		string letters = letterMap[digits[index] - '0'];
		for (int i = 0; i < letters.size(); i++)
		{
			_letterCombinations(strs, index + 1, digits, combin + letters[i]);
		}
	}
	vector<string> letterCombinations(string digits) {
		vector<string> strs;
		if (digits.empty()) return strs;
		string combin;
		size_t index = 0;
		_letterCombinations(strs, index, digits, combin);//顺序表，下标，字符串，临时组合字符

		return strs;
	}
};