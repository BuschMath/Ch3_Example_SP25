#include "UnsortedListA.h"
#include <memory>

UnsortedListA::UnsortedListA()
{
	length = 0;
	currentPos = -1;
}

UnsortedListA::~UnsortedListA()
{
	MakeEmpty();
}

void UnsortedListA::MakeEmpty()
{
	length = 0;
}

bool UnsortedListA::IsFull() const
{
	if(length == MAX_ITEMS)
		return true;
	else
		return false;
}

bool UnsortedListA::IsEmpty() const
{
	if(length == 0)
		return true;
	else
		return false;
}

int UnsortedListA::GetLength() const
{
	return length;
}

ItemType UnsortedListA::GetItem(ItemType item, bool& found)
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
	return item;
}

bool UnsortedListA::PutItem(ItemType item)
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

bool UnsortedListA::DeleteItem(ItemType item)
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

void UnsortedListA::ResetList()
{
	currentPos = -1;
}

ItemType UnsortedListA::GetNextItem()
{
	currentPos++;
	currentPos = currentPos % length;
	return info[currentPos];
}
