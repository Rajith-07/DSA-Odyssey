class Solution {
public:
    double angleClock(int hour, int minutes) {
        if (hour == 12) hour = 0; 

        double x = abs(5.5*minutes - 30*hour);

        return (x>180)? 360-x: x;
    }
};