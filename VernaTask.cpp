#include "VernaTask.h"

double VernaTask::findMedian(vector<int>& nums1, vector<int>& nums2) const
{
	if (nums1.empty())
		return findMedian(nums2);
	if (nums2.empty())
		return findMedian(nums1);

	double fm1, fm2;
	int step, s1 = 0, e1 = nums1.size(), s2 = 0, e2 = nums2.size();

	while (true)
	{
		fm1 = findMedian(nums1, s1, e1);
		fm2 = findMedian(nums2, s2, e2);

		step = min(e1 - s1, e2 - s2) / 2;

		if (step == 0)
			++step;

		if (fm1 == fm2)
			return fm1;
		if (fm1 > fm2)
		{
			e1 -= step;
			s2 += step;
		}
		else if (fm1 < fm2)
		{
			e2 -= step;
			s1 += step;
		}

		if (s1 == e1)
			return findMedian(nums2, s2, e2);
		else if (s2 == e2)
			return findMedian(nums1, s1, e1);
	}
}

double VernaTask::findMedian(vector<int>& nums, int start, int end) const
{
	if (nums.empty())
		return 0;
	int size = end - start;
	if (size % 2)
		return nums[start + size / 2];

	int medIdx = start + size / 2;
	return (nums[medIdx - 1] + nums[medIdx]) / 2.;
}