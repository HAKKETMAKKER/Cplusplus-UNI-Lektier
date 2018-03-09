#ifndef HEARTRATE_H
#define HEARTRATE_H


class HeartRate
{
public:
    HeartRate();
    HeartRate(int hr, int time);

    void setHeartRate(int hr);
    void setTime(int time);

    int getHeartRate(int time);
    int getTime();

private:
    int _hr;
    int _time;

};

#endif // HEARTRATE_H
