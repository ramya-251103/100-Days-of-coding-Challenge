void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
      //using sort STL O((m+n)log(m+n))
        int i;
        for(int j = 0,i=m; j<n; j++)
        {
            nums1[i]=nums2[j];
            i++; 
        }

        sort(nums1.begin(), nums1.end()); 
}
