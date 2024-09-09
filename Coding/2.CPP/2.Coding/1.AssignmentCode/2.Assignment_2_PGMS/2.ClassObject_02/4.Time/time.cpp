#include <iostream>

using namespace std;

class Time
{
private:
    int hours;
    int minutes;
    int seconds;
    friend void PrintTime(const Time &time);

public:
    Time(int hours, int minutes, int seconds) : hours(hours), minutes(minutes), seconds(seconds) {}
    Time add(const Time &other) const
    {
        int totalSeconds = toSeconds() + other.toSeconds();
        int newHours, newMinutes, newSeconds;
        fromSeconds(totalSeconds, newHours, newMinutes, newSeconds);
        return Time(newHours, newMinutes, newSeconds);
    }

    int toSeconds() const
    {
        return hours * 3600 + minutes * 60 + seconds;
    }

    static void fromSeconds(int totalSeconds, int &hours, int &minutes, int &seconds)
    {
        hours = totalSeconds / 3600;
        minutes = (totalSeconds % 3600) / 60;
        seconds = totalSeconds % 60;
    }
};
void PrintTime(const Time &time)
{
    cout << time.hours << ":" << time.minutes << ":" << time.seconds << endl;
};

int main(int argc, char const *argv[])
{
    Time time1(10, 30, 12);
    Time time2(2, 45, 2);

    Time result = time1.add(time2);
    cout << "First time: ";
    PrintTime(time1);
    cout << "Second time: ";
    PrintTime(time2);
    cout << "Result time: ";
    PrintTime(result);
    return 0;
}
