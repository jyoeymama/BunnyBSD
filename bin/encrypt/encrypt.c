/* 
Crappy code written by jyomama28. Email me at: jyomama28@gmail.com

Explonation of how this command should work:
1. Choose an option of a type of encryption,
2. Choose a file to encrypt (using the directory that you are in because C dosent like backslashes for full directories because formatting specifier blah blah blah.
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
