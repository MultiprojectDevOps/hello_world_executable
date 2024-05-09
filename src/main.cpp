#include <hello_world/hello_world.hpp>
#include <cstdlib>
#include <iostream>

int main(int argc, char* argv[]){

    // Call the function defined in the hello_world library
    std::cout << hello_world::say_hello() << std::endl;
    
    return EXIT_SUCCESS;
}