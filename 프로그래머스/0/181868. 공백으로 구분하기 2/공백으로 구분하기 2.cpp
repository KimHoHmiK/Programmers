#include <string>
#include <vector>
#include <sstream>
using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    string word;
    istringstream iss(my_string);
    while(iss >> word){
        answer.push_back(word);
    }
    return answer;
}