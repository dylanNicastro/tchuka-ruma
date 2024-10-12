# Tchuka Ruma
Tchuka Ruma is an Indonesian single-player board game, precursor to the more popular Mancala. 
## Info:
The board has five spaces to store stones, and the player picks up the stones from one space then proceeds to place them in the sequential spaces, looping around to the start if necessary.
## Objective:
Get all stones into the fifth space, called Ruma, without accidentally placing the last stone into an empty space.

> [!NOTE]
> [This website](https://www.whatdowedoallday.com/tchuka-ruma/) has a more in-depth explanation of Tchuka Ruma!

# How to Install:

Download `TchukaRuma.exe` from [here](https://github.com/dylanNicastro/tchuka-ruma/releases/tag/v1.0.0)
> [!WARNING]
> Since the .exe file will instantly close at the end of the game if ran independently, it's recommended to launch the game from a terminal like `Command Prompt` or `Powershell` by navigating to the directory and typing the application name, like so:
```
C:\Users\me\tchuka-ruma> .\TchukaRuma.exe
```

# How to Play:

1) Choose a space to take the stones from by typing the number of that space (1-4)
2) The program will distribute the stones left to right (and loop around back to space 1 if needed)
3)
    - If the last stone lands in Ruma (the fifth space), you go again
    - If the last stone falls into an empty space, you lose
    - If the last stone falls into an occupied space (not including Ruma), the program picks up all the stones from that spot and automatically continues
4) Repeat until you win or lose!