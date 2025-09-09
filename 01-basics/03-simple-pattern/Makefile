
# The name of the final program we want to build (megaphone
NAME 	:= 	megaphone

CC 		:= 	c++

CFLAGS 	:= 	-Wall -Wextra -Werror -std=c++98


#All .cpp files in the folder. Example: if you have main.cpp megaphone.cpp ... , both are included automatically
# Why?
# Saves time: you don’t have to list every .cpp manually.
SRCS 	:= 	$(wildcard *.cpp)



# Converts every .cpp file into a .o (object) file.
#   Example: main.cpp → main.o
# Why?
# Object files are compiled once, then linked into the final program
OBJS	:= 	$(SRCS:.cpp=.o)


#Default rule. When you run just make, it will try to build megaphone "build everything"

#What if deleted? Make would build the first target it finds 🆘 (not always what you want) 🆘
all: $(NAME)


# What is this?
#   How to build the final program.

# What if deleted?
#  You’d have no final program.
$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@printf "$(CYAN)\n$(NAME) compiled successfully! ✅$(RESET)\n"


# Pattern rule (magic ✨)
#     %.o → any .o file.
#     
#     %.cpp → its matching .cpp source.
#     
#     $< → the source file (main.cpp).
#     
#     $@ → the target file (main.o).
#     
# Why? Handles all .cpp → .o compilations automatically.
#     
# What if deleted?
#     Make would fall back to its default rule, but it might not use your flags

%.o: %.cpp
	@printf "$(CYAN)Compiling $<$(RESET)\n"
	@$(CC) $(CFLAGS) -c $< -o $@


# Removes all .o files.
# 
# Why? Keep your repo clean.
# 
# What if deleted?
#     Your repo fills up with .o files → messy.
clean:
	@printf "$(RED)Removing object files$(RESET)\n"
	@rm -f $(OBJS)

# Full clean.
# Removes object files and the final program.
# 
# Why? Sometimes you want to start fresh.
# 
# What if deleted?
#   You can’t "reset everything" easily.
fclean: clean
	@printf "$(RED)Removing $(NAME)$(RESET)\n"
	@rm -f $(NAME)


# Rebuild.
#     Deletes everything, then rebuilds from scratch.
# 
# Why? Common shortcut.
# 
# What if deleted?
#     You’d have to run make fclean && make manually.
re: fclean all


# What is this?
# Tells Make these are commands, not files.
# 
# Why? If a file named clean exists in your folder, Make won’t get confused.
# 
# What if deleted?
#   Risk that Make thinks your command is "already done".
.PHONY: all clean fclean re


#colors 
RESET	= \033[0m
RED		= \033[31m
CYAN	= \033[36m


#  Tricks 

# @ hides the command, shows only output.
# 
# := expands immediately (safe & predictable).
# 
# = expands later (can change depending on context).



#     ********     The @ flag in Makefile   ******* 
    
test1:
	echo "Hello"   

#         If you run:  
#             make test1

# output : 
#             echo "Hello"
#             Hello


#        If you add @ before the command: 

test2:
	@echo "Hello"
      
#         If you run:  
#             make test2

# output : 
#             Hello

# So @ = "don’t echo the command itself, only run it".
# This makes output cleaner and more user-friendly.




#     ********     Diffrence Between  =:   &&  =   ******* 


A = hello
B = $(A) world
A = hej

test3 :
	@printf "$(B)"
	
    #In Makefiles, with = (recursive assignment), variables are expanded only when they are used, not when they are defined
    
    
# if you wanted B to remember the old value of A (so "hello World"), you must use := (immediate assignment):
A := hello
B := $(A) World
A := Hej

test4 :
	@echo "$(B)"
  
  
# how to run :
    # make 
    # ./megaphone
  
  
  
 #Reminder : 
        # Don't worry if you don't understand everything yet
        # I'm here to guide you step by step until you become an expert
        
        # Use these resources if you get stuck:
            #    - Ask AI for help
            #    - https://makefiletutorial.com/#top
            #    - https://www.gnu.org/software/make/manual/make.html#Simple-Makefile