#ifndef ITEMTYPE_H
#define ITEMTYPE_H

enum RelationType { LESS, GREATER, EQUAL };

class ItemType
{
public:
	ItemType();
	~ItemType();

	void SetMaxItems(int maxItems) { MAX_ITEMS = maxItems; }
	int GetMaxItems() const { return MAX_ITEMS; }

	virtual RelationType ComparedTo(const ItemType& otherItem) const = 0;

private:
	int MAX_ITEMS = 5;
};

ItemType::ItemType()
{
}

ItemType::~ItemType()
{
}

#endif // !ITEMTYPE_H

