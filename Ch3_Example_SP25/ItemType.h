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

	virtual RelationType ComparedTo(ItemType otherItem) const;

private:
	int MAX_ITEMS = 5;
};

ItemType::ItemType()
{
}

ItemType::~ItemType()
{
}

RelationType ItemType::ComparedTo(ItemType otherItem) const
{
	if (this == &otherItem)
		return EQUAL;
	else
		return LESS;
}

#endif // !ITEMTYPE_H

