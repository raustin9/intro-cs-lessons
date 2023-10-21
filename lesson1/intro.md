# Lesson 1: Hello World and basic IO
This lesson will be writing your first program! In programming, it is common to begin with a simple program called "Hello, World!".   
In this program, all it does is simply print the text "hello world" to the screen.
For those of you following along in Java, there is the example program with the ".java" file extension, and for those of you
following along in C++ there is the ".cpp" file extension program.

## What is IO
You might have heard the term IO before, and there is even a web domain extension ".io" that is very common now named after it.
IO is a very simple but **important** concept in programming. It stands for **Input/Output**. 
In the example files provided to you, I have written some very basic versions of IO that you can follow along with.

## How to run your program
You can write all the code that you want, but that's pointless without being able to run your program.
There are some extremely common steps for running your program:
1. Write program
2. **Compile** program
3. Run program

You may have noticed that special word **compile** and are wondering what that means. Well, it is actually very simple.   
**Compiling** is what you do that takes the program that you wrote, and turns it into something that the computer can read.

Here is an example of how to compile and run a program in Java
1. Write program "intro.java"
2. Run the command ```javac intro.java```
3. Run the command ```java [insert what the compiler created]```
**NOTE**: There is an important difference between ```javac``` and ```java```. ```javac``` is the **compiler** and ```java``` is what runs your program.
In the example program that I have written here called "intro.java", when I run the command ```javac intro.java``` it outputs a new file called ```HelloWorld.class```. I would then run the command ```java HelloWorld``` to run my program! MAKE SURE NOT TO INCLUDE THE .class EXTENSION WHEN RUNNING THE PROGRAM

Here is an example of how to compile and run a program in C++:
1. Write program "intro.cpp"
2. Run the command ```g++ intro.cpp```
3. Run the command ```./a.out```
**NOTE** when running a program from C++ you use the ```./``` command that tells the computer "hey, run this file". Think of it as double clicking a program like you normally would.   
The file ```a.out``` is the default name that the ```g++``` compiler always gives. If you want to specify your own name, you can change your command to be ```g++ intro.cpp -o hello-world```. In this case, the new name of the file will be ```hello-world``` rather than ```a.out```. **Just make sure that you use the -o flag BEFORE THE NAME OF THE EXECUTABLE NOT YOUR PROGRAM**. To make sure that you get this, here is an example of how NOT to do this: ```g++ hello-world -o intro.cpp```. If you do this, it will not work.
