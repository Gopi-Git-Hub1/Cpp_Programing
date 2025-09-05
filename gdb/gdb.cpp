/*
 * ************GDB**************
 *
 * c++ -g program.cpp -o program
 *
 * Starting & Running:
 *
 * gdb ./program            ->  Start GDB with your compiled program
 * run                      ->  Run the program inside GDB
 * start                    ->  Run the program and stop at main()
 *
 * Breakpoints:
 *
 * break main               ->  Set a breakpoint at main()
 * break file.c:25          ->  Break at line 25 in file.c
 * break function_name      ->  Break at the start of a function.
 * delete                   ->  Remove all breakpoints.
 * disable / enable         ->  Temporarily disable/enable breakpoints.
 *
 *
 * Stepping Through Code:
 *
 * next/n                   ->  Execute next line (skip function calls)  // execute next line in main().
 * step                     ->  Execute next line (enter function calls)
 * continue                 ->  Resume execution until next breakpoint.
 * finish                   ->  Run until current function returns.
 *
 * Inspecting Variables:
 *
 * print x                  ->  Print value of variable x
 * display x                ->  Automatically show x after each step
 * info locals              ->  Show all local variables
 * info args                ->  Show function arguments
 * set var x = 10           ->  Change value of x to 10
 *
 * Stack & Execution Info:
 *
 * backtrace or bt          ->  Show call stack
 * frame                    ->  Switch to a specific stack frame
 * info frame               ->  Show details about current frame
 * info registers           ->  Show CPU register values
 *
 * Source Code Navigation:
 *
 * list                     ->  Show source code around current line
 * list function_name       ->  Show code for a specific function
 *
 * Watchpoints: 
 *
 * watch x                  ->  Break when x changes.
 * rwatch x                 ->  Break when x is read.
 * awatch x                 ->  Break when x is read or written.
 *
 * Miscellaneous:
 *
 * quit                     ->  Exit GDB
 * help                     ->  Get help on commands.
 * info breakpoints         ->  List all breakpoints.
 * info functions           ->  List all functions in the program.
 *
 *
 */

#include <iostream>
#include <list>
using namespace std;

class Data
{
        public:
                list<int>data;

                void setDataIntoFront();
                void setDataIntoEnd();
                void setDataSpecificPosition();
                void popDataFromFront();
                void popDataFromEnd();
                void popDataSpecificPosition();
                void displayData();
                int getData();
                int getPosition();
};
int Data::getData()
{
        int d;
        cout<<"Enter data:";
        cin>>d;
        return d;
}
int Data::getPosition()
{
        int p;
        cout<<"Enter position:";
        cin>>p;
        return p;
}
void Data::setDataIntoFront()
{
        data.push_front(getData());

}
void Data::setDataIntoEnd()
{
        data.push_back(getData());
}
void Data::setDataSpecificPosition()
{
        int position = getPosition();
        if (position < data.size()) {
                auto it = data.begin();
                advance(it, position);
                data.insert(it, getData());
        }
}
void Data::popDataFromFront()
{
        data.pop_front();
}
void Data::popDataFromEnd()
{
        data.pop_back();
}
void Data::popDataSpecificPosition()
{
        int position = getPosition();
        if (position < data.size()) {
                auto it = data.begin();
                advance(it, position);
                data.erase(it);
        }
}
void Data::displayData()
{
        cout<<"==============================="<<endl;
        for(list<int>::iterator it = data.begin(); it != data.end(); it++)
        {
                cout<<*it<<" ";
        }
        cout<<endl;
        cout <<"Number of items in the list: " <<data.size()<<endl;
        cout<<"==============================="<<endl;
}
int main()
{
        class Data lData;

        int option;
        while(1)
        {
                cout<<"Choose Options:"<<endl;
                cout<<"1) setDataIntoFront"<<endl;
                cout<<"2) setDataIntoEnd"<<endl;
                cout<<"3) setDataSpecificPosition"<<endl;
                cout<<"4) popDataFromFront"<<endl;
                cout<<"5) popDataFromEnd"<<endl;
                cout<<"6) popDataSpecificPosition"<<endl;
                cout<<"7) displayData"<<endl;
                cout<<"8) Exit"<<endl;
                cout<<"Option : ";
                cin>>option;
                switch(option)
                {
                        case 1: lData.setDataIntoFront();
                                break;
                        case 2: lData.setDataIntoEnd();
                                break;
                        case 3: lData.setDataSpecificPosition();
                                break;
                        case 4: lData.popDataFromFront();
                                break;
                        case 5: lData.popDataFromEnd();
                                break;
                        case 6: lData.popDataSpecificPosition();
                                break;
                        case 7: lData.displayData();
                                break;
                        case 8: exit(0);
                        default :
                                cout<<"Choose correct option...!"<<endl;
                }
        }
        return 0;
}
