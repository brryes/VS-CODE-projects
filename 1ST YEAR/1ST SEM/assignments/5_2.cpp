#include<iostream>
using namespace std;
int main(){

    char choice;
    cout<<"What is your zodiac sign?: "<<endl;
    cout<<"[A] - Aries"<<endl;
    cout<<"[T] - Taurus"<<endl;
    cout<<"[G] - Gemini"<<endl;
    cout<<"[C] - Cancer"<<endl;
    cout<<"[L] - Leo"<<endl;
    cout<<"[V] - Virgo"<<endl;
    cout<<"[l] - Libra"<<endl;
    cout<<"[S] - Scorpio"<<endl;
    cout<<"[s] - Sagittarius"<<endl;
    cout<<"[c] - Capricorn"<<endl;
    cout<<"[a] - Aquarius"<<endl;
    cout<<"[P] - Pisces"<<endl;
    cin>>choice;

    switch (choice){
        case 'A':
            cout<<"Your Zodiac Sign: Aries!";   
            cout<<" \nYour Birthday is somewhere between the month of March and April!"; 
            break ;
        case 'T':
            cout<<"Your Zodiac Sign: Taurus!";
            cout<<" \nYour Birthday is somewhere between the month of April and May!"; 
            break;
        case 'G':
            cout<<"Your Zodiac Sign: Gemini!";
            cout<<" \nYour Birthday is somewhere between the month of May and June!"; 
            break ;
        case 'C':
            cout<<"Your Zodiac Sign: Cancer!";
            cout<<" \nYour Birthday is somewhere between the month of June and July!"; 
            break ;
    case 'L':
            cout<<"Your Zodiac Sign: Leo!";
            cout<<" \nYour Birthday is somewhere between the month of July and August!"; 
            break ;
    case 'V':
            cout<<"Your Zodiac Sign: Virgo!";
            cout<<" \nYour Birthday is somewhere between the month of August and September!"; 
            break ;
    case 'l':
            cout<<"Your Zodiac Sign: Libra!";
            cout<<" \nYour Birthday is somewhere between the month of September and October!"; 
            break ;
    case 'S':
            cout<<"Your Zodiac Sign: Scorpio!";
            cout<<" \nYour Birthday is somewhere between the month of October and November!"; 
        break ;
        case 's':
            cout<<"Your Zodiac Sign: Sagittarius!";
            cout<<" \nYour Birthday is somewhere between the month of November and December!"; 
        break ;
        case 'c':
        cout<<"Your Zodiac Sign: Capricorn!";
        cout<<" \nYour Birthday is somewhere between the month of December and January!"; 
        break ;
        case 'a':
            cout<<"Your Zodiac Sign: Aquarius!";
            cout<<" \nYour Birthday is somewhere between the month of January and February!"; 
        break ;
        case 'P':
            cout<<"Your Zodiac Sign: Pisces!";
            cout<<" \nYour Birthday is somewhere between the month of February and March!"; 
        break ;
        }return 0;
}
