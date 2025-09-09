

    What is a Makefile?
    
        #Makefiles are used to help decide which parts of a large program need to be recompiled. 
        #In the vast majority of cases, C or C++ files are compiled. 
        #Other languages typically have their own tools that serve a similar purpose as Make.
        #Make can also be used beyond compilation too, when you need a series of instructions to run depending on what files have changed.





    Why Do We Use Makefiles? 
       

         Without Makefile (The Hard Way)
         
        Let's say you have a simple C program with 3 files: 
        
            #   $ gcc -c main.c                             # Compile main.c to main.o
            #   $ gcc -c utils.c                            # Compile utils.c to utils.o  
            #   $ gcc -c math.c                             # Compile math.c to math.o
            #   $ gcc main.o utils.o math.o -o myprogram    # Link all .o files together
            #   $ ./myprogram                               # Run the program
            
            
        Problems:
 
           #   You have to remember ALL these commands every time
           #   You have to TYPE them manually every time  
           #   If you change ONE file, you might recompile EVERYTHING (very slow)
           #   Very easy to make typing mistakes
           #   Hard to share your project with teammates
           #   No way to easily clean up generated files



        WITH MAKEFILE (The Smart Way):
        # --------------------------------
        #   $ make                                 # That's it! Just one command! 
        #   $ make clean                           # Clean up files
            


