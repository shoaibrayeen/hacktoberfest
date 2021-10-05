import java.util.*;
class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int i,l1=nums1.length,l2=nums2.length,j=0;
        int[] newarr=new int[l1+l2];
        double med=0;
        for(i=0;i<l1;i++)
            newarr[i]=nums1[i];
        for(i=l1;i<l1+l2;i++)
        {
            newarr[i]=nums2[j];
            j++;
    }
       Arrays.sort(newarr);
    if((l1+l2)%2==0)
       med=(double)(newarr[(((l1+l2)/2)-1)]+newarr[(l1+l2)/2])/2;
        else
            med=newarr[(l1+l2+1)/2-1];
        return med;
    }
}
