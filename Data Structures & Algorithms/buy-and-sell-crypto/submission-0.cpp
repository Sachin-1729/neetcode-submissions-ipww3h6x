class Solution {
public:
   void ArrayPrinter(vector<int> v)
   {
    for(auto x : v)
    {
        cout<<x<<" ";
    }
   }

    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int currentMin = INT_MAX;
        int currentMax = INT_MIN;
        vector<int>leftMin{};
        vector<int>rightMax(n ,-1);
        int result = INT_MIN;

        for(int i = 0; i < prices.size(); i++)
        {
            if(prices[i] < currentMin)
            {
                currentMin = prices[i];
            }
            leftMin.push_back(currentMin);

        }

        for(int i = prices.size()-1; i >=0; i--)
        {
            if(prices[i] > currentMax)
            {
                currentMax = prices[i];
            }
            rightMax[i] = currentMax;

        }

        for(int i = 0; i < prices.size(); i++)
        {
             result = max(result , rightMax[i] - leftMin[i]);
        }

        ArrayPrinter(leftMin);
        cout<<endl;
        ArrayPrinter(rightMax);
        

        return result;
        
    }
};
