#include <iostream>

class Log
{
public: 
	const int logLevelError = 0;
	const int logLevelWarning = 1;
	const int logLevelInfo = 2;
private:
	int m_LogLevel = logLevelInfo;
public:
	void SetLogLevel(int level)
	{
		m_LogLevel = level;
	}

	void Error(const char* message)
	{
		if (m_LogLevel >= logLevelError)
			std::cout << "[ERROR]: " << message << std::endl;
	}
	void Warn(const char* message)
	{
		if (m_LogLevel >= logLevelWarning)
			std::cout << "[WARNING]: " << message << std::endl;
	}
	void Info(const char* message)
	{
		if (m_LogLevel >= logLevelInfo)
			std::cout << "[INFO]: " << message << std::endl;
	}
};

int main()
{
	Log log;
	log.SetLogLevel(log.logLevelWarning);
	log.Warn("Warning!");
	std::cin.get();
}