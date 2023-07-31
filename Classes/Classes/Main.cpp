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


	void SetLogLevel(Level level)
	{
		m_LogLevel = level;
	}


	void Error(const char* message)
	{
		if (m_LogLevel >= LevelError)
			std::cout << "[ERROR]: " << message << std::endl;
	}
	void Error(std::string message)
	{
		if (m_LogLevel >= LevelError)
			std::cout << "[ERROR]: " << message << std::endl;
	}

	void Warn(const char* message)
	{
		if (m_LogLevel >= LevelWarning)
			std::cout << "[WARNING]: " << message << std::endl;
	}
	void Warn(std::string message)
	{
		if (m_LogLevel >= LevelWarning)
			std::cout << "[WARNING]: " << message << std::endl;
	}

	void Info(const char* message)
	{
		if (m_LogLevel >= LevelInfo)
			std::cout << "[INFO]: " << message << std::endl;
	}
	void Info(std::string message)
	{
		if (m_LogLevel >= LevelInfo)
			std::cout << "[INFO]: " << message << std::endl;
	}


	~Log()
	{

	}
};

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

	std::cin.get();
}