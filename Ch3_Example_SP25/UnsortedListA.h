#ifndef UNSORTEDLISTA_H
#define UNSORTEDLISTA_H

#include "ItemType.h"

class UnsortedTypeA
{
public:
	UnsortedTypeA();
	~UnsortedTypeA();
	void MakeEmpty();
	bool IsFull() const;
	bool IsEmpty() const;
	int GetLength() const;
	ItemType GetItem(ItemType item, bool& found);
	bool PutItem(ItemType item);
	bool DeleteItem(ItemType item);
	void ResetList();
	ItemType GetNextItem();

private:
	int length;
	ItemType info[MAX_ITEMS];
	int currentPos;
};

#endif // !UNSORTEDLISTA_H

