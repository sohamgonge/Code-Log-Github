#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int countPrimes(int n) {
        vector<bool> isPrime(n+1, true);
        isPrime[0]= false;
        isPrime[1]= false;
        int count = n;
        if(n==2){
            return 1;
        }
        if(n < 2){
            return 0;
        }
        if(n == 3){
            return 2;
        }
        int e = sqrt(n);
        for(int i = 2; i <=e; i++){
            if(isPrime[i]){
                for(int j = 0;j<n;j=j+i){
                    if (isPrime[j] != false){
                        isPrime[j]=false;
                        count--;
                    }
                }
            }
        }
        return count;
    }
};

int main()
{

    Solution obj;
    int ans = obj.countPrimes(10);
    cout << "Result : " << ans << endl;

    return 0;
}