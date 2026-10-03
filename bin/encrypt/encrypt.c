/* 
 * SPDX-License-Identifier: BSD-2-Clause
 *
 * Copyright (c) 1993 Andrew Moore, Talke Studio.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.

Crappy code written by jyomama28. Email me at: jyomama28@gmail.com

WARNING: This is jsut a base for the command but I am happy with this crappy base so far.

Explonation of how this command should work:
1. Choose an option of a type of encryption,
2. Choose a file to encrypt (using the directory that you are in because C dosent like backslashes for full directories because formatting specifier blah blah blah.

*/

//WE GOT OURSELVES A SEG FAULT
//UPDATE: Seg fault found. I missed the & symbol when doing my scanf bruh classic rookie mistake lol.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char *argv[]) {
printf("Encrypt any file with one simple command!\n");
printf("WARNING: MUST BE ROOT TO RUN THIS COMMAND!\n");
printf("Types of encryption: \n");
printf("1. BASE64, 2. XOR, 3. AES-256\n");
printf("4. BLOWFISH, 5. RSA-2048\n");

int enctype;
scanf("%d\n", &enctype);

if (enctype == 1) {
printf("You chose BASE64. Please go to the proper directory with the file you want to encrypt.\n");
printf("Using BASE64 to encrypt your file. Please wait.\n");

/*
 * I will be making a list of each table or general information before I start writing the main foundation of each encryption algorithim to reduce brain meltage lol.
 * BASE64 
char b64table[] = "abcdefghijklomnpqrstuvwxyzABCDEFGHIJKLOMNPQRSTUVWXYZ1234567890+/=";
char* b64 encode(const unsigned char* data) {
int choice;
scanf("%d\n", &choice);
return encoded_string;
*/

/*
 * XOR
 * char key = "B" <-- this is a rough base for the key, I will later add an option to where you can change the key to whatever you like
 */

/* 
 * AES-256
 * For aes-256 I will be using an external library written in c for aes-256 called Tiny AES in C. Credit to these very smart people go to this repository I found on github: https://github.com/kokke/tiny-AES-c
 */

/*
 * BLOWFISH
 * For blowfish I will be referring to this repository: https://github.com/Musashii-kun/blowfish
 */

/*
 * CHACHA20
 * For chacha20 I will be reffering to this repository: https://github.com/Ginurx/chacha20-c/tree/master
 * In this case I will use chacha20 for encrypted communications and NOT for files.
 */

/*
 * RSA
 * Public keys: n, e
 * Private keys: n, d
 * I will have a strong an unbreakable way to generate both keys. WARNING: RSA CAN BE CRACKED! USE AT YOUR OWN RISK!
 * I will later make an option to choose how many bits you want. The strongest for RSA right now is probably RSA-2048 bit encryption but people are saying that quantum computers can crack this but idk.
 */

	
} else if (enctype == 2) {
printf("WARNING: XOR can potentially be cracked! Use at your own risk!\n");
printf("You chose XOR. Please go to the proper directory with the file you want to encrypt.\n");
//printf("Using XOR to encrypt your file. Please wait.\n");
} else if (enctype == 3) {
printf("You chose AES-256. Please go to the proper directory with the file you want to encrypt.\n");
//printf("Using AES-256 to encrypt your file. Please wait.\n");
} else if (enctype == 4) {
printf("You chose BLOWFISH. Please go to the proper directory with the file you want to encrypt.\n");
//printf("Using BLOWFISH to encrypt your file. Please wait.\n");
} 
/*
else if (enctype == 5) {
printf("You chose chacha20. Please go to the proper directory with the file you want to encrypt.\n");
printf("Using chacha20 to encrypt your file. Please wait.\n");
}
*/
else if (enctype == 5) {
printf("WARNING: RSA-2048 can potentially be cracked! Use at your own risk!\n");
printf("You chose RSA-2048. Please go to the proper directory with the file you want to encrypt.\n");
//printf("Using RSA to encrypt your file. Please wait.\n");
} else {
printf("Error: Must choose options 1-5\n");
}
	
int option;
printf("Are you in the correct directory with the file you want to encrypt? (1 = yes, 2 = no) \n");
scanf("%d\n", &option);
	
if (option == 1) {
printf("Great, please link to the correct file\n");
printf("Type the file name: \n");
} else if (option == 2) {
printf("Please go to the correct directory with the file that you want to encrypt\n");
} else {
printf("Error: Must choose options 1 or 2\n");
}

return 0; 
}
