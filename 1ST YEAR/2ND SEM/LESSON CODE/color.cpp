#include <windows.h>
using namespace std;

int main(){
HANDLE console_color;
    console_color = GetStdHandle(STD_OUTPUT_HANDLE);
    int = kulay;
    kulay = 3;
    SetConsoleTextAttribute(console_color, kulay);
    cout << kulay << "hello" << "good job" << endl;
    return 0;
}