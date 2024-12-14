#include <regex>
#include <string>
#include <vector>

using namespace std;

string solution(string rny_string) {
    string answer = "";
    rny_string = regex_replace(rny_string,regex("m"),"rn");
    answer= rny_string;
    return answer;
}