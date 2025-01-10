#include <iostream>
#include <string>
#include <vector>
#include <regex>
using namespace std;
//5*1, 5*10, 5*11, 5*100, 5*101, 5*110, 5*111
vector<int> solution(int l, int r) {
	vector<int> answer;
	bool check;
	for (int i = l; i <= r; i++)
	{
		if (i % 5 != 0)continue;
		string item = to_string(i);
		item = regex_replace(item, regex("[05]"), "");
		if (item.empty()) {
			answer.push_back(i);
		}
	}
	if (answer.empty()) answer.push_back(-1);
	return answer;
}