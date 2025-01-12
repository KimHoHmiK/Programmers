#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <set>
using namespace std;

bool solution(vector<string> phone_book) {
    sort(phone_book.begin(), phone_book.end());
    int min_len = 0;
    for(int i=0; i<phone_book.size()-1; i++) {
        min_len = phone_book[i].length();
        if(phone_book[i+1].substr(0,min_len).find(phone_book[i]) != string::npos)
            return false;
    }
            
    return true;
}