#ifndef TIME_H_INCLUDED
#define TIME_H_INCLUDED
using namespace std;
class timeStamp
{
private:
    int seconds;
    int minutes;
    int hours;
public:
    timeStamp()
    {
       seconds=0;
       minutes=0;
       hours=0;
    }
    timeStamp(int s,int m,int h)
    {
       seconds=s;
       minutes=m;
       hours=h;
    }
    void print()
    {
        cout<<hours<<":"<<minutes<<":"<<seconds<<endl;
    }
     // Comparison operators for sorting
    bool operator<(const timeStamp& t) const {
        if (hours != t.hours)
            return hours < t.hours;
        if (minutes != t.minutes)
            return minutes < t.minutes;
        return seconds < t.seconds;
    }

    bool operator>(const timeStamp& t) const {
        return !(*this < t || *this == t);
    }

    bool operator==(const timeStamp& t) const {
        return (hours == t.hours && minutes == t.minutes && seconds == t.seconds);
    }
    bool operator!=(const timeStamp& t) const {
        return !(*this == t); // Logical negation of equality
    }


};


#endif // TIME_H_INCLUDED
