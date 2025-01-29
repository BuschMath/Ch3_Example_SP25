#include "UnsortedListA.h"

UnsortedTypeA::UnsortedTypeA()
{
	length = 0;
	currentPos = -1;
}

UnsortedTypeA::~UnsortedTypeA()
{
	MakeEmpty();
}

void UnsortedTypeA::MakeEmpty()
{
	length = 0;
}

bool UnsortedTypeA::IsFull() const
{
	if(length == MAX_ITEMS)
		return true;
	else
		return false;
}

bool UnsortedTypeA::IsEmpty() const
{
	if(length == 0)
		return true;
	else
		return false;
}

int UnsortedTypeA::GetLength() const
{
	return length;
}

ItemType UnsortedTypeA::GetItem(ItemType item, bool& found)
{
	if(IsEmpty())
	{
		found = false;
		return item;
	}
	else
	{
		found = false;
		for(int i = 0; i < length; i++)
		{
			if(info[i].ComparedTo(item) == EQUAL)
			{
				found = true;
				return info[i];
			}
		}
	}
}

bool UnsortedTypeA::PutItem(ItemType item)
{
	if(IsFull())
	{
		return false;
	}
	else
	{
		info[length] = item;
		length++;

		return true;
	}

	return false;
}

bool UnsortedTypeA::DeleteItem(ItemType item)
{
	if(IsEmpty())
	{
		return false;
	}
	else
	{
		for(int i = 0; i < length; i++)
		{
			if(info[i].ComparedTo(item) == EQUAL)
			{
				info[i] = info[length - 1];
				length--;
				return true;
			}
		}
	}

	return false;
}

void UnsortedTypeA::ResetList()
{
	currentPos = -1;
}

ItemType UnsortedTypeA::GetNextItem()
{
	currentPos++;
	currentPos = currentPos % length;
	return info[currentPos];
}
