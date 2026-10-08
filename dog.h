#pragma once
#include "animal.h"

class dog : public animal //makes dog a subclass of animal, public inheritance = public members stay public
{
public:
	dog(const std::string& name, int age); 

	void speak() const override; //override = does not make new method

	//void bath_time() const override;
	//Only if you want to override this function to change normal behavior
};