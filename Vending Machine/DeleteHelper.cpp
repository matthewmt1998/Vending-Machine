#include "stdafx.h"

#include <list>

#include "DeleteHelper.h"


DeleteHelper::DeleteHelper() { }
DeleteHelper::~DeleteHelper() { }

template <typename T>
static void DeleteHelper::DeleteList(std::list<T*> *list)
{
	for (auto&& child : *list)
	{
		delete child;
	}
	delete list;
}
