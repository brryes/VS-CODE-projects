#include <iostream>
#include<string>

using namespace std;
// int main(){
//     int test[2][3][2] = {{{3,5}, {4,8},{5,6}}, {{8,4},{4,8},{11,6}}};
//     for (int i = 0; i < 2; i++)
//         for (int j = 0; j < 3; j++)
//             for (int m = 0; m < 2; m++)
//             {
//                 cout<<"list of ["<<i<<"]["<<j<<"][" <<m<< "]=" << test[i][j][m]<< endl;

//             }
            

// }


//multi dimensional array
// using namespace std;
// int main(){
//     int test[2][3][2] = {{{3,5}, {4,8},{5,6}}, {{8,4},{4,8},{11,6}}};
//     for (int i = 0; i < 2; i++)
//         for (int j = 0; j < 3; j++)
//             for (int m = 0; m < 2; m++)
//             {
//                 cout<<"list of ["<<i<<"]["<<j<<"][" <<m<< "]=" << test[i][j][m]<< endl;

//             }
            

// }



//-----------------------------------
// 2D ARRAY
// -------------------
// int main(){
//     int arr[3][2]= {{3,5},{4,8},{5,6}};
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 2; j++)
//             cout << "test[" << i << "][" << j <<"] = "  arr[i][j]<< endl;
        
//     }
    
// }
//using namespace std;
// int main(){
//     char color[5][19]={"green","yellow","blue", "white", "red"};
//     for (int j = 0; j < 5; j++)
//         cout<<color[j]<<"\n";
//     return 0;
// }

//--------
// int main(){
//     string arr[5];
//     cout<<"enter: "<<endl;
//     for (int x = 0; x < 5; x++)
//     {
//         cin>>arr[x];
//     }
//     cout<<"\n string array: \n";
//     for (int x = 0; x < 5; x++)
//     {
//         cout<<arr[x]<<"\n";
//     }
    
    
// }

//-----------------------------------------

// ONE DIMENSIONAL ARRAYS
// int main(){
//     string verse[4]={"Mark","luke", "John","matthew"};
//     for (int i = 0; i < 4; i++)
//     {
//         cout<<verse[i]<<"\n";
//     }
    
// }

// int main(){
//     int i, arr[10], num, index;
//     cout<<"enter 10 numbers: ";
//     for ( i = 0; i < 10; i++)
//         cin>>arr[i];
    
//     cout<<"\n What array do you want to search: \n";
//     cin>>num;


//     for ( i = 0; i < 10; i++)
//     {//this loop is inside of a loop
//         if (arr[i]==num)
//         {
//             index = i;
//             break;
//         }
        
//     }
//         cout<<"\n The Index location is: "<<index;
//         cout<<endl;
//         return 0;
// }


int main(){
    int i,  arr[5];
    cout<<"enter: ";
    for ( i = 0; i < 5; i++)
        cin>>arr[i];
    cout<<"\n the array are: \n";
    for ( i = 0; i < 5; i++)
        cout << arr[i]<< "\t";
        cout<<endl;
        return 0;
    
}