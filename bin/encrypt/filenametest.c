/*
 * To explain this program, basically im testing to  see wheather i can type a full filename and see if it renders the period in the file (for example filename.txt)
 *                                                                                                                                                             ^
 *                                                                                                                                                             |
 *                                                                                                                                                          That thingy
 *
 * Always gotta add a bible verse to make this program even cooler B)
 *
 * Todays verse:
 *
 * Exodus 20:8 
 *
 * “Remember the Sabbath day, to keep it holy.”
 *
 *      _
 *     | |
 *  ___| |__  
 * |___   __|
 *     | |
 *     | |
 *     |_|
 *
      _                       ___       _  ___             _ 
     | | ___  ___ _   _ ___  |_ _|___  | |/ (_)_ __   __ _| |
  _  | |/ _ \/ __| | | / __|  | |/ __| | ' /| | '_ \ / _` | |
 | |_| |  __/\__ \ |_| \__ \  | |\__ \ | . \| | | | | (_| |_|
  \___/ \___||___/\__,_|___/ |___|___/ |_|\_\_|_| |_|\__, (_)
                                                     |___/   
 * Jyomama28!
 */    



#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
printf("Hello, type the file name please: \n");
char file[8]; // <-- I set this to 8 because thats how many characters are in: file.txt
scanf("%s\n", &file);
printf("Your file is: %s\n", file);
printf("Did it work? \n"); // <-- IT WORKED BABY! I am very happy since this solves my problem of not being able to have backslashes in full directories without C complaining B) 
return 0;
}
