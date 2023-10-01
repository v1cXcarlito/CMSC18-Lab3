#include<stdio.h>

int main(){
    int inputSeconds;
    int days, hours, minutes, seconds;
    
    printf("Enter the number of seconds: ");
    scanf("%d", &inputSeconds);

    int secondsInADay = 86400;
    int secondsInAMinute = 60;
    int secondsInAnHour = 3600;

    days = inputSeconds / secondsInADay;
    hours = (inputSeconds % secondsInADay) / secondsInAnHour;
    minutes = (inputSeconds % secondsInADay) % secondsInAnHour / secondsInAMinute;
    seconds = (inputSeconds % secondsInADay) % secondsInAnHour % secondsInAMinute;

    printf("Output: %lu is %d day(s), %d hour(s), %d minute(s), %d second(s).", inputSeconds, days, hours, minutes, seconds);
}