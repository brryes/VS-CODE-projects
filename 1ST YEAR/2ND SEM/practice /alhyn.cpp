#include <iostream>
#include <iomanip>
#include <stdexcept>
using namespace std;

struct item {
    string name;
    float price;
    int stock, sold;
};

struct product {
    int product_no;
    string name;
    int total_items;
    struct item *items;
};

bool login(int trial) {
    if (trial > 3) {
        throw runtime_error("Maximum login attempts exceeded.");
    }
    
    string input;
     cout << "┌──────────────────────────────────┐" << endl;
    cout << "│ PRODUCT INVENTORY SYSTEM CS127L  │" << endl;
    cout << "│ USERNAME:                        │" << endl;
    cout << "└──────────────────────────────────┘" << endl;
    // Move the cursor up two lines
    cout << "\033[A\033[A";
    // Move the cursor to the right where the input should begin
    cout << "\033[13C"; // 13 spaces to the right
    cin >> input;

 
        system("cls");
     cout << "┌──────────────────────────────────┐" << endl;
    cout << "│ PRODUCT INVENTORY SYSTEM CS127L  │" << endl;
    cout << "│ PASSWORD:                        │" << endl;
    cout << "└──────────────────────────────────┘" << endl;
    // Move the cursor up two lines
    cout << "\033[A\033[A";
    // Move the cursor to the right where the input should begin
    cout << "\033[13C"; // 13 spaces to the right
    cin >> input;

        if (input == "exer_04") {
            return true;
        } else {
            cout << "Incorrect password." << endl;
        }
        system("cls");

    return login(trial + 1);
}

int main() {
    try {
        if (!login(1)) {
            throw runtime_error("Access denied.");
        }

        system("cls");

        cout << "\t\t*****INVENTORY SYSTEM C++.2 *****\n";
        cout << "\nENTER NUMBER OF PRODUCTS FOR INVENTORY: ";
        int total_products;
        cin >> total_products;

        if (total_products <= 0) {
            throw invalid_argument("Number of products must be positive.");
        }

        product *products = new product[total_products];

        for (int i = 0; i < total_products; i++) {
            cout << "Product " << i + 1 << ": ";
            cin >> products[i].name;

            products[i].product_no = i + 1;

            cout << "\nHow many items for " << products[i].name << "? ";
            cin >> products[i].total_items;

            if (products[i].total_items <= 0) {
                throw invalid_argument("Number of items must be positive.");
            }

            products[i].items = new item[products[i].total_items];

            for (int j = 0; j < products[i].total_items; j++) {
                cout << products[i].name << "[" << j + 1 << "]: ";
                cin >> products[i].items[j].name;

                cout << "\nPRICE: Php";
                cin >> products[i].items[j].price;

                if (products[i].items[j].price < 0) {
                    throw invalid_argument("Price cannot be negative.");
                }

                cout << "Stock: ";
                cin >> products[i].items[j].stock;

                if (products[i].items[j].stock < 0) {
                    throw invalid_argument("Stock cannot be negative.");
                }

                cout << "Sold: ";
                cin >> products[i].items[j].sold;

                if (products[i].items[j].sold < 0) {
                    throw invalid_argument("Sold items cannot be negative.");
                }
                cout << endl;
            }
        }

        system("cls");

        cout << "\t\t*****INVENTORY SYSTEM C++.2 *****\n";
        cout << "PROD.NO\t\t" << "PRODUCT\t\t" << "NAME\t\t" << "PRICE\t\t" << "STOCK\t\t" << "SOLD\t\t" << "LEFT" << endl;

        for (int i = 0; i < total_products; i++) {
            for (int j = 0; j < products[i].total_items; j++) {
                if (j == 0)
                    cout << "[" << products[i].product_no << "]\t\t" << products[i].name << "\t\t";
                else
                    cout << "\t\t\t\t";

                item temp = products[i].items[j];

                cout << temp.name << "\t\t" << temp.price << "\t\t" << temp.stock << "\t\t" << temp.sold << "\t\t" << (temp.stock - temp.sold) << endl;
            }
            cout << endl;
        }

        // Freeing dynamically allocated memory
        for (int i = 0; i < total_products; i++) {
            delete[] products[i].items;
        }
        delete[] products;
    }
    catch (const exception& e) {
        cout << "An error occurred: " << e.what() << endl;
    }
}