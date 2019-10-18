#include <iostream>
#include "BTree.h"
#include <algorithm>
using namespace std;

int main()
{
	ljc::Tree<char> tr("ABD##E##CFH##I##G##", '#');

	tr.pre_order();
	cout << endl;
	tr.in_order();
	cout << endl;
	tr.post_order();
	cout << endl;





	return 0;
}