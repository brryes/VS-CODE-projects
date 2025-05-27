#include <cstdlib>
#include <ctime>
#include <iostream>
// online gdb
using namespace std;

int main(){
    
    srand(time(0));
    cout<< "random numbers generated between 1 to 10: " << endl;
    for (int i = 0; i<5; i++)
    cout<< (rand()%10) + 1<< " ";
    return 0;
}


/*
-----------------------------------------
raffle something randomizer
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main(){
    
    srand(time(0));
    cout<< "random numbers generated between 1 to 10: " << endl;
    for (int i = 0; i<1; i++) //1<1 is kung ilan yung lalabas na result 
    cout<< (rand()%10) + 1<< " "; // %10 kung ilan yung kasama sa raffle eme
    return 0;
}
-------------------------
rand
    cout<< "random numbers generated between 1 to 100: " << endl;
    for (int i = 0; i<10; i++)
    cout<< (rand()%10) + 1<< " ";
    return 0;

-------------------------
int main(){
    int a;
    long b;
    double c,d,e;
    a = -23;
    b =23;
    c =23.21;
    d =23.41;
    e =23.47;
    cout<< abs(a)<<endl;
    cout<< labs(b)<<endl;
    cout<< fabs(c)<<endl;
    cout<< ceil(d)<<endl;
    exit(1);
    cout<< floor(e)<<endl;
    return 0;
}


*/