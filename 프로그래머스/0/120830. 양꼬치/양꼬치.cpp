#include <string>
#include <vector>

using namespace std;
int SKEWER = 12000;
int DRINK = 2000;

int solution(int n, int k) {
    int answer = 0;
    int free_drink = n/10;
    k -= free_drink;
    answer = SKEWER*n + (k > 0 ? k*DRINK:0);
    return answer;
}