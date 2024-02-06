#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<stack>
#include<queue>
using namespace std;




int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    /*
     n장의 쿠폰 쿠폰1개당 치킨1마리
     치킨한마리 주문시 도장1개
     도장 k개를 모으면 치킨쿠폰한장
    */
    int n, k;
    while (cin >> n >> k && n > 0 && k > 0) 
    {
        int res = 0;
        int stamp = 0;
        while (true)
        {
            res += n;
            stamp += n;

            n = stamp / k;
            stamp = stamp % k;

            if (!n)
                break;
        }
        cout << res<< endl; 
    }
     
    return 0;
}
