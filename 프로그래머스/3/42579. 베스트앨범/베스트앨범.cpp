#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
bool comp1(pair<int, int>& a, pair<int, int>& b) {
	return a.second > b.second;
}
bool comp2(const pair<string, int>& a, const pair<string, int>&b) {
	return a.second > b.second;
}
vector<int> solution(vector<string> genres, vector<int> plays) {
	vector<int> answer;
	unordered_map<string, int>play_cnt;
	unordered_map<string, vector<pair<int, int>>> songinfo;

	for (int i = 0; i < plays.size(); i++) {
		play_cnt[genres[i]] += plays[i];
		songinfo[genres[i]].push_back(make_pair(i, plays[i]));
	}

	for (auto& item : songinfo) {
		sort(item.second.begin(), item.second.end(), comp1);
	}
	vector <pair<string, int>> play_cnt_v(play_cnt.begin(), play_cnt.end());
	sort(play_cnt_v.begin(), play_cnt_v.end(), comp2);
	for (auto& item : play_cnt_v) {
		auto iter = songinfo.find(item.first);
		int cnt = 0;
		auto iter2 = iter->second;
		for (auto item2 : iter2) {
			if (cnt++ >= 2) break;
			answer.push_back(item2.first);
		}
	}

	return answer;
}