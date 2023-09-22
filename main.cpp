#include "VernaTask.h"

int main()
{
	vector<int> x{1,3,5,7,15,19,17,21,25,27,29};
	vector<int> y{10,20,30,31};

	VernaTask vt;

	cout << vt.findMedian(x, y);
}