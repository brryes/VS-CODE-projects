#include<iostream>

using namespace std;

void sum_alL();
void display_odd();
void sum_odd();


void sum_alL(){
    int arr[5], sum = 0;

    for (int i = 0; i < 5; i++){
    cout<<"enter num: ";
    cin>>arr[i];
    sum += arr[i];
}
cout<<"output: "<<sum<<endl;

}  

void display_odd(){
    int arr[10];
    for (int i = 0; i < 10; i++){
    cout<<"enter num: " ;
    cin>>arr[i];
}
cout<<"odd # are: ";
for (int i = 0; i < 10; i++){
    if (arr[i] %2 != 0)
    cout<<arr[i] << " ";
}

}

void sum_odd(){
    int arr[5], sum = 0;
    for(int i = 0; i < 5; i++) {
        cout<<"enter num: " ;
        cin>>arr[i];
    }
    for (int i = 0; i < 5; i++){
    if (arr[i] %2 != 0)
    sum+=arr[i];

}
cout<<"sum: "<<sum<<endl;
}


int main(){
    int choice;

    cout<<"sum\n";
    cout<<"display odd numbers\n";
    cout<<"sum of odd numbers\n";
    cout<<"\nenter chosen operation (1-4): ";
    cin>>choice;

    switch (choice)
    {
    case 1:
        sum_alL();
        break;
    case 2:
        display_odd();
        break;
    case 3:
        sum_odd();
        break;
    case 4:
        cout << "test";
        break;

    default:
        cout << "Please only select from numbers 1 to 4\n";
        break;
    }

}