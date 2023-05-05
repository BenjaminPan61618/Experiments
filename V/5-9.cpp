#include <iostream>
#include <windows.h> // Windows 系统使用#include <windows.h>, Unix/Linux 系统换用  #include <unistd.h>, 为调用 sleep(1)语句引入.
#include <ctime>
using namespace std;

class Clock {
private:
    int hour;
    int minute;
    int second;
    int alarmHour;
    int alarmMinute;
    int alarmSecond;
public:
    void SetAlarm(int hour, int minute, int second) {
        alarmHour = hour;
        alarmMinute = minute;
        alarmSecond = second;
    }
    void run() {
        while (true) {
            time_t now = time(0);
            tm *ltm = localtime(&now);
            int currentHour = ltm->tm_hour;
            int currentMinute = ltm->tm_min;
            int currentSecond = ltm->tm_sec;
        printf("Now:%02d:%02d:%02d\n", currentHour, currentMinute, currentSecond);
        
            if (currentHour == alarmHour && currentMinute == alarmMinute && currentSecond == alarmSecond) {
                cout << "Plink!Plink!Plink!Plink!..." << endl;
                break;
            }
            else
                sleep(1);
        }
    }
}; 

int main(){
	int h,m,s;
	Clock Alarm1;
	cout<<"Input time (hh mm ss) to set an alarm:";
	cin>>h>>m>>s;
	Alarm1.SetAlarm(h,m,s);
	Alarm1.run();
	return 0;
	}


