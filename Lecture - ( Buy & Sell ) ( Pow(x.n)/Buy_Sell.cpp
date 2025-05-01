#include<iostream>
#include<vector>
using namespace std;

int maxProfit(vector<int>& prices) {
    int maxprof = 0 ;
    int bestbuy = prices[0] ;

    for(int i = 1 ; i < prices.size() ; i++)
    {
        if(prices[i]>bestbuy)
        {
            maxprof = max(maxprof , (prices[i] - bestbuy));
        }
        bestbuy = min(bestbuy , prices[i]);
    }

    return maxprof;
}

int main()
{
    vector<int> res = {7,1,5,3,6,4};
    int ans = maxProfit(res);
}