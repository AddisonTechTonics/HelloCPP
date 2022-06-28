#include <iostream>
using namespace std;

int main() 
{
	int listsize;
	cout << "Input number of list items: ";
	cin >> listsize;
	int acc = 0;

	cout << "Input list item 1: ";
	cin >> acc;
	int minVal = acc;
	int maxVal = acc;
	
	for (int i = 1; listsize > i; ++i) {
		cout << "Input list item " << i + 1 << ": ";
		int a;
		cin >> a;
		acc += a;

		if (a < minVal) {
			minVal = a;
		}
		if (a > maxVal) {
			maxVal = a;
		}
	}

	cout << "Min: " << minVal << "\n";
	cout << "Max: " << maxVal << "\n";
	cout << "Mean: " << (double)acc/listsize << "\n";
	cout << "Range: " << (maxVal - minVal) << "\n";


  return 0;
}
