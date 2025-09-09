
# This is your very first REAL Makefile.
# A Makefile is like giving instructions to a robot (your computer).
# You tell it what to do when you type `make` in the terminal.

#            **** Variables ****

# CC stands for "C Compiler".
# Here we are telling Make to use `gcc` (GNU Compiler Collection) to compile our C programs.
CC = gcc

# CFLAGS stands for "Compiler Flags".
# These are extra options you pass to the compiler to control how it behaves.
# Common flags include:
# -Wall      : "Warn All"  enables most common warnings to help catch mistakes.
# -Wextra    : enables even more warnings that -Wall does not include.
#              It’s useful to catch subtle issues in your code.
# -Werror    : treats all warnings as errors.
#              This means the compiler will stop compiling if any warning exists.
#              It helps enforce clean, warning-free code, which is good practice.
CFLAGS = -Wall

# TARGET is the name of the final executable program we want to create.
# In this case, when we build our program, it will be called "hello".
TARGET = hello

# SOURCE is the name of your source file(s).
# Here we only have one source file: main.c
SOURCE = main.c




#            **** Targets ****


# This is the main target.
# Targets are what Make will try to build.
# The syntax is: target: dependencies
# Then on the next line(s), you give the commands to build it (indented with a tab!)

$(TARGET): $(SOURCE)
# This line tells Make: "To build $(TARGET), use $(CC) to compile $(SOURCE) 
# with the flags $(CFLAGS), and output (-o) a file named $(TARGET). in This case hello
	$(CC) $(CFLAGS) $(SOURCE) -o $(TARGET)


# This is a special target called 'clean'.
# It's not a program, but a command we can run to delete generated files.
# 'rm -f' means "remove the file if it exists, and don't ask for confirmation
# This is useful to start fresh before rebuilding your program.

clean:
	rm -f $(TARGET)

# .PHONY tells Make that 'clean' is not a real file.
# This prevents conflicts in case a file named 'clean' exists in the directory.
.PHONY: clean



# How to use this Makefile:
 #  1 - compile your program :  make 
 #  2 - run your program :  ./hello
 #  3 - To clean up (delete the executable):  make clean
 
 
 
 #Reminder : 
        # Don't worry if you don't understand everything yet
        # I'm here to guide you step by step until you become an expert
        
        # Use these resources if you get stuck:
            #    - Ask AI for help
            #    - https://makefiletutorial.com/#top
            #    - https://www.gnu.org/software/make/manual/make.html#Simple-Makefile