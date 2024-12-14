#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

string solution(string my_string, string alp) {
    string answer = my_string;
    transform(my_string.begin(), my_string.end(),answer.begin(),[alp](unsigned char c){
        return (c == alp[0]) ?toupper(c):c;
    });
    return answer;
}