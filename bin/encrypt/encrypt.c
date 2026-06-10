/* 
Crappy code written by jyomama28. Email me at: jyomama28@gmail.com

WARNING: This is jsut a base for the command but I am happy with this crappy base so far.

Explonation of how this command should work:
1. Choose an option of a type of encryption,
2. Choose a file to encrypt (using the directory that you are in because C dosent like backslashes for full directories because formatting specifier blah blah blah.

Another thing:

I am a Chrisitan and I need to start posting these in my code so other developers who read this crappy code may read this Bible verse as well.
Jesus saved my life so I must repay him with what I do with my time and that is programming!
I understand that not every developer is a Christian but if you are not I encourage you to try reading the Bible as it might change your life like it did for me!

I also understand that having my own operating system is a crazy dream but I plan to turn this dream into a reality!

Philippians 4:13

"I can do all things through Him who gives me strength"

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <crypt.h>

int main (argc, *argv[]) {
printf("Encrypt any file with one simple command!\n");
printf("Types of encryption: \n");
printf("1. base64, 2. xor, 3. aes-256\n");
printf("4. blowfish, 5. chahca20, 6. rsa\n");

int enctype;
scanf("%d\n", enctype);

if (enctype == 1) {
printf("Using base64 to encrypt your file. Please wait.\n");
/*
char b64table[] = "abcdefghijklomnpqrstuvwxyzABCDEFGHIJKLOMNPQRSTUVWXYZ1234567890+/=";
char* b64 encode(const unsigned char* data) {
int choice;
scanf("%d\n", &choice);
return encoded_string;
*/
} else if (enctype == 2) {
printf("Using xor to encrypt your file. Please wait.\n");
} else if (enctype == 3) {
printf("Using aes-256 to encrypt your file. Please wait.\n");
} else if (enctype == 4) {
printf("Using blowfish to encrypt your file. Please wait.\n");
} else if (enctype == 5) {
printf("Using chacha20 to encrypt your file. Please wait.\n");
} else if (enctype == 6) {
printf("Using rsa to encrypt your file. Please wait.\n");
} else {
printf("Error: Must choose options 1-6);
}
    
return 0; 
}
