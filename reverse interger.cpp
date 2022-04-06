//this is leet code problem no. 7
// leetcode problem: https://leetcode.com/problems/reverse-integer/

#include<iostream>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int ans=0;
        while(x)
        {
            int rem=x%10;
            if (ans>INT_MAX/10||ans<INT_MIN/10)
            {
                return 0;
            }
            ans=ans*10+rem;
            x=x/10;
        }
        
        return ans;
    }
};

int main()
{
  int x;
  cout<<"\nEnter a number = ";
  cin>>x;
  Solution obj;
  cout<<"\nReverse of "<<x<<" = "<< obj.reverse(x);
  return 0;
}
