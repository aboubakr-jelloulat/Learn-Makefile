
# This Makefile is specifically for - 42 The Network students - 1337 O Nass Lmlah Tahiya!

# Every student working on libft needs to understand the composition of a Makefile.
# As we all know, during correction with peers, there are always a ton of questions like:
#   - Why is this here?
#   - What happens if we delete that?
#   - Can we do it like this instead? Hahaha
#
# Don't worry  I'm here to guide you step by step and help you make the corrector blessed with your knowledge 



#  ===================== VARIABLES  =====================


# NAME: What are we building? A library called libft.a

NAME = libft.a

# CC: Which compiler should we use?
# WHY USE THIS?
#   - Different systems might have different compilers (gcc, clang, cc)
#   - Easy to switch compilers by changing one line
# CAN WE DELETE THIS?
#   - Yes! Make has a default CC variable set to "cc" - ✅ the corrector WILL 100% ask you this don’t forget
#   - What happens? Make will use the system default compiler (usually works fine)
CC = cc

# CFLAGS: Compiler flags (extra instructions for the compiler)
# 🤔 WHY USE THIS?  ✅ the corrector WILL 100% ask you this don’t forget
#   -Wall: "Show me ALL warnings" (helps catch bugs early)
#   -Wextra: "Show me even MORE warnings" (be extra careful)
#   -Werror: "Treat warnings as ERRORS" (forces you to write clean code)
# CAN WE DELETE THIS?
#   - Yes, but your code might have hidden bugs
#   - What happens? Compiler won't warn you about potential problems
CFLAGS = -Wall -Wextra -Werror

# RM: How to remove files
# 🤔 WHY USE THIS?
#   - "-f" means "force" - don't complain if file doesn't exist
#   - Makes our clean commands more reliable
# 🗑️ CAN WE DELETE THIS?
#   - Yes, but then you'd type "rm -f" everywhere
RM = rm -f

# =====================   SOURCE FILES SECTION =====================


# SOURCES: List of all our .c files
# 🤔 WHY USE THIS?
#   - One place to manage all source files
#   - Easy to add/remove files from the build
#   - The "\" at the end means "continue on next line"
# ️ # CAN WE DELETE THIS? ✅ the corrector WILL 100% ask you this don’t forget
#   - No! We need to tell Make which files to compile 
#   - What happens? Make won't know what to build!
SOURCES = main.c \
          utils.c

# OBJECTS: Convert .c files to .o files automatically ✅ the corrector WILL 100% ask you this don’t forget
# 🤔 WHY USE THIS MAGIC?
#   - $(SOURCES:.c=.o) means "take SOURCES, replace .c with .o"  
#   - So main.c becomes main.o, utils.c becomes utils.o
#   - This is AUTOMATIC - add a .c file above, get a .o file here!
# 🗑️ CAN WE DELETE THIS?
#   - Yes, but then you'd have to list all .o files manually
#   - What happens? More work for you, easy to forget files
OBJECTS = $(SOURCES:.c=.o)

# ARCHV: How to create a library archive ✅ the corrector WILL 100% ask you this don’t forget
# 🤔 WHY USE THIS?
#   - "ar rcs" is the command to create a library (.a file) 
#   - ar = archive tool, r = insert files, c = create, s = write index
# ️ CAN WE DELETE THIS?
#   - Yes, but then you'd type "ar rcs" everywhere
#   - What happens? More typing, and if you need to change the method, you'd
#     have to change it in multiple places
ARCHV = ar rcs



# =====================  RULES SECTION ===================== ✅ the corrector WILL 100% ask you this don’t forget



# DEFAULT TARGET: What happens when you just type "make"
# 🤔 WHY USE THIS?
#   - "all" is a conventional name meaning "build everything"
#   - It depends on $(NAME), so it will build our library
# 🗑️ CAN WE DELETE THIS?
#   - Yes, but then typing "make" might not do what you expect
#   - What happens? Make will build the first target it finds
all: $(NAME)

# PATTERN RULE: How to make any .o file from a .c file
# 🤔 WHY USE THIS MAGIC?
#   - %.o means "any file ending in .o"
#   - %.c means "the corresponding file ending in .c"
#   - $< means "the first dependency" (the .c file)
#   - $@ means "the target" (the .o file)
#   - This ONE rule handles ALL our .c files automatically!
# 🗑️ CAN WE DELETE THIS? #✅ the corrector WILL 100% ask you this don’t forget
#   - Yes, Make has built-in rules for .c to .o
#   - What happens? Make would use its default rule (might not use your CFLAGS)

#   - %.o: %.c utils.h   : Add utils.h as a dependency: this means if anything changes in the header,
#     Make will recompile the source file automatically. #✅ the corrector WILL 100% ask you this don’t forget

%.o: %.c utils.h   
	@echo "🔨 Compiling $< into $@..."
	$(CC) $(CFLAGS) -c $< -o $@

# LIBRARY BUILD RULE: How to create our library
# 🤔 WHY DOES THIS WORK?
#   - $(NAME) depends on $(OBJECTS)
#   - If any .o file is missing/outdated, Make will build it first
#   - Then it creates the library from all the .o files
# 🗑️ CAN WE DELETE THE DEPENDENCY? #✅ the corrector WILL 100% ask you this don’t forget
#   - No! Without $(OBJECTS), Make doesn't know what files the library needs
#   - What happens? Make would try to create an empty library!
$(NAME): $(OBJECTS)
	@echo "📚 Creating library $(NAME)..."
	$(ARCHV) $(NAME) $(OBJECTS)
	@echo "✅ Library $(NAME) created successfully!"



# CLEAN: Remove object files but keep the library
# 🤔 WHY USE THIS?
#   - Object files (.o) are temporary - we don't need them after building
#   - Saves disk space and keeps directory clean
# 🗑️ CAN WE DELETE THIS?
#   - Yes, but your directory will get cluttered with .o files
#   - What happens? Lots of temporary files pile up over time
clean:
	@echo "🧹 Cleaning object files..."
	$(RM) $(OBJECTS)
	@echo "✅ Object files cleaned!"

# FCLEAN: Remove EVERYTHING we built (full clean)
# 🤔 WHY USE THIS?
#   - Sometimes you want to start completely fresh
#   - Removes both object files AND the final library
#   - "fclean" = "full clean" 
# 🗑️ CAN WE DELETE THE "clean" DEPENDENCY?
#   - Yes, but then you'd have to duplicate the object removal commands
#   - What happens? Code duplication (bad practice)

# - fclean depends on clean: this means that when you run `make fclean`,
#   Make will first execute the `clean` target. Think of it like calling a function.
#   After `clean` finishes, fclean continues to remove the executable
fclean: clean
	@echo "🗑️  Full clean: removing $(NAME)..."
	$(RM) $(NAME)
	@echo "✅ Everything cleaned!"

# RE: Rebuild everything from scratch
# 🤔 WHY USE THIS?
#   - "re" = "remake" - a common convention
#   - First does fclean (removes everything), then builds all again
#   - Useful when you want to be 100% sure everything is fresh
# 🗑️ CAN WE DELETE THIS?
#   - Yes, but then you'd have to type "make fclean && make" manually
#   - What happens? More typing for a common operation
re: fclean all
	@echo "🔄 Rebuild complete!"


# PHONY: Tell Make these are commands, not files  #✅ the corrector WILL 100% ask you this don’t forget
# 🤔 WHY USE THIS?
#   - Imagine if someone created a file named "clean" in your directory
#   - Without .PHONY, Make would think "clean is up to date" and not run the clean command
#   - .PHONY says "these are always commands, never files"
# 🗑️ CAN WE DELETE THIS?
#   - Yes, but if files with these names exist, the commands might not run
#   - What happens? Your clean/fclean/re commands might stop working!
.PHONY: all clean fclean re


#        Knowledge Check!


#  TARGETS AND DEPENDENCIES:
#   - A target is what you want to make (like "libft.a" or "clean")
#   - Dependencies are what you need to make it (like .c files for .o files)
#   - Make builds dependencies first, then the target
#
#  AUTOMATIC DEPENDENCY TRACKING:
#   - Make compares timestamps: if dependency is newer, rebuild target
#   - This is WHY Make is fast   it only rebuilds what changed!
#
#  VARIABLES:
#   - Variables make your Makefile flexible and maintainable
#   - Change compiler? Just change CC variable
#   - Add new source file? Just add to SOURCES
#
#  PATTERN RULES:
#   - %.o: %.c means "any .o file depends on corresponding .c file"
#   - One rule handles ALL your source files automatically
#
# Try these commands and watch what happens:
#   make          # Build the library
#   make clean    # Remove object files
#   make fclean   # Remove everything
#   make re       # Clean and rebuild
#   touch utils.c # Update timestamp
#   make          # See how only utils.c gets recompiled!





#  How to test your library with a main program:

    # 1 - make   →  This creates libft.a
    
    # 2 - cc -Wall -Wextra -Werror  main.c -L. -lft -o test →  Compile your main program and link it with the library:
        #      - main.c       → your main source file
        #      - -L.          → tells the compiler to look in the current folder for libraries
        #      - -lft         → links the libft.a library (-l + library name without "lib" and ".a")
        #      - -o test      → names the output executable "test"
    
    # 3 -  ./test → Run your program:
    
 

 #Reminder : 
        # Don't worry if you don't understand everything yet
        # I'm here to guide you step by step until you become an expert
        
        # Use these resources if you get stuck:
            #    - Ask AI for help
            #    - https://makefiletutorial.com/#top
            #    - https://www.gnu.org/software/make/manual/make.html#Simple-Makefile