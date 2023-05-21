#include <iostream>
using namespace std;

class Log{

    public:
        const int logLevelError = 0;
        const int logLevelWarning = 1;
        const int logLevelInfo = 2;

    private:
        int m_warningLevel = logLevelInfo;

    public:
        void SetLevel(int level){
            m_warningLevel = level;
        }

        void Error(const char* message){
            if(m_warningLevel >= 0)
                cout << "[ERROR] " << message << endl;
        }

        void Warn(const char* message){
            if(m_warningLevel >= 1)
                cout << "[WARNING] " << message << endl;
        }

        void Info(const char* message){
            if(m_warningLevel >= 2)
                cout << "[INFO] " << message << endl;
        }
};

int main(){
    Log log;

    // int level;
    // cout << "Enter message type level" << endl;
    // cin >> level;
    log.SetLevel(log.logLevelError);
    log.Warn("Pongal!");
    log.Error("Henlo!");
    log.Info("Wah!");

    return 0;
}