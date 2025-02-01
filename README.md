[![](https://img.shields.io/discord/994839212618690590?color=%235865F2&label=Discord&logo=discord&logoColor=ffffff&style=plastic)](https://discord.gg/T4faGveujK)<br/>
![Mario Party Decompilation Discord](https://media.discordapp.net/attachments/872764411851452416/994832403195498506/MarioParty3Logo4.png)

# Building
This project has only been tested on Ubuntu (22.04 LTS) WSL2 on windows, but should also work for native linux
1) Run `./tools/install.sh` to get the dependencies and set up a virtual python environment
2) Copy a US rom of mario party 3 named `baserom.us.z64` to the root of the repo
3) Run `make setup` which will generate assembly files for nonmatched functions and a linker script. Then run `make -j` to compile.
To fully clear out the asm files, run `make distclean` which will require another `make setup` and `make -j` to compile again
