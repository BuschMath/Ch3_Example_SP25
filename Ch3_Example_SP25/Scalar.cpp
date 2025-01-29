#include "Scalar.h"

Scalar::Scalar()
{
	SetMaxItems(MaxItems);
	value = 0;
}

Scalar::~Scalar()
{
}

RelationType Scalar::ComparedTo(ItemType otherItem) const
{
	if(value < otherItem.value)
		return LESS;
	else if(value > otherItem.value)
		return GREATER;
	else
		return EQUAL;
}
