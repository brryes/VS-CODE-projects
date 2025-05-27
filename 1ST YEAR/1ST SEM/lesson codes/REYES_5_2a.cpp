#include <iostream>

using namespace std;

int main() {
	int mo, day;
	cout<<"Enter month: "; cin>>mo;
	cout<<"Enter day: "; cin>>day;
	if (mo < 1 || mo > 12){
		cout <<"Invalid month!";
		return 0;
}
// REYES SOFIA BEATRICE
string months[12] = {"January","February", "March","April","May","June","July","August", "September","October", "November", "December" };
string monthText = months[mo-1];
string zodiac;
if((mo==1 && day >= 20) || (mo==2 && day <= 18))
	zodiac="Aquarius";
else if((mo==2 && day >= 19) || (mo==3 && day <= 20))
	zodiac="Pisces";
else if((mo==3 && day >= 21) || (mo==4 && day <= 19))
	zodiac="Aries";
else if((mo==4 && day >= 20) || (mo==5 && day <= 20))
	zodiac="Taurus";
else if((mo==5 && day >= 21) || (mo==6 && day <= 20))
	zodiac="Gemini";
else if((mo==6 && day >= 21) || (mo==7 && day <= 22))
	zodiac="Cancer";
else if((mo==7 && day >= 23) || (mo==8 && day <= 22))
	zodiac="Leo";
else if((mo==8 && day >= 23) || (mo==9 && day <= 22))
	zodiac="Virgo";
else if((mo==9 && day >= 23) || (mo==10 && day <= 22))
	zodiac="Libra";
else if((mo==10 && day >= 23) || (mo==11 && day <= 21))
	zodiac="Scorpio";
else if((mo==11 && day >= 22) || (mo==12 && day <= 21))
	zodiac="Sagittarius";
else if((mo==12 && day >= 22) || (mo==1 && day <= 19))
	zodiac="Capricorn";
else {
	cout << "Invalid date";
	return 0;
}
cout<<"Zodiac sign for "<<monthText<< " " <<day<<" is "<<zodiac;
return 0;
}