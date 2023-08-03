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
public:
	Entity()
		: m_Name("Unknown") {}
	Entity(const std::string& name)
		: m_Name(name) {}

	virtual const std::string& GetName() const { return m_Name; }
	std::string GetClassName() override { return "Entity"; }
};

class Player : public Entity
{
private:
	std::string m_Name;
public:
	Player(const std::string& name)
		: m_Name(name) {}

	const std::string& GetName() const override { return m_Name; }
	std::string GetClassName() override { return "Player"; }
};
