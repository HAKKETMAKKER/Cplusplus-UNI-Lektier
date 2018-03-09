#include "heartrate.h"
#include "trainingsession.h"
#include <fstream>
#include <iostream>

using namespace std;

HeartRate::HeartRate(){
}
/*Constructor to create "HeartRate" objects,
that show the heartrate at a specific time */
HeartRate::HeartRate(int hr, int time){
    _hr = hr;
    _time = time;
}

//sets the heartrate on an object of heartrate
void HeartRate::setHeartRate(int hr){
    _hr = hr;
}

//sets the time on an object of heartrate
void HeartRate::setTime(int time){
    _time = time;
}

//Return the heartrate at a specific time
//Gøres igennem brug af vector?
int HeartRate::getHeartRate(int time){

}

//Return the time of a specific heartrate
//Gøres igennem brug af vector?
int HeartRate::getTime(){
}
