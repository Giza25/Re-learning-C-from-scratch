#pragma once

#include <string>

class IPrintable
{
public:
	virtual std::string GetClassName() = 0;
};

class Entity : public IPrintable
{
private:
	std::string m_Name;
	int m_Age;
public:
	Entity()
		: m_Name("Unknown"), m_Age(-1) {}
	Entity(const std::string& name)
		: m_Name(name), m_Age(-1) {}
	Entity(const std::string& name, const int& age)
		: m_Name(name), m_Age(age) {}

	virtual const std::string& GetName() const { return m_Name; }
	virtual const int& GetAge() const { return m_Age; }
	std::string GetClassName() override { return "Entity"; }
};

class Player : public Entity
{
private:
	std::string m_Name;
	int m_Age;
public:
	Player(const std::string& name)
		: m_Name(name), m_Age(-1) {}
	Player(const std::string& name, const int& age)
		: m_Name(name), m_Age(age) {}

	const std::string& GetName() const override { return m_Name; }  //overriding inherited GetName() function without losing memory on creting new instances
	const int& GetAge() const override { return m_Age; }
	std::string GetClassName() override { return "Player"; }
};
