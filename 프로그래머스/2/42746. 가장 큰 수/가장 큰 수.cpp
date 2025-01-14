#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(string a, string b) {
    return (a + b) > (b + a) ? true : false;
}

string solution(vector<int> numbers) {
    string answer = "";
    vector<string>temp;
    for (int i = 0; i < numbers.size(); i++) {
        temp.push_back(to_string(numbers[i]));
    }
    sort(temp.begin(), temp.end(), comp);

    for (string item : temp) {
        answer += item;
    }
    return temp[0] == "0"?"0":answer;
}