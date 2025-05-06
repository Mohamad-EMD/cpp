

#include <iostream>
#include <chrono>
#include <thread>
using namespace std;
int main()
{
    cout << "processing...";
    this_thread::sleep_for(chrono::seconds(3));
    cout << "DONE\n";
}


