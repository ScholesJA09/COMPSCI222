#pragma once
#include "status.h"
#include "type.h"

class order
{
private:
	int id;
	double price;
	status s;
	type t;
	
public:
	order(int id, double price, status s, type t);

	int get_id() const;
	double get_price() const;
	status get_status() const;
	type get_type() const;

	void set_id(int id);
	void set_price(double price);
	void set_status(status s);
	void set_type(type t);

	void print() const;
};