/*
 *
 * sudo apt-get install valgrind
 *
 * c++ -g program.cpp -o program
 *
 * valgrind --leak-check=full ./program
 *
 *
 * Common Options:
 *
 * Option	                Description
 * --leak-check=full	        Detailed info on memory leaks
 * --show-leak-kinds=all	Show all types of memory leaks (definite, indirect, possible, reachable).
 * --track-origins=yes	        Show origin of uninitialized values (slower but useful).
 * --log-file=filename.txt	Write output to a file instead of stdout.
 * --tool=memcheck	        Use the Memcheck tool (default) for memory error detection.
 * --leak-check=yes             Check for memory leaks (no, summary, yes, full).
 * --error-exitcode=1           Exit with a specific code if an error is found.
 * --suppressions=file.supp     Use a suppression file to ignore known issues.
 * --gen-suppressions=all       Generate suppression entries for all errors. 
 * --num-callers=40             Show more stack frames in error messages. 
 * --track-fds=yes              Track file descriptor usage.
 *
 *
 *   Other Tools in Valgrind:
 *
 *  Tool	Purpose
 *
 *  memcheck	Detects memory errors and leaks.
 *  massif	Heap profiler (use with --tool=massif).
 *  cachegrind	CPU cache profiler (use with --tool=cachegrind).
 *  callgrind	Call graph profiler (use with --tool=callgrind).
 *  helgrind	Detects race conditions in multithreaded programs.
 *  drd	        Another thread error detector.
 *
 *  Example Commands:
 *
 *  valgrind --leak-check=full ./my_program
 *  valgrind --tool=massif ./my_program
 *  ms_print massif.out.<pid>
 *  valgrind --tool=callgrind ./my_program
 *
 *
 */  

#include <iostream>
int main() {
    int* arr = new int[10];
    arr[10] = 5; // Invalid access
    //  arr[9]= 5; // valid write
    //delete[] arr; // forgetting to free 
    return 0;
}

