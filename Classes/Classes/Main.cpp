#include <iostream>
#include <string>

#include "Entity.h"


class Log
{
public: 
	enum Level : char
	{
		LevelError = 0, LevelWarning, LevelInfo
	};
private:
	Level m_LogLevel = LevelInfo;
public:

	Log()
	{
		m_LogLevel = LevelInfo;
	}

	Log(Level level)
	{
		m_LogLevel = level;
	}


	void SetLogLevel(const Level& level)
	{
		m_LogLevel = level;
	}


	void Error(const char* message) const
	{
		if (m_LogLevel >= LevelError)
			std::cout << "[ERROR]: " << message << std::endl;
	}
	void Error(const std::string& message) const
	{
		if (m_LogLevel >= LevelError)
			std::cout << "[ERROR]: " << message << std::endl;
	}

	void Warn(const char* message) const
	{
		if (m_LogLevel >= LevelWarning)
			std::cout << "[WARNING]: " << message << std::endl;
	}
	void Warn(const std::string& message) const
	{
		if (m_LogLevel >= LevelWarning)
			std::cout << "[WARNING]: " << message << std::endl;
	}

	void Info(const char* message) const
	{
		if (m_LogLevel >= LevelInfo)
			std::cout << "[INFO]: " << message << std::endl;
	}
	void Info(const std::string& message) const
	{
		if (m_LogLevel >= LevelInfo)
			std::cout << "[INFO]: " << message << std::endl;
	}
	void Info(const int& message) const
	{
		if (m_LogLevel >= LevelInfo)
			std::cout << "[INFO]: " << message << std::endl;
	}

	~Log()
	{

	}
};

void Print(IPrintable* obj)
{
	std::cout << obj->GetClassName() << std::endl;
}


int main()
{
	Log log;
	log.SetLogLevel(Log::LevelInfo);
	log.Error("Error!");
	log.Warn("Warning!");
	log.Info("Information!");

	std::cout << "=============================" << std::endl;


	Entity* entity = new Entity();
	log.Info(entity->GetName());

	Player* player = new Player("Giza");
	log.Info(player->GetName());

	Entity* entityP = player;
	log.Info(entityP->GetName());

	Player* player2 = new Player("Hinfe", 23);
	log.Info(player2->GetAge());

	std::cout << "=============================" << std::endl;

	
	Print(entity);
	Print(player);

	delete entity, player;

	std::cin.get();
}