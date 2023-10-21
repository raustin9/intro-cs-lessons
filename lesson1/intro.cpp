// Here is your basic hello world program in C++!

// Make sure that you include this library. 
// Without this, the g++ compiler will not know what "cout" and "endl"
// are, and your program will not compile. 
// We will touch on this soon enough, but just include this for now.
#include <iostream>

// FOR NOW: just take this for granted. We will cover namespaces sometime later.
using namespace std;

// This is the "main" function. Without getting technical, 
// AFTER YOU COMPILE and when you run the command "./hello-world" or "./a.out"
// the "main" function is what the computer will run. 
// We will touch on this more later, but for now put everything you want to program
// inside of this "main" function here
int main() {
    // This line is what prints out the Text!
    // Pronounce this as "see out".
    // The "c" part of the word is "console"
    // The "out" part of the word means "output"
    // It is basically saying output this text to the console.
    // The console is the command line you run this from.
    cout << "Hello world!" << endl; // This "endl" means "end line". This puts a "newline" at the end of the text you write
                                    // again, this is not important now, but you will see soon enough why this is important.
   
    // Take this for granted now, but we will cover what "return" means
    // when we get to functions in a little bit.
    // For now, just read this as "the program is done"
    // IMPORTANT: nothing you put after this "return"
    //            will get executed or "run". This means
    //            this should be the last thing that you write
    return 0;

    // for example, the line of code below this will not get run
    // cout << "Hello World again" << endl;
}

// If you are curious about the namespace thing at the top, this 
// is what our program would look like if we removed that line:
/*

#include <iostream>

int main() {
    std::cout << "Hello world! << std::endl;

    return 0;
}

This will do the exact same thing as the program above, there 
is NO DIFFERENE between the two in terms of functionality.
This may make you ask "then what's the point?"
And the point is that it saves you on some writing. However,
namespaces are a complicated topic that we will cover later,
and you will see how and when to use them.

   */
