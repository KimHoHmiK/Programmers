#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

vector<string> solution(vector<string> quiz) {
    vector<string> answer;
   
    int a,b,c;
    char op,eq;
    for(int i = 0; i < quiz.size(); i++){
        istringstream iss(quiz[i]);
        iss>>a>>op>>b>>eq>>c;
        if(op == '+'){
            if((a+b) == c){
                answer.push_back("O");
            }else{
                answer.push_back("X");
            }
        }
        if(op == '-'){
            if((a-b) == c){
                answer.push_back("O");
            }else{
                answer.push_back("X");
            }
        }
    }
    return answer;
}