#include <iostream>
#include "UnsortedListA.h"

using namespace std;

int main()
{
	UnsortedListA list;
	ItemType item;
	item.setValue(5);
	list.PutItem(item);
	item.setValue(7);
	list.PutItem(item);
	item.setValue(6);
	list.PutItem(item);
	item.setValue(9);
	list.PutItem(item);

	for (int i = 0; i < list.GetLength(); i++)
	{
		cout << "Item " << i << " is :" << list.GetNextItem().getValue() << endl;
	}

	return 0;
}