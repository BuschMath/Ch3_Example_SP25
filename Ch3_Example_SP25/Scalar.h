#ifndef SCALAR_H
#define SCALAR_H

#include "ItemType.h"

int MaxItems = 100;

class Scalar : public ItemType
{
public:
	Scalar();
	~Scalar();
	Scalar(Scalar &otherScalar);

	RelationType ComparedTo(ItemType otherItem) const;

	int value;

private:

};

#endif // !SCALAR_H

