#include <string>
#include <vector>
#include <regex>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    int idx;
    vector<string> word = {"aya","ye","woo","ma"};
    for(auto babb : babbling){
        for(auto item : word){
            idx = babb.find(item);
            if(idx != babb.npos){
                babb.replace(idx,item.size()," ");
            }
        }
        if(regex_replace(babb,regex("\\s{2,}")," ") == " ")
            answer++;
    }
    return answer;
}