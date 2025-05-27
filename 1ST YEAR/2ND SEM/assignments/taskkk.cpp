#include<iostream>

using namespace std;

void display_odd();

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

void multi();

void multi(){
    int arr[2][3][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {   
            for (int k = 0; k < 3; k++)
            {
                cout<<"Enter number: ";
                cin>>arr[i][j][k];
            }
            
        }
        
    }
    cout<<"output:\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {   
            for (int k = 0; k < 3; k++)
            {
                cout<<arr[i][j][k] << endl;

            }
            
        }
        
    }

    
}

void charac();

void charac(){
    string arr[5];
    string temp;

    for (int i = 0; i < 5; i++)
    {
        cout<<"Enter a word:"<<endl;
        cin>>arr[i];
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5 ; j++)
        {
            if(arr[i].length() > arr[j].length())
            {
                temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
            
        }
        
    }

    cout<<"In order: ";
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    cout<< endl << arr[4] << " is the longest.";
    

}


int main(){
    int choice;
    cout<<"1. Display Odd Numbers\n";
    cout<<"2. Multidimensional array\n";
    cout<<"3. Arrange Character\n";
    cout<<"4. Exit\n";
    cout<<"\nEnter chosen operation (1-4): ";
    cin>>choice;

    switch (choice)
    {
    case 1:
        display_odd();
        break;
    case 2:
        multi();
        break;
    case 3:
        charac();
        break;
    case 4:
        cout << "thank you";
        break;

    default:
        cout << "Please only select from numbers 1 to 4\n";
        break;
    }
}