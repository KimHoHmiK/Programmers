#include <vector>
#include <iostream>
#include <set>
using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    int temp = -1;
    for(int item : arr)
        if(temp != item){
            answer.push_back(item);
            temp = item;
        }

    return answer;
}