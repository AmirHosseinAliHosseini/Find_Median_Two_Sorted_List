#pragma once
#include <iostream>
#include <vector>

using namespace std;

class VernaTask 
{
public:
	/**
	 * find median of two sorted list.
	 *
	 * @param nums1; sorted list 1.
	 * @param nums2; sorted list 2.
	 * @return finded median.
	*/
    double findMedian(vector<int>& nums1, vector<int>& nums2) const;

private:
    double findMedian(vector<int>& nums, int start = 0, int end = 0) const;
};
