#pragma once
class DeleteHelper
{
public:
	DeleteHelper();
	~DeleteHelper();
	
	template <typename T>
	static void DeleteList(std::list<T*> *list);
};

