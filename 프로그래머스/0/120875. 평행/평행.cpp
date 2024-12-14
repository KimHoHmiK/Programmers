#include <string>
#include <vector>
#include <cmath>
#include <iostream>
using namespace std;
//m = (y2 - y1) / (x2 - x1)
int solution(vector<vector<int>> dots) {
    vector<int> a = dots[0];
    vector<int> b = dots[1];
    vector<int> c = dots[2];
    vector<int> d = dots[3];
    
    if((double(a[1] - b[1]) / double(a[0] - b[0]) == double(c[1] - d[1]) / double(c[0] - d[0])) ||
       (double(a[1] - c[1]) / double(a[0] - c[0]) == double(b[1] - d[1]) / double(b[0] - d[0])) ||
       (double(a[1] - d[1]) / double(a[0] - d[0]) == double(b[1] - c[1]) / double(b[0] - c[0])))
        return 1;

    return 0;

}