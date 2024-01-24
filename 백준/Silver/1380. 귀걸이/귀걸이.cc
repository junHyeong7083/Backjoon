#include<iostream>
#include<vector>
#include<cmath>
#include<string>
#include<algorithm>
#include<stack>
#include<queue>
#include<utility>
#include<limits>
#include<list>
using namespace std;


int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    std::cout.tie(NULL);

   /*
    귀걸이 압수 숫자 n
    여학생의 이름 n개


   */
    int t = 1;
    while (true)
    {
        int n;
        cin >> n;

        if (n == 0)
            break;

        vector<string>vs;
        vector<bool> vb;
        cin.ignore();

        for (int e = 0; e < n; ++e)
        {
            string str;
            getline(cin, str);

            vs.push_back(str);
            vb.push_back(true);
        }
        int check = 0;
        
        for(int e = 0; e < n*2-1; ++e)
        {
            int idx;
            char str;
            cin >> idx >> str;

            if (vb[idx - 1])
                vb[idx - 1] = false;

            else
                vb[idx - 1] = true;


        }

        int residx = 0;
        for (int e = 0; e < vb.size(); ++e)
        {
            if (!vb[e])
            {
                residx = e;
                break;
            }
        }

        cout  <<t << " " << vs[residx] << endl;
        t++;
    }

   
    return 0;
}