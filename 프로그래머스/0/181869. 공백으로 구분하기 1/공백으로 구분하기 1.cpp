#include <bits/stdc++.h>
using namespace std;

vector<string> solution(string my_string) {
    regex rx(" ");
    sregex_token_iterator iter(my_string.begin(), my_string.end(), rx, -1), end;
    return {iter, end};
}