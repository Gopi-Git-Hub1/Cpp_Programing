/*
 *
 * sudo apt-get install valgrind
 *
 * c++ -g program.cpp -o program
 *
 * valgrind --leak-check=full ./program
 *
 *

📋 Common Options

Option	                Description
--leak-check=full	Detailed info on memory leaks
--show-leak-kinds=all	Shows all types of leaks
--track-origins=yes	Shows where uninitialized values come from
--log-file=filename.txt	Saves output to a file
--tool=memcheck	Default tool for memory checking
*/
#include <iostream>
int main() {
    int* arr = new int[10];
    arr[10] = 5; // Invalid access
    //  arr[9]= 5; // valid write
    //delete[] arr; // forgetting to free 
    return 0;
}

