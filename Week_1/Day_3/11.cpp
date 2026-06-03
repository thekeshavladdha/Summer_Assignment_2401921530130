class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i=0,j=heights.size()-1;
        int amount;
        int result=0;
        //two pointer approach
        while(i<j){
            // find area between first height and the last height given by the height vector.
            amount=(j-i)*min(heights[i],heights[j]);
            // update the result if the current area is greater than the previous result.
            result=max(result,amount);
            // since we need to find the argest area, we need to move the pointer which has the smaller height, because moving the pointer with the larger height will not increase the area.
            if(heights[i]<heights[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return result;
    }
};
