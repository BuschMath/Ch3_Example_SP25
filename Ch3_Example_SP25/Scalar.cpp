#include "Scalar.h"

Scalar::Scalar()
{
	SetMaxItems(MaxItems);
	value = 0;
}

Scalar::~Scalar()
{
}

RelationType Scalar::ComparedTo(const ItemType& otherItem) const
{
	const Scalar* otherScalar = dynamic_cast<const Scalar*>(&otherItem);

	if(otherScalar == nullptr)
		throw "Invalid type";

	if(value < otherScalar->value)
		return LESS;
	else if(value > otherScalar->value)
		return GREATER;
	else
		return EQUAL;
}
