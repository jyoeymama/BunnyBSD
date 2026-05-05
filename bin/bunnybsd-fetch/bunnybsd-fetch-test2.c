/* 
.\"-
.\" Copyright (c) 1989, 1990, 1993
.\"	The Regents of the University of California.  All rights reserved.
.\"
.\" This code is derived from software contributed to Berkeley by
.\" the Institute of Electrical and Electronics Engineers, Inc.
.\"
.\" Redistribution and use in source and binary forms, with or without
.\" modification, are permitted provided that the following conditions
.\" are met:
.\" 1. Redistributions of source code must retain the above copyright
.\"    notice, this list of conditions and the following disclaimer.
.\" 2. Redistributions in binary form must reproduce the above copyright
.\"    notice, this list of conditions and the following disclaimer in the
.\"    documentation and/or other materials provided with the distribution.
.\" 3. Neither the name of the University nor the names of its contributors
.\"    may be used to endorse or promote products derived from this software
.\"    without specific prior written permission.
.\"
.\" THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
.\" ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
.\" IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
.\" ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
.\" FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
.\" DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
.\" OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
.\" HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
.\" LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
.\" OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
.\" SUCH DAMAGE.
.\"
*/

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

int main(int argc, char *argv[]) {
FILE *fp;
char path[1035]
fp = popen("bunnybsd-version");
if (fp == NULL) {
printf("Failed to run command\n");
exit(1);
}
while (fgets(path, sizeof(path), fp) != NULL) {
printf("%s", path);
}
pclose(fp);
printf("BunnyBSD: Security with a cute bunny.\n");
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
