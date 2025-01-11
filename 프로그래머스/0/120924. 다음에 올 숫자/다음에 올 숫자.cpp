#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> common) {
    int answer = 0;
    int temp1=0, temp2=0, size = common.size();
    //등차 등비 확인
    if((common[size-1] - common[size-2]) == (common[size-2] - common[size-3]))
    //등차
    {
        answer = common[size-1] + common[1] - common[0];
    }
    else //등비
        answer = common[size-1] * common[1] / common[0];
    return answer;
}