// Crappy code written by jyomama28. Email me at jyomama28@gmail.com
/*

⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡴⠋⠙⢦⠀⣀⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⢀⡞⠀⠀⢀⡼⠋⠁⠀⣙⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⣼⠀⠀⡰⠋⠀⢀⡴⢋⡽⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⢠⡇⢀⡼⠁⠀⣠⠏⣠⠞⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⣀⡤⠴⠾⠶⠾⠁⠀⣰⡷⠚⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⣠⠞⠁⢀⣀⠀⠀⠀⠀⠘⡏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⢰⠃⠀⠀⠘⠛⠀⠀⠀⠀⠀⠿⣤⣀⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⡏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠙⠒⠦⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠙⢄⡀⠀⠀⠀⢀⣠⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠳⣄⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠉⠙⠛⢻⠏⠀⠀⠀⠀⠀⠀⠀⢀⣀⡀⠀⠀⠀⠀⠈⣇⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⢸⠀⠀⠀⠀⠀⠀⢀⡞⠉⠀⠀⠀⠀⠀⠀⠀⢸⡄⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠈⣇⠀⠀⠀⠀⠀⢸⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣧⠖⠋⠉⢷⠀
⠀⠀⠀⠀⠀⠀⠀⠈⢦⠀⠀⠀⠀⠈⢳⡀⠀⠀⠀⠀⠀⠀⠀⢀⡇⠀⠀⠀⡾⠀
⠀⠀⠀⠀⠀⠀⡴⠒⠛⠀⠀⡴⠒⠒⠒⠛⠃⠀⠀⠀⠀⠀⠀⣸⠧⣤⠤⠞⠁⠀
⠀⠀⠀⠀⠀⠸⣅⣀⣀⣀⣠⣇⣀⣀⣀⣀⣀⣀⣀⣀⣤⡤⠞⠁⠀⠀⠀⠀⠀⠀
*/

// This is just what I want the bunnybsd-fetch to look like:
// More or less just an example and representation of what I would like from this command.
// I will make it easy for people to change anything in the bunnybsd-fetch command as well.

// UPDATE: After a little test things are not working because I forgot \n!

// Also, I want it to be a solution to fastfetch. No external packages needed just run a built in command.
// I will later have it list system stats as well.

// ANOTHER UPDATE: I fixed the bug and things work fine on the test. I cannot do ascii art with a double backslash or it messes things up (because its a formatting specifier).
#include <stdio.h>
#include <stdlib.h>

int main() {
printf("BunnyBSD Verison 1.0.0\n");
printf("⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡴⠋⠙⢦⠀⣀⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
printf("⠀⠀⠀⠀⠀⠀⠀⠀⢀⡞⠀⠀⢀⡼⠋⠁⠀⣙⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
printf("⠀⠀⠀⠀⠀⠀⠀⠀⣼⠀⠀⡰⠋⠀⢀⡴⢋⡽⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
printf("⠀⠀⠀⠀⠀⠀⠀⢠⡇⢀⡼⠁⠀⣠⠏⣠⠞⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
printf("⠀⠀⠀⠀⣀⡤⠴⠾⠶⠾⠁⠀⣰⡷⠚⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
printf("⠀⠀⣠⠞⠁⢀⣀⠀⠀⠀⠀⠘⡏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
printf("⠀⢰⠃⠀⠀⠘⠛⠀⠀⠀⠀⠀⠿⣤⣀⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
printf("⠀⡏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠙⠒⠦⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
printf("⠀⠙⢄⡀⠀⠀⠀⢀⣠⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠳⣄⠀⠀⠀⠀⠀⠀⠀\n");
printf("⠀⠀⠀⠉⠙⠛⢻⠏⠀⠀⠀⠀⠀⠀⠀⢀⣀⡀⠀⠀⠀⠀⠈⣇⠀⠀⠀⠀⠀⠀\n");
printf("⠀⠀⠀⠀⠀⠀⢸⠀⠀⠀⠀⠀⠀⢀⡞⠉⠀⠀⠀⠀⠀⠀⠀⢸⡄⠀⠀⠀⠀⠀\n");
printf("⠀⠀⠀⠀⠀⠀⠈⣇⠀⠀⠀⠀⠀⢸⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣧⠖⠋⠉⢷⠀\n");
printf("⠀⠀⠀⠀⠀⠀⠀⠈⢦⠀⠀⠀⠀⠈⢳⡀⠀⠀⠀⠀⠀⠀⠀⢀⡇⠀⠀⠀⡾⠀\n");
printf("⠀⠀⠀⠀⠀⠀⡴⠒⠛⠀⠀⡴⠒⠒⠒⠛⠃⠀⠀⠀⠀⠀⠀⣸⠧⣤⠤⠞⠁⠀\n");
printf("⠀⠀⠀⠀⠀⠸⣅⣀⣀⣀⣠⣇⣀⣀⣀⣀⣀⣀⣀⣀⣤⡤⠞⠁⠀⠀⠀⠀⠀⠀\n");
return 0;
}
