class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> maxLeft{};
        vector<int> maxRight(height.size() , -1);
        int currentmaxLeft = height[0];
        int currentmaxRight = height[height.size()-1];
        int result = 0;

        for(int i = 0; i < height.size(); i++)
        {  
            int x = height[i];
            if(x > currentmaxLeft)
            {
                currentmaxLeft = x;
                maxLeft.push_back(currentmaxLeft);
            }
            else
            {
                 maxLeft.push_back(currentmaxLeft);
            }
        }

        for(int i = height.size() -1 ; i >=0; i--)
        {
            if(height[i] > currentmaxRight)
            {
                currentmaxRight = height[i];
                maxRight[i] = height[i];
            }
            else
            {
                 maxRight[i] = currentmaxRight;
            }
        }

     for(int i = 0; i < height.size(); i++)
        {
            int maxL = maxLeft[i];
            int maxR = maxRight[i];
            int current = height[i];

            int water = min(maxL , maxR) - current;
             result += water;
        }
         

        return result;
    }
};
