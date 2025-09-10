NAME    := zombie


CC      := c++

CFLAGS  := -Wall -Wextra -Werror -std=c++98

# The folder where we keep our source files.
# Here "." means the current folder (where the Makefile is).
SRCDIR := .

# The folder where we want to put the compiled object files (.o).
OBJDIR := obj

# SRCS will contain all the .cpp files inside SRCDIR.
# wildcard is a function that finds all files matching a pattern.
# Example: ./main.cpp ./shared.cpp 
SRCS := $(wildcard $(SRCDIR)/*.cpp)

# OBJS is the list of object files (.o) created from SRCS.
# The pattern replaces "./name.cpp" with "obj/name.o".
# Example: obj/main.o obj/shared.o 
OBJS := $(SRCS:$(SRCDIR)/%.cpp=$(OBJDIR)/%.o)

# The default target. When we type "make", it will build $(NAME).
all: $(NAME)

# Rule to build the final program from the object files.
# This links all .o files together into the executable "zombie".
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

# Rule to compile each .cpp into a .o file.
# $< means the first dependency (the .cpp file).
# $@ means the target (the .o file).
# Example: c++ -Wall -Wextra -Werror -std=c++98 -c ./main.cpp -o obj/main.o
$(OBJDIR)/%.o: $(SRCDIR)/%.cpp utils.h | $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

# This creates the obj/ folder if it does not exist.
# Without this, the first build would fail when trying to put files in obj/.
$(OBJDIR):
	@mkdir -p $(OBJDIR)

# "make clean" will remove the obj/ folder and all .o files.
clean:
	@rm -rf $(OBJDIR)

# "make fclean" will do clean AND also remove the final program.
fclean: clean
	@rm -f $(NAME)

# "make re" will do a full rebuild: clean everything then build again.
re: fclean all

# These are phony targets, not files.
# Without this line, if a file named "clean" exists in the folder,
# then "make clean" could do nothing by mistake.
.PHONY: all clean fclean re
