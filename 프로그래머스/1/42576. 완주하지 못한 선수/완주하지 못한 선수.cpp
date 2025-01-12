#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    map<string,bool> a;
    for(string item : participant)
    {
        auto key = a.find(item);
        if(key != a.end()){
            key->second = !key->second;
        }
        else{
            a.insert(make_pair(item, false));
        }
    }
    for(string item : completion)
    {
        auto key = a.find(item);
        if(key != a.end()){
            key->second = !key->second;
        }
    }
    for(const auto& pair : a){
        if(pair.second == false){
            answer = pair.first;
        }
    }
    return answer;
}