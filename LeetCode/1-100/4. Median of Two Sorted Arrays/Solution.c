double findMedianSortedArrays(int *nums1, int nums1Size, int *nums2, int nums2Size)
{
    int ar3[nums1Size + nums2Size];
    int i = 0, j = 0, k = 0;

    while (i < nums1Size && j < nums2Size)
    {
        if (nums1[i] < nums2[j])
        {
            ar3[k] = nums1[i];
            k++;
            i++;
        }
        else
        {
            ar3[k] = nums2[j];
            k++;
            j++;
        }
    }

    while (i < nums1Size)
    {
        ar3[k] = nums1[i];
        k++;
        i++;
    }

    while (j < nums2Size)
    {
        ar3[k] = nums2[j];
        j++;
        k++;
    }

    if ((nums1Size + nums2Size) % 2 != 0)
        return (double)ar3[(nums1Size + nums2Size) / 2];
    return (double)(ar3[((nums1Size + nums2Size) - 1) / 2] + ar3[(nums1Size + nums2Size) / 2]) / 2.0;
}
