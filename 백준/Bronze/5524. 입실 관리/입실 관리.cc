#include <iostream>
#include<string>
#include<string.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    char name[256];
    
    for (int i = 0; i < t; ++i)
    {
        cin >> name;
        int len = strlen(name);
        for (int k = 0; k < len; ++k)
        {
            if (name[k] >= 'A' && name[k] <= 'Z')
                name[k] += 32;
        }
        cout << name << endl;
    }

    return 0;
}
