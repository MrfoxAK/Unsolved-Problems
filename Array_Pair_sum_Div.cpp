class Solution
{
public:
     bool canPair(vector<int> nums, int k)
     {
          // Code here.
          int flag = 0;
          for (int i = 0; i < nums.size(); i++)
          {
               for (int j = i + 1; j < nums.size(); j++)
               {
                    if ((nums[i] + nums[j]) % k == 0)
                    {
                         flag = 1;
                    }
               }
          }
          if (flag == 0)
          {
               return false;
          }
          else
          {
               return true;
          }
     }
};