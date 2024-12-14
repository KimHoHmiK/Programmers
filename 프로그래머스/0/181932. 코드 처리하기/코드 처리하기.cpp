#include <string>
#include <vector>
#include <cctype>
using namespace std;

string solution(string code) {
    string answer = "";
    bool mode = false;
    for(int i = 0; i<code.size(); i++)
    {
        if(isdigit(code[i])){
            mode = !mode;
            continue;
        }
        if(mode){
            if(i%2!=0){
                answer.push_back(code[i]);
            }
        }else{
            if(i%2==0){
                answer.push_back(code[i]);
            }
        }
        
    }
    return answer==""?"EMPTY":answer;
}