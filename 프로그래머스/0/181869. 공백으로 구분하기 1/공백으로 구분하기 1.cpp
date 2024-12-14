#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    string word;
    for(auto item : my_string){
        if(item != ' '){
            word+=item;
        }else{
            answer.push_back(word);
            word.clear();
        }
    }
    answer.push_back(word);
    return answer;
}