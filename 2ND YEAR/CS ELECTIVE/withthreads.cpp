// withthreads.cpp
#include <iostream>
#include <thread>
using namespace std;

void printWord(const string& word, int times) {
    for (int i = 0; i < times; ++i) {
        cout << word;
    }
}

int main() {
    // Launch four threads to print each word 1000 times
    thread t1(printWord, "FEU ", 1000);
    thread t2(printWord, "INSTITUTE ", 1000);
    thread t3(printWord, "OF ", 1000);
    thread t4(printWord, "TECHNOLOGY ", 1000);

    // Wait for all threads to finish
    t1.join();
    t2.join();
    t3.join();
    t4.join();

    // Print full name
    cout << endl << "SOFIA BEATRICE ALEXA R. REYES" << endl;

    return 0;
}