class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = heights.size() - 1;
        int maxiwater = INT_MIN;
        int minheight = 0;

        while(left < right)
        {   
            
          
            int water = (right - left) * min(heights[left] , heights[right]);
            cout<<heights[left]<<"->"<<heights[right]<<endl;          
            cout<<minheight<<"Min Height"<<endl;
             maxiwater = max(water , maxiwater);
            cout<<maxiwater<<"Maxi water"<<endl;

           

            if(heights[left] >= heights[right])
            {
                right--;
            }
           else if(heights[left] < heights[right])
            {
                left++;
            }

        }

        return maxiwater;
    }
};
