class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int one=0,two=0;
        vector <int> nums3;
        while(one<m && two<n)
        {
            if(nums1[one]<=nums2[two])
            {
                nums3.push_back(nums1[one]);
                one++;
            }
            else if(nums1[one]>nums2[two])
            {
                nums3.push_back(nums2[two]);
                two++;
            }
        }
        while(one<m)
        {
            nums3.push_back(nums1[one]);
            one++;
        }
        while(two<n)
        {
            nums3.push_back(nums2[two]);
            two++;
        }
        for(int j=0;j<n+m;j++)
        {
            nums1[j]=nums3[j];
        }
    }
};
