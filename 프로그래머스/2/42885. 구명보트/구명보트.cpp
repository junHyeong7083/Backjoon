#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solution(vector<int> people, int limit)
{
    sort(people.begin(), people.end());
    int answer = 0;
    int left = 0;
    int right = people.size() - 1;
    
    while (left <= right)
    {
        if (people[left] + people[right] <= limit) 
            left++;
        
        right--;
        answer++;
    }
    
    return answer;
}