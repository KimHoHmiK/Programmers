#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    for(auto item : arr)
        answer+=item;
    
    return answer/arr.size();
}