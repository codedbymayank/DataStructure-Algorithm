#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

//Brute-Force Approach
vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result ;
        set<vector<int>> s; // To Store unique triplets

        for(int i = 0 ; i < nums.size() ; i++)
        {
            for(int j = i + 1 ; j < nums.size() ; j++)
            {
                for(int k = j + 1 ; k < nums.size() ; k++)
                {
                    if((nums[i]+nums[j]+nums[k])==0)
                    {
                        vector<int> tripletvec = {nums[i] , nums[j] , nums[k]} ;
                        sort(tripletvec.begin(),tripletvec.end()) ;
                        if(s.find(tripletvec)==s.end())
                        {
                            s.insert(tripletvec);
                            result.push_back(tripletvec);
                        }
                    }
                }
            }
        }

        return result ;
}

//Better Solution
vector<vector<int>> BetterSolutionthreeSum(vector<int>& nums) {
   
    set<vector<int>> uniquetriple; // To Store unique triplets

    for(int i = 0 ; i < nums.size() ; i++)
    {
        int target = -nums[i] ;
        set<int> s ; 
        for(int j = i + 1 ; j < nums.size() ; j++)
        {
            int thirdnum = target - nums[j] ;
            if(s.find(thirdnum)!=s.end())
            {
                vector<int> trip = {nums[i],nums[j],thirdnum} ;
                sort(trip.begin(),trip.end());
                uniquetriple.insert(trip);
            }

            s.insert(nums[j]);
        }
    }

    vector<vector<int>> result(uniquetriple.begin(),uniquetriple.end()) ;
    return result ;
}


int main()
{
    vector<int> v = {-1,0,1,2,-1,-4} ;
    vector<vector<int>> result = threeSum(v) ;
    vector<vector<int>> result = BetterSolutionthreeSum(v) ;


    


}