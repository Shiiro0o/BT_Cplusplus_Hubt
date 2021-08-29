#pragma once
#include<vector>
#include <iostream>
#include "Subscriber.h"
class ManagerSubcribers
{
public:
	ManagerSubcribers();
	void addMoreSubcriber();
	void showMaxFees();

private:
	std::vector<Subcriber> listSubs;
	void showList();
};
