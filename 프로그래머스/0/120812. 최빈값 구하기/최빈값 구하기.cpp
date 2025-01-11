#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    int cnt,temp=0;
    for(auto item : array)
    {
        cnt = count(array.begin(), array.end(), item);
        if(temp < cnt)
        {
            temp = cnt;
            answer = item;
            array.erase(remove(array.begin(), array.end(),item),array.end());
        }
        else if(temp == cnt)
            answer = -1;
    }
    return answer;
}