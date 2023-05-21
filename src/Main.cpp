#include <iostream>
using namespace std;

class Log{

    public:

        enum Level{
            LevelError = 0, LevelWarning, LevelInformation
        };

        // const int logLevelError = 0;
        // const int logLevelWarning = 1;
        // const int logLevelInfo = 2;

    private:
        Level m_warningLevel = LevelInformation;

    public:
        void SetLevel(Level level){
            m_warningLevel = level;
        }

        void Error(const char* message){
            if(m_warningLevel >= LevelError)
                cout << "[ERROR] " << message << endl;
        }

        void Warn(const char* message){
            if(m_warningLevel >= LevelWarning)
                cout << "[WARNING] " << message << endl;
        }

        void Info(const char* message){
            if(m_warningLevel >= LevelInformation)
                cout << "[INFO] " << message << endl;
        }
};

int main(){
    Log log;

    // int level;
    // cout << "Enter message type level" << endl;
    // cin >> level;
    log.SetLevel(Log::LevelError);
    log.Warn("Pongal!");
    log.Error("Henlo!");
    log.Info("Wah!");

    return 0;
}