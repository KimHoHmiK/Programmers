#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string rny_string) {
    string answer = rny_string;
    int idx = 0;
    while((idx = answer.find('m')) != answer.npos)
    {
        answer.replace(idx,1,"rn");
    }
    return answer;
}