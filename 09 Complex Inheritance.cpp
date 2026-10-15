#include <iostream>
#include <string>

class animal
{
protected:
	std::string name;

public:
	animal(const std::string& name) : name(validate_name(name)) {}
	virtual ~animal() = default; //Destructor

	std::string get_name() const { return name; }

	void set_name(const std::string& name)
	{
		this->name = validate_name(name);
	}

	virtual void speak() const = 0; //Lack of a body

private:
	std::string validate_name(const std::string&)
	{
		if (name.empty())
		{
			throw std::exception("Name cannot be empty.");
		}
		return name;
	}
};

class mammal : public animal
{
protected:
	const std::string fur_color;

public:
	mammal(const std::string& name, const std::string& fur_color)
		: animal(name)
		, fur_color(fur_color) { }
	~mammal() = default;

	std::string get_fur_color() const { return fur_color; }
};
