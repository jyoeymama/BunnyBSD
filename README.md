FreeBSD Source:
---------------
This is the top level of the FreeBSD source directory.

FreeBSD is an operating system used to power modern servers, desktops, and embedded platforms.
A large community has continually developed it for more than thirty years.
Its advanced networking, security, and storage features have made FreeBSD the platform of choice for many of the busiest web sites and most pervasive embedded networking and storage devices.

For copyright information, please see [the file COPYRIGHT](COPYRIGHT) in this directory.
Additional copyright information also exists for some sources in this tree - please see the specific source directories for more information.

The Makefile in this directory supports a number of targets for building components (or all) of the FreeBSD source tree.
See build(7), config(8), [FreeBSD handbook on building userland](https://docs.freebsd.org/en/books/handbook/cutting-edge/#makeworld), and [Handbook for kernels](https://docs.freebsd.org/en/books/handbook/kernelconfig/) for more information, including setting make(1) variables.

For information on the CPU architectures and platforms supported by FreeBSD, see the [FreeBSD
website's Platforms page](https://www.freebsd.org/platforms/).

For official FreeBSD bootable images, see the [release page](https://download.freebsd.org/ftp/releases/ISO-IMAGES/).

Source Roadmap:
---------------
| Directory | Description |
| --------- | ----------- |
| bin | System/user commands. |
| cddl | Various commands and libraries under the Common Development and Distribution License. |
| contrib | Packages contributed by 3rd parties. |
| crypto | Cryptography stuff (see [crypto/README](crypto/README)). |
| etc | Template files for /etc. |
| gnu | Commands and libraries under the GNU General Public License (GPL) or Lesser General Public License (LGPL). Please see [gnu/COPYING](gnu/COPYING) and [gnu/COPYING.LIB](gnu/COPYING.LIB) for more information. |
| include | System include files. |
| kerberos5 | Kerberos5 (Heimdal) package. |
| lib | System libraries. |
| libexec | System daemons. |
| release | Release building Makefile & associated tools. |
| rescue | Build system for statically linked /rescue utilities. |
| sbin | System commands. |
| secure | Cryptographic libraries and commands. |
| share | Shared resources. |
| stand | Boot loader sources. |
| sys | Kernel sources (see [sys/README.md](sys/README.md)). |
| targets | Support for experimental `DIRDEPS_BUILD` |
| tests | Regression tests which can be run by Kyua.  See [tests/README](tests/README) for additional information. |
| tools | Utilities for regression testing and miscellaneous tasks. |
| usr.bin | User commands. |
| usr.sbin | System administration commands. |

For information on synchronizing your source tree with one or more of the FreeBSD Project's development branches, please see [FreeBSD Handbook](https://docs.freebsd.org/en/books/handbook/cutting-edge/#current-stable).

**WELCOME TO BUNNYBSD!**


<img width="1014" height="980" alt="BunnyBSDLogoFixed" src="https://github.com/user-attachments/assets/df8861b5-0581-47e5-8923-c8c08ad3e17c" />




**BunnyBSD Table Of Contents:**

**|-----------------------------------|**
**| Documentation | Short description |**
**| Introduction  | An introduction to BunnyBSD |**
**| Contributing | An introduction to the contributing process |**
**| Policy | Our policy |**
**| Supporters | How you can support BunnyBSD |**
**| Extended Documentation | Furthur documentation for BunnyBSD |**
**| Future Updates | Provides context for future changes and updates to BunnyBSD |**
**|------------------------------------------------------------------------------|**

**Introduction:**

BunnyBSD is a completley open source operating system based on FreeBSD. I anticipate this being a long term personal project for myself. Anyone who wants to help may join. The foundation of my operating system BunnyBSD is based upon privacy, security, while providing a stable choice for users of all kinds to use our operating system. I intend to make BunnyBSD a great operating system thats primarily meant for desktop usage. My goal is for BunnyBSD to be a industry standard operating system choice for people all over the world to use on a daily basis. BunnyBSD also will allow the user to have full control over everything about their operating system as it should be. I hope to see the day that BunnyBSD becomes a stable desktop that all users can enjoy. Thank you for all the support I have recived throughout all of my crazy projects. Your support means the world to me and I deeply appreciate my supporters. Development of BunnyBSD will be a very difficult and time consuming project but I have no intentions of quiting. Thank you for reading, The lead developer of BunnyBSD, -Jyomama28

**Contributing:**

BunnyBSD needs contributors like you! You can help advance BunnyBSD. We need lots of people for help with contributation.
We need: 
Hackers/Bug hunters
Developers
Maintainers
If you would like to help with contributation on BunnyBSD, simply create a pull request, change the code or modify it, and then finally merge with the main BunnyBSD repository.

Hackers/Bug hunters: Hello, I am jyomama28, I am the head developer of BunnyBSD and I need your help! If you would like to assist with the development of BunnyBSD you can start right away! You may look through all the source code to help us hunt for bugs and vulnrabillities that need to be patched. Once you believe you have found a bug/exploit/vulnrabittly you can go ahead and make a post in the issues tab. All things pertaining to finding exploits/bugs/vulnrabillities must be put in the issues tab and labeled as a bug/exploit/vulnrabillity. You must provide written evidence and a proof of concept. You must be able to demonstrate or show the bug/exploit/vulnrabillity. Once you have found a bug I or any other developer will go through and patch it. WARNING: ANYTHING WRITTEN BY AI, SPOTTED BY AI WILL RESULT IN A AUTOMATIC DECLINE AND I WILL REFUSE TO LOOK AT YOUR ISSUE IF I CAN TELL YOU USED AI. 

Developers: Hello developers! I need your help! If you would like to assist with the development of BunnyBSD simply create a pull request, fix, modify, or change the code and then get your changes reviewed. I will look at the changes and either accept or decline a request to merge it with the main repository. Please keep in mind that absolutley ANY usage of AI will result in a automatic decline. If I decline your merge request then I will make sure to tell you why and always provide you a description.

Maintainers: Hello maintainers! I need your help! If you would like to assist with maintiang things such as issues, bugs, or merge requests please feel free to help! If you would like to become a maintainer of BunnyBSD then please send me an email at: jyomama28@gmail.com so I can give you the nessesary permissions to change/look at things on the BunnyBSD repository.

**Policy:**

Welcome to the Policy section of BunnyBSD. Our policy includes things such as our stance on age verification, AI usage within BunnyBSD and more.

**Age Verification:**

Age verification has been becoming more and more widespread and this hurts things like Linux distros and BSD distros. Many of you may wonder what my stance on age verification is. My stance on age verification is that this is garbage and that these laws must be stopped.

**To our users/supporters of BunnyBSD, WE WILL NEVER ADD AGE VERIFICATION OR ANY OTHER TYPE OR SURVALIANCE EVER! I, jyomama28, REFUSE AGE VERIFICATION AND ALL ATTEMPTS TO CRIMILIZE ME AS A OPERATING SYSTEM DEVELOPER! BunnyBSD will remain a safe space where our users/supporters can always trust. BunnyBSD will always remain YOUR operating system and I believe that the user should get to decide what happens to this operating system. I will keep this repository public for all to use no matter what state, country, etc.**

**AI usage within BunnyBSD:**

**AI usage within BunnyBSD is STRICTLY PROHIBITIED! Any use with AI will result in a automatic decline from myself or any other maintainer. Any code, exploit proof of concept demonstration, or merge request containing AI or AI written code will be declined.**

**Supporters:**

Hello supporters! Thank you for supporting BunnyBSD. If you would like to support us, check out the contributng section of our documentation! Any stars help! THANK YOU SUPPORTERS OF BUNNYBSD!

**Extended Documentation:**

Our extended documentation can be found in our BunnyBSD Documentation folder on this repository! More will continue to show up there and I will continue to add more things to support our extended documentation to help our users/supporters on BunnyBSD.

**Future Updates**

Hello! I am jyomama28, the main developer for BunnyBSD. I have many things that I would like to update. I will make a nice list below of things that will be changed or updated:

