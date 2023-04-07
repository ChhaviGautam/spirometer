int pulse_count = 0;
//counters for counting current and previous timing
int rpm_count = 0;
Void setup()
{
//setting serial monitor for communicating with
Arduino IDE
//assigning rotary encoder pins as input
//using attachInterrupt() method for calling loop()
//using millis() for counting timing(ms) in
counters
}
Void loop()//will be called if pretime - currentime
> specific interval
{
Previous timing = current timing milliseconds
Rpm_count = (total number of pulses(in a
second)*60)/(number of pulses in one revolution)
print(rpm_count);
}