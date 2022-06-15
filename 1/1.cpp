#include <iostream>

void reading(int &hours, int &minutes);
void transferingToAngle(int hours, int minutes, float &hourAngle, float &minuteAngle);
void calculatingLesserAngle(float hourAngle, float minuteAngle, float& result);

using namespace std;
int main()
{
    int hours, minutes;
    float hourAngle, minuteAngle, result;
    reading(hours, minutes);
    transferingToAngle(hours, minutes, hourAngle, minuteAngle);
    calculatingLesserAngle(hourAngle, minuteAngle, result);
    cout << "Lesser angle is " << result << endl;
    return main();
}

void reading(int& hours, int& minutes)
{
    bool correctHours = false, correctMinutes = false;
    while (correctHours != true)
    {
        cout << "Input analogue clock hours ";
        cin >> hours;
        if (hours > 12 || hours < 1)
        {
            cout << "Range of analogue clock is 1-12" << endl;
            correctHours = false;
        }
        else correctHours = true;
    }
    while (correctMinutes != true)
    {
        cout << "Enter minutes ";
        cin >> minutes;
        if (minutes > 59 || minutes < 0)
        {
            cout << "Range of minutes is 0-59" << endl;
            correctMinutes = false;
        }
        else correctMinutes = true;
    }
};

void transferingToAngle(int hours, int minutes, float& hourAngle, float& minuteAngle)
{
    hourAngle = (hours * 30) + minutes * 0.5;
    minuteAngle = minutes * 6;
}

void calculatingLesserAngle(float hourAngle, float minuteAngle, float &result)
{
    float angle1, angle2;
    if (hourAngle > minuteAngle)
    {
        angle1 = hourAngle - minuteAngle;
        angle2 = 360 - (hourAngle - minuteAngle);
    }
    if (minuteAngle > hourAngle)
    {
        angle1 = minuteAngle - hourAngle;
        angle2 = 360 - (minuteAngle - hourAngle);
    }
    if (angle1 > angle2) result = angle2;
    else if (angle2 > angle1) result = angle1;
    else result = 0;
};