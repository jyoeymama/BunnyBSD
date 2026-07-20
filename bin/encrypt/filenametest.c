
/*
 *                                                                                                                                                             ^
 *               
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
 *
 * Crappy code written by jyomama28. Email me at: jyomama28@gmail.com
 *
 *
 * To explain this program, basically im testing to  see wheather i can type a full filename and see if it renders the period in the file (for example filename.txt)
 *                                                                                                                                                             ^
 *                                                                                                                                                             |
 * Always gotta add a bible verse to make this program even cooler B)                                                                                                                                                         That thingy

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
 *     _                       ___       _  ___             _ 
 *    | | ___  ___ _   _ ___  |_ _|___  | |/ (_)_ __   __ _| |
 * _  | |/ _ \/ __| | | / __|  | |/ __| | ' /| | '_ \ / _` | |
 *| |_| |  __/\__ \ |_| \__ \  | |\__ \ | . \| | | | | (_| |_|
 * \___/ \___||___/\__,_|___/ |___|___/ |_|\_\_|_| |_|\__, (_)
 *                                                    |___/   
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
