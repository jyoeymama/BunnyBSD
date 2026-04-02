// Crappy code written by jyomama28. email me at jyomama28@gmail.com

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
printf("Checking local wifi networks...\n");
system("ifconfig wlan0 up" > upwifinetworks.txt");
system("ifconfig wlan0 scan" > wifinetworksscan.txt");
printf("Saved wifi network information to upwifinetworks.txt and wifinetworksscan.txt\n");
return 0;
}
