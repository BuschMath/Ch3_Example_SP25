#ifndef SCALAR_H
#define SCALAR_H

#include "ItemType.h"

int MaxItems = 100;

class Scalar : public ItemType
{
public:
	Scalar();
	~Scalar();

	RelationType ComparedTo(const ItemType& otherItem) const override;

	int value;

private:
	
};

#endif // !SCALAR_H

