#include <iostream>
#include <fstream>
#include <cstdlib> // For genenrating random indexes which are inturn used for generating strong password
#include <ctime>   // used with cstdlib to generate random numbers also for manipulating and formatting date and time.
#include <string>
#include <vector>
#include <iomanip> // For formatting output
#include <sstream> // For string stream
#include <chrono>  // used for the delayed animation i.e using sleep_for
#include <thread>  // used with chrono library
using namespace std;

// Structure to represent a product
struct Product
{
    string productCode;
    string productName;
    string description;
    string location;
    string deliveryOption;
    int quantity;
    double price;
    double discount;
    string producerName;
    string producerPhoneNumber;
    string producerBankAccount;
};

// Structure to represent a buyer
struct BuyerInfo
{
    string buyerName;
    string buyerPhoneNumber;
    string buyerBankAccount;
};

class temp
{
    string userName, Email, password, userSearch;
    string searchName, searchPass, searchEmail;
    fstream file;

public:
    string getStrongPassword(int);
    void forgot();
    void login();
    void signUP();

    void welcomePage();
    void menu();

} obj;

void redirect();

class ProductOwner
{
private:
    vector<Product> products;
    string trim(const string &str);

public:
    void productOwnerMenu();

    // Product management methods
    void addProduct();

    void loadProductsFromFile();

    void searchProduct();

    // void updateProduct(const string &productCode);
    // void removeProduct(const string &productCode);
    void listProducts() const;

    void updateProduct(const string &productCode, const string &ownerName, const string &ownerPhoneNumber); // used to check if the user is indeed the owner of the product and letting him/her update
    void removeProduct(const string &productCode, const string &ownerName, const string &ownerPhoneNumber);

} p;

class Buyer
{
public:
    void buyerMenu();

    // Buyer-specific methods
    void buyProduct();
    void buyProduct(const Product &product); // used to search products

} b;

void ProductOwner::productOwnerMenu()
{
    int choice;

    while (true)
    {
        cout << "\n\n\t\t\t   Product Owner (Producer) Menu";
        cout << "\n\t\t\t _______________________________________";
        cout << "\n\t\t\t|\t                           \t|";
        cout << "\n\t\t\t|\t 1. Add The Product        \t|";
        cout << "\n\t\t\t|\t 2. Modify The Product     \t|";
        cout << "\n\t\t\t|\t 3. Delete The Product     \t|";
        cout << "\n\t\t\t|\t 4. List The Product       \t|";
        cout << "\n\t\t\t|\t 5. Back To Main Menu      \t|";
        cout << "\n\t\t\t|_______________________________________|";
        cout << "\n\n\t Please enter your choice: ";
        cin >> choice;

        cout << "\n\n";
        switch (choice)
        {
        case 1:
            system("cls");
            p.addProduct();
            break;
        case 2:
        {
            string productCode;
            string ownerName;
            string ownerPhoneNumber;
            cin.ignore();
            cout << "Enter your name to verify your identity: ";
            getline(cin, ownerName);

            cout << "Enter your phone number to verify your identity: ";
            getline(cin, ownerPhoneNumber);

            cout << "Enter product code to update: ";
            getline(cin, productCode);

            p.updateProduct(productCode, ownerName, ownerPhoneNumber);
            break;
        }
        case 3:
        {
            string productCode;
            string ownerName;
            string ownerPhoneNumber;
            cin.ignore();
            cout << "Enter your name to verify your identity: ";
            getline(cin, ownerName);

            cout << "Enter your phone number to verify your identity: ";
            getline(cin, ownerPhoneNumber);

            cout << "Enter product code to remove: ";
            getline(cin, productCode);

            p.removeProduct(productCode, ownerName, ownerPhoneNumber);
            break;
        }
        case 4:
            system("cls");
            p.listProducts();
            break;
        case 5:
            system("cls");
            redirect();
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    }
}

void Buyer::buyerMenu()
{

    char choice;

    while (true)
    {
        cout << "\n\n\t\t\t\t\tBuyer Menu";
        cout << "\n\t\t\t _______________________________________";
        cout << "\n\t\t\t|\t                                |";
        cout << "\n\t\t\t|\t 1. List Products               |";
        cout << "\n\t\t\t|\t 2. Buy Product                 |";
        cout << "\n\t\t\t|\t 3. Search for products         |";
        cout << "\n\t\t\t|\t 4. Back To Main Menu           |";
        cout << "\n\t\t\t|_______________________________________|";
        cout << "\n\n\t Please enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case '1':
            system("cls");
            p.listProducts();
            break;
        case '2':

            b.buyProduct();
            break;
        case '3':
            system("cls");

            p.searchProduct();
            break;
        case '4':
            system("cls");
            redirect();
            return; // Exit the loop after redirecting
        default:
            cout << "\n\nInvalid choice. Please try again." << endl;
            system("pause"); // Pause to let the user read the error message
            system("cls");
            break;
        }
    }
}

void ProductOwner::addProduct()
{
    ofstream outfile("Products.txt", ios::out | ios::app);

    if (outfile.is_open())
    {
        Product newProduct;
        cout << "Enter product code: ";
        cin >> newProduct.productCode;
        cout << "Enter product name: ";
        cin.ignore(); // Consume newline character
        getline(cin, newProduct.productName);
        cout << "Enter product description: ";
        getline(cin, newProduct.description);
        cout << "Enter product location: ";
        getline(cin, newProduct.location);
        cout << "Enter delivery option: ";
        getline(cin, newProduct.deliveryOption);
        cout << "Enter The Product Quantity 1 packet as 1Kg: ";
        cin >> newProduct.quantity;
        cout << "Enter product price per 1Kg: ";
        cin >> newProduct.price;
        cout << "Enter discount (percentage): ";
        cin >> newProduct.discount;

        // Adding producer's details
        cout << "Enter your name or Company name: ";
        cin.ignore(); // Consume newline character
        getline(cin, newProduct.producerName);
        cout << "Enter your phone number or your Company phone number: ";
        getline(cin, newProduct.producerPhoneNumber);
        cout << "Enter your bank account number or your Company bank account: ";
        getline(cin, newProduct.producerBankAccount);

        outfile << newProduct.productCode << "," << newProduct.productName << "," << newProduct.description << ","
                << newProduct.location << "," << newProduct.deliveryOption << "," << newProduct.quantity << "," << newProduct.price << ","
                << newProduct.discount << "," << newProduct.producerName << "," << newProduct.producerPhoneNumber << "," << newProduct.producerBankAccount << endl;

        products.push_back(newProduct);

        cout << "Product added successfully!" << endl;

        outfile.close();
    }
    else
    {
        cout << "Error opening file for writing." << endl;
    }
}

void ProductOwner::searchProduct()
{
    string productNameSearch;
    cout << "\n\nEnter product name to search: ";
    cin.ignore();
    getline(cin, productNameSearch);

    ifstream infile("Products.txt");
    if (!infile.is_open())
    {
        cout << "Error opening file for reading." << endl;
        return;
    }

    string line;
    vector<Product> foundProducts;
    while (getline(infile, line))
    {
        Product product;
        istringstream iss(line);
        string token;

        getline(iss, product.productCode, ',');
        getline(iss, product.productName, ',');
        getline(iss, product.description, ',');
        getline(iss, product.location, ',');
        getline(iss, product.deliveryOption, ',');
        iss >> product.quantity;
        iss.ignore();
        iss >> product.price;
        iss.ignore();
        iss >> product.discount;
        iss.ignore();
        getline(iss, product.producerName, ',');
        getline(iss, product.producerPhoneNumber, ',');
        getline(iss, product.producerBankAccount, ',');

        if (product.productName == productNameSearch)
        {
            foundProducts.push_back(product);
        }
    }

    infile.close();

    if (foundProducts.empty())
    {
        cout << "No products with the name " << productNameSearch << " found." << endl;
    }
    else
    {
        cout << "\n\n--------------------------------------------------------------PRODUCTS LIST-----------------------------------------------------------------\n\n\n\n";

        cout << left << setw(5) << "No. " << setw(15) << "Product Code" << setw(20) << "Product Name" << setw(35) << "Product Description" << setw(15) << "Location" << setw(12) << "Delivery" << setw(15) << "Quantity(KG)" << setw(18) << "Price/KG(Birr)" << setw(15) << "Discount(in%)\n\n"
             << endl;
        for (size_t i = 0; i < foundProducts.size(); ++i)
        {
            const Product &product = foundProducts[i];
            cout << left << setw(5) << (i + 1) << setw(15) << product.productCode << setw(20) << product.productName << setw(35) << product.description << setw(15) << product.location << setw(12) << product.deliveryOption << setw(15) << product.quantity << setw(18) << product.price << setw(15) << product.discount << "\n"
                 << endl;
        }

        string productCode;
        cout << "\nEnter the product code of the product you want to buy: ";
        cin >> productCode;

        bool productFound = false;
        for (const Product &product : foundProducts)
        {
            if (product.productCode == productCode)
            {
                productFound = true;
                b.buyProduct(product);
                break;
            }
        }

        if (!productFound)
        {
            cout << "Invalid selection." << endl;
        }
    }
}

void ProductOwner::updateProduct(const string &productCode, const string &ownerName, const string &ownerPhoneNumber)
{
    ifstream infile("Products.txt");
    ofstream outfile("TempProducts.txt", ios::out | ios::trunc); // Open output file for writing (overwrite mode)
    bool productFound = false;

    system("cls");
    cout << "\n\nStarting validation..." << endl;
    cout << "Validating. Please wait";

    cout.flush(); // Ensure the message is immediately visible

    // Simulate a pause for the duration specified
    this_thread::sleep_for(chrono::milliseconds(500));

    for (int i = 0; i < 3; ++i) // Changed to 5 dots
    {
        this_thread::sleep_for(chrono::milliseconds(1000));
        cout << ".";
        cout.flush(); // Ensure dots are immediately visible
    }

    cout << "\n\nValidation complete!" << endl;

    if (infile.is_open() && outfile.is_open())
    {
        Product product;
        string line;

        while (getline(infile, line)) // Read each line from the input file
        {
            stringstream ss(line); // Use stringstream to parse line
            getline(ss, product.productCode, ',');
            getline(ss, product.productName, ',');
            getline(ss, product.description, ',');
            getline(ss, product.location, ',');
            getline(ss, product.deliveryOption, ',');
            ss >> product.quantity;
            ss.ignore(); // Ignore the comma
            ss >> product.price;
            ss.ignore(); // Ignore the comma
            ss >> product.discount;
            ss.ignore(); // Ignore the comma
            getline(ss, product.producerName, ',');
            getline(ss, product.producerPhoneNumber, ',');
            getline(ss, product.producerBankAccount);

            if (product.productCode == productCode)
            {
                if (trim(product.producerName) == ownerName && trim(product.producerPhoneNumber) == ownerPhoneNumber)
                {
                    cout << "You are authorized to update this product.\n"
                         << endl;

                    cin.ignore(); // Consume newline character left by previous input

                    cout << "Enter new product name: ";
                    getline(cin, product.productName);
                    cout << "Enter new product description: ";
                    getline(cin, product.description);
                    cout << "Enter new product location: ";
                    getline(cin, product.location);
                    cout << "Enter new delivery option: ";
                    getline(cin, product.deliveryOption);
                    cout << "Enter The Product Quantity 1 packet as 1Kg: ";
                    cin >> product.quantity;
                    cout << "Enter new product price per 1Kg: ";
                    cin >> product.price;
                    cout << "Enter new discount (percentage): ";
                    cin >> product.discount;
                    cin.ignore(); // Consume newline after reading double

                    productFound = true;
                    cout << "Product updated successfully!" << endl;
                }
                else
                {
                    cout << "You are not allowed to alter this product as it does not belong to you." << endl;
                }
            }

            // Write the updated or unchanged product details to the output file
            outfile << product.productCode << "," << product.productName << "," << product.description << ","
                    << product.location << "," << product.deliveryOption << "," << product.quantity << "," << product.price << ","
                    << product.discount << "," << product.producerName << "," << product.producerPhoneNumber << "," << product.producerBankAccount << endl;
        }

        infile.close();  // Close input file
        outfile.close(); // Close output file

        // Remove the original file and rename the temporary file to the original file name
        if (productFound)
        {
            remove("Products.txt");
            rename("TempProducts.txt", "Products.txt");
        }
        else
        {
            cout << "\nSorry! The Product is not found.\n"
                 << endl;
        }
    }
    else
    {
        cout << "Error opening file." << endl;
    }
}

void ProductOwner::removeProduct(const string &productCode, const string &ownerName, const string &ownerPhoneNumber)
{
    ifstream infile("Products.txt");
    ofstream outfile("TempProducts.txt", ios::out | ios::trunc); // Use ios::trunc to overwrite the file
    bool productFound = false;

    system("cls");
    cout << "\n\nStarting validation..." << endl;
    cout << "Validating. Please wait";

    cout.flush(); // Ensure the message is immediately visible

    // Simulate a pause for the duration specified
    this_thread::sleep_for(chrono::milliseconds(500));

    for (int i = 0; i < 3; ++i) // Changed to 5 dots
    {
        this_thread::sleep_for(chrono::milliseconds(1000));
        cout << ".";
        cout.flush(); // Ensure dots are immediately visible
    }

    cout << "\n\nValidation complete!" << endl;

    if (infile.is_open() && outfile.is_open())
    {
        Product product;
        while (getline(infile, product.productCode, ','))
        {
            getline(infile, product.productName, ',');
            getline(infile, product.description, ',');
            getline(infile, product.location, ',');
            getline(infile, product.deliveryOption, ',');
            infile >> product.quantity;
            infile.ignore(); // Ignore the comma
            infile >> product.price;
            infile.ignore(); // Ignore the comma
            infile >> product.discount;
            infile.ignore(); // Ignore the comma
            getline(infile, product.producerName, ',');
            getline(infile, product.producerPhoneNumber, ',');
            getline(infile, product.producerBankAccount, '\n');

            if (product.productCode == productCode)
            {
                if (trim(product.producerName) == ownerName && trim(product.producerPhoneNumber) == ownerPhoneNumber)
                {
                    productFound = true;
                    cout << "\n\nProduct removed successfully!" << endl;
                }
                else
                {
                    cout << "\nYou are not authorized to remove this product.\n"
                         << endl;
                    p.productOwnerMenu();
                    return; // Exit the function if not authorized
                }
            }
            else
            {
                outfile << product.productCode << "," << product.productName << "," << product.description << ","
                        << product.location << "," << product.deliveryOption << "," << product.quantity << "," << product.price << ","
                        << product.discount << "," << product.producerName << "," << product.producerPhoneNumber << "," << product.producerBankAccount << endl;
            }
        }

        infile.close();
        outfile.close();

        remove("Products.txt");
        rename("TempProducts.txt", "Products.txt");

        if (!productFound)
        {
            cout << "\nSorry! The Product is not found.\n"
                 << endl;
        }
    }
    else
    {
        cout << "Error opening file." << endl;
    }
}

string ProductOwner::trim(const string &str)
{
    size_t first = str.find_first_not_of(' ');
    if (string::npos == first)
    {
        return str;
    }
    size_t last = str.find_last_not_of(' ');
    return str.substr(first, (last - first + 1));
}

void ProductOwner::listProducts() const
{
    cout << "\n\n--------------------------------------------------------------PRODUCTS LIST--------------------------------------------------------------\n\n\n\n";
    p.loadProductsFromFile();
    if (products.empty())
    {
        cout << "No products listed." << endl;
        p.productOwnerMenu();
    }
    else
    {
        cout << left << setw(5) << "No. " << setw(15) << "Product Code" << setw(20) << "Product Name" << setw(35) << "Product Description" << setw(15) << "Location" << setw(12) << "Delivery" << setw(15) << "Quantity(KG)" << setw(18) << "Price/KG(Birr)" << setw(15) << "Discount(in%)\n\n"
             << endl;

        int i = 1;
        for (const Product &product : products)
        {
            cout << left << setw(5) << i << setw(15) << product.productCode << setw(20) << product.productName << setw(35) << product.description << setw(15) << product.location << setw(12) << product.deliveryOption << setw(15) << product.quantity << setw(18) << product.price << setw(15) << product.discount << "\n"
                 << endl;
            ++i;
        }
    }
}

void ProductOwner::loadProductsFromFile()
{
    ifstream infile("Products.txt"); // default mode is ios::in
    Product product;

    if (infile.is_open())
    {
        products.clear(); // Clear existing products before loading new ones
        string line;
        while (getline(infile, line))
        {
            stringstream ss(line);
            string productCode, productName, description, location, deliveryOption, quantityStr, priceStr, discountStr, producerName, producerPhoneNumber, producerBankAccount;

            getline(ss, productCode, ',');
            getline(ss, productName, ',');
            getline(ss, description, ',');
            getline(ss, location, ',');
            getline(ss, deliveryOption, ',');
            getline(ss, quantityStr, ',');
            getline(ss, priceStr, ',');
            getline(ss, discountStr, ',');
            getline(ss, producerName, ',');
            getline(ss, producerPhoneNumber, ',');
            getline(ss, producerBankAccount, ',');

            if (!productCode.empty())
            {
                product.productCode = productCode;
                product.productName = productName;
                product.description = description;
                product.location = location;
                product.deliveryOption = deliveryOption;
                product.quantity = stoi(quantityStr);
                product.price = stod(priceStr);
                product.discount = stod(discountStr);
                product.producerName = producerName;
                product.producerPhoneNumber = producerPhoneNumber;
                product.producerBankAccount = producerBankAccount;
                products.push_back(product);
            }
        }
        infile.close();
    }
    else
    {
        cout << "Unable to open product file." << endl;
    }
}

void Buyer::buyProduct()
{
    string productName, productCode;
    cout << "\n\nEnter the product name: ";
    cin.ignore();
    getline(cin, productName);
    cout << "Enter product code to buy: ";
    cin >> productCode;

    ifstream infile("Products.txt");
    ofstream purchaseInfo("purchaseInfo.txt", ios::app | ios::out);

    bool productFound = false;
    bool insufficientStock = false;

    if (infile.is_open())
    {
        string line;
        while (getline(infile, line))
        {
            Product product;
            istringstream iss(line);

            getline(iss, product.productCode, ',');
            getline(iss, product.productName, ',');
            getline(iss, product.description, ',');
            getline(iss, product.location, ',');
            getline(iss, product.deliveryOption, ',');

            string quantityStr, priceStr, discountStr;
            getline(iss, quantityStr, ',');
            getline(iss, priceStr, ',');
            getline(iss, discountStr, ',');

            product.quantity = stoi(quantityStr);
            product.price = stod(priceStr);
            product.discount = stod(discountStr);

            getline(iss, product.producerName, ',');
            getline(iss, product.producerPhoneNumber, ',');
            getline(iss, product.producerBankAccount, ',');

            if (product.productName == productName && product.productCode == productCode)
            {
                productFound = true;

                int qtyToBuy;
                cout << "Enter quantity to buy (in Kg): ";
                cin >> qtyToBuy;

                double amount = product.price * qtyToBuy;
                double totalAmount = amount - (amount * (product.discount / 100));

                if (qtyToBuy <= product.quantity)
                {
                    BuyerInfo buyer;
                    cout << "Enter your name: ";
                    cin.ignore();
                    getline(cin, buyer.buyerName);
                    cout << "Enter your phone number: ";
                    getline(cin, buyer.buyerPhoneNumber);
                    cout << "Enter your bank account number: ";
                    getline(cin, buyer.buyerBankAccount);

                    cout << "\n\n____________________ Purchase Details ____________________\n\n"
                         << "Product Code:             \t" << product.productCode << "\n\n"
                         << "Product Name:             \t" << product.productName << "\n\n"
                         << "Description:              \t" << product.description << "\n\n"
                         << "Location:                 \t" << product.location << "\n\n"
                         << "Delivery Option:          \t" << product.deliveryOption << "\n\n"
                         << "Product Quantity (1Kg):   \t" << product.quantity << "\n\n"
                         << "Price:                    \t$" << fixed << setprecision(2) << amount << "\n\n"
                         << "Discount:                 \t" << product.discount << "%\n\n"
                         << "Total Amount Paid:        \t$" << fixed << setprecision(2) << totalAmount << "\n\n"
                         << "Producer Name:            \t" << product.producerName << "\n\n"
                         << "Producer Phone Number:    \t" << product.producerPhoneNumber << "\n\n"
                         << "Producer Bank Account:    \t" << product.producerBankAccount << "\n\n"
                         << "Buyer Name:               \t" << buyer.buyerName << "\n\n"
                         << "Buyer Phone Number:       \t" << buyer.buyerPhoneNumber << "\n\n"
                         << "Buyer Bank Account:       \t" << buyer.buyerBankAccount << "\n\n";

                    product.quantity -= qtyToBuy;
                    cout << "\n\nProduct bought successfully!" << endl;

                    // Save purchase information
                    purchaseInfo << product.productCode << "," << product.productName << "," << product.description << ","
                                 << product.location << "," << product.deliveryOption << "," << qtyToBuy << "," << totalAmount << ","
                                 << product.producerName << "," << product.producerPhoneNumber << "," << product.producerBankAccount << ","
                                 << buyer.buyerName << "," << buyer.buyerPhoneNumber << "," << buyer.buyerBankAccount << endl;
                    break;
                }
                else
                {
                    insufficientStock = true;
                    cout << "\n\nInsufficient stock.\t\t Available quantity: " << product.quantity << endl;
                    ProductOwner po;
                    po.searchProduct();
                }
            }
        }

        purchaseInfo.close();
        infile.close();

        if (!productFound)
        {
            cout << "Sorry! The product " << productName << " with code " << productCode << " is not found." << endl;
        }
    }
    else
    {
        cout << "Error opening product file" << endl;
    }
}

void Buyer::buyProduct(const Product &product)
{
    ifstream infile("Products.txt");
    ofstream purchaseInfo("purchaseInfo.txt", ios::app | ios::out);

    if (!infile.is_open())
    {
        cout << "Error opening product file" << endl;
        return;
    }

    bool insufficientStock = false;

    int qtyToBuy;
    cout << "Enter quantity to buy (in Kg): ";
    cin >> qtyToBuy;

    double amount = product.price * qtyToBuy;
    double totalAmount = amount - (amount * (product.discount / 100));

    if (qtyToBuy <= product.quantity)
    {
        BuyerInfo buyer;
        cout << "Enter your name: ";
        cin.ignore();
        getline(cin, buyer.buyerName);
        cout << "Enter your phone number: ";
        getline(cin, buyer.buyerPhoneNumber);
        cout << "Enter your bank account number: ";
        getline(cin, buyer.buyerBankAccount);

        cout << "\n\n____________________ Purchase Details ____________________\n\n"
             << "Product Code:             \t" << product.productCode << "\n\n"
             << "Product Name:             \t" << product.productName << "\n\n"
             << "Description:              \t" << product.description << "\n\n"
             << "Location:                 \t" << product.location << "\n\n"
             << "Delivery Option:          \t" << product.deliveryOption << "\n\n"
             << "Product Quantity (1Kg):   \t" << product.quantity << "\n\n"
             << "Price:                    \t$" << fixed << setprecision(2) << amount << "\n\n"
             << "Discount:                 \t" << product.discount << "%\n\n"
             << "Total Amount Paid:        \t$" << fixed << setprecision(2) << totalAmount << "\n\n"
             << "Producer Name:            \t" << product.producerName << "\n\n"
             << "Producer Phone Number:    \t" << product.producerPhoneNumber << "\n\n"
             << "Producer Bank Account:    \t" << product.producerBankAccount << "\n\n"
             << "Buyer Name:               \t" << buyer.buyerName << "\n\n"
             << "Buyer Phone Number:       \t" << buyer.buyerPhoneNumber << "\n\n"
             << "Buyer Bank Account:       \t" << buyer.buyerBankAccount << "\n\n";

        // Save purchase information
        purchaseInfo << product.productCode << "," << product.productName << "," << product.description << ","
                     << product.location << "," << product.deliveryOption << "," << qtyToBuy << "," << totalAmount << ","
                     << product.producerName << "," << product.producerPhoneNumber << "," << product.producerBankAccount << ","
                     << buyer.buyerName << "," << buyer.buyerPhoneNumber << "," << buyer.buyerBankAccount << endl;

        cout << "\n\nProduct bought successfully!" << endl;
    }
    else
    {
        insufficientStock = true;
        cout << "Insufficient stock. Available quantity: " << product.quantity << endl;
        ProductOwner po;
        po.searchProduct();
    }

    purchaseInfo.close();
    infile.close();
}

void redirect()
{
menu:

    char choice;
    cout << "\t\t\t WELCOME TO GEBEYA WHAT DO YOU WANT TO DO TODAY\n";
    cout << "\n\t\t\t ________________________________________";
    cout << "\n\t\t\t|\t                                 |";
    cout << "\n\t\t\t|\t 1. BUY PRODUCT                  |";
    cout << "\n\t\t\t|\t 2. SELL PRODUCT                 |";
    cout << "\n\t\t\t|\t 3. Back To Main Menu            |";
    cout << "\n\t\t\t|\t 4. EXIT                         |";
    cout << "\n\t\t\t|________________________________________|";

    cout << "\n\nEnter you choice : ";
    cin >> choice;
    switch (choice)
    {
    case '1':
        system("cls");
        b.buyerMenu();
        break;
    case '2':
        system("cls");
        p.productOwnerMenu();
        break;
    case '3':
        system("cls");
        obj.menu();
        break;
    case '4':
        cout << "Program is exiting.....\n\n THANK YOU FOR USING GEBEYA, HAVE A GOOD DAY!\n";
        return;
        break;
    default:
        system("cls");
        cout << "Invalid Selection...!";
        cout << "\nPlease choose again from the given alternatives.\n";
        goto menu;
    }
}

int main()
{
    system("color A");
    obj.welcomePage();
    obj.menu();
    return 0;
}

void temp::signUP()
{
    bool userNameTaken;

    cout << "-------------------SIGN UP------------------" << endl;

    do
    {
        userNameTaken = false;
        cout << "\nEnter Your User Name: ";
        getline(cin, userName);

        file.open("loginData.txt", ios::in);
        if (file.is_open())
        {
            while (getline(file, userSearch, ','))
            {
                getline(file, Email, ',');
                getline(file, password, '\n');
                if (userName == userSearch)
                {
                    cout << "\nThis user name has been taken, Please choose another one.\n";
                    userNameTaken = true;
                    break;
                }
            }
            file.close();
        }
    } while (userNameTaken);
    file.close();

    cout << "Enter Your Email Address : ";
    getline(cin, Email);
    cout << "\n1- Create your own password. \n2- Generate a strong password. \n";
    int choice_for_password;
    cout << "\nEnter Your choice : ";
    cin >> choice_for_password;

    cin.ignore(2, '\n'); // always put this one if there is a cin for an integer and after it there is a getline statement

    if (choice_for_password == 1)
    {
        cout << "\nEnter your customized password : ";

        getline(cin, password);
    }
    else
    {
        password = getStrongPassword(4);
        cout << "Your strong generated password is : " << password;
    }

    file.open("loginData.txt", ios ::out | ios ::app);
    file << userName << ", " << Email << "," << password << endl;
    file.close();

    cout << "\n\nYOU HAVE BEEN REGISTERED SUCCESSFULLY, THANK YOU FOR CHOOSING US!\n";
}

void temp::login()
{
    cout << "-------------------LOGIN------------------" << endl;

    cout << "Enter Your User Name : ";
    getline(cin, searchName);

    int choice_for_forgot_password;
    cout << "\n1. Enter password.\n2. FORGOT password.\n\nEnter your choice : ";
    cin >> choice_for_forgot_password;

    cin.ignore(); // Consume newline character left by previous input

    if (choice_for_forgot_password == 2)
    {
        system("cls");
        temp::forgot();
    }
    else
    {
        cout << "\nEnter Your Password : ";
        getline(cin, searchPass);

        ifstream file("loginData.txt");
        if (file.is_open())
        {
            int userFound = 3; // Initialize userFound to 3 (not found)

            while (!file.eof())
            {
                getline(file, userName, ',');
                getline(file, Email, ',');
                getline(file, password, '\n');

                if (userName == searchName && password == searchPass)
                {
                    userFound = 1;
                    break;
                }
                else if (userName == searchName && password != searchPass)
                {
                    userFound = 2;
                    break;
                }
            }

            file.close();

            if (userFound == 1)
            {
                system("cls");
                cout << "\n~~~~~~~~~~~~~LOGIN SUCCESSFUL~~~~~~~~~~~~~\n"
                     << endl;
                cout << "WELCOME BACK " << userName << endl;
            }
            else if (userFound == 2)
            {
                cout << "\nWrong Password...!" << endl;
                cout << "\nWould you like to try again or reset your password?\n";
                cout << "1. Try Again\n2. Reset Password\n";
                int choice;
                cout << "\nEnter your choice: ";
                cin >> choice;
                cin.ignore();

                if (choice == 1)
                {
                    system("cls");
                    login(); // Retry login
                }
                else if (choice == 2)
                {
                    system("cls");
                    temp::forgot(); // Initiate password reset
                }
                else
                {
                    cout << "\nInvalid choice. Returning to login.\n";
                    system("cls");
                    login(); // Retry login
                }
            }
            else
            {
                cout << "\nWRONG ACCOUNT DETAILS!" << endl;
                cout << "\nPlease register if you don't have an account, press enter to register.\n";
                cin.ignore();
                system("cls");
                temp::signUP();
            }
        }
        else
        {
            cout << "Error opening file for reading." << endl;
        }
    }
}

void temp::forgot()
{
forgot:
    cout << "\nEnter Your User Name : ";
    getline(cin, searchName);
    cout << "Enter Your Email Address : ";
    getline(cin, searchEmail);

    file.open("loginData.txt", ios ::in);

    bool userFound = false;
    while (!file.eof())
    {
        getline(file, userName, ',');
        getline(file, Email, ',');
        getline(file, password, '\n');

        if (userName == searchName && Email == searchEmail)
        {
            userFound = true;
            break;
        }
    }

    if (userFound == true)
    {
        cout << "\nAccount Found...!" << endl;
        cout << "Your Password is : " << password << endl;
        cin.ignore();
        temp::login();
    }
    else
    {
        cout << "\nAccount Not Found...!" << endl;
        cout << "Please register if you don't have an account or try again.\n\n";
        cout << "1. Register \n2. Try again\n";
        int choice;
        cout << "\nEnter your choice : ";
        cin >> choice;
        cin.ignore();
        if (choice == 1)
        {
            system("cls");
            temp::signUP();
        }
        else
        {
            system("cls");
            goto forgot;
        }
    }
    file.close();
}

string temp::getStrongPassword(int length)
{
    string Password = "";
    string uppercaseCharacters = "QWERTYUIOPASDFGHJKLZXCVBNM";
    string specialCharacters = "~!@#$%^&_+-=<>?";
    string lowercaseCharacters = "plmoknijbuhvgytfcrdxzsewaq"; // tolower(uppercaseCharacters);
    string numbers = "0123456789";

    /*******************Uppercase Characters***********************/
    int charSize = uppercaseCharacters.size(); // This statement finds the number of characters that have been initialized.
    srand(time(0));
    int randomIndex1; // Generates a radome number in the range of charSize.
    for (int i = 0; i < length; i++)
    {
        randomIndex1 = rand() % (charSize + 1);
        Password = Password + uppercaseCharacters[randomIndex1];
    }
    /*******************Spacial Characters***********************/
    charSize = specialCharacters.size();
    srand(time(0));
    int randomIndex2;
    for (int i = 0; i < length; i++)
    {
        randomIndex2 = rand() % (charSize + 1);
        Password = Password + specialCharacters[randomIndex2];
    }
    /*******************Lowercase Characters***********************/
    charSize = lowercaseCharacters.size();
    srand(time(0));
    int randomIndex3;
    for (int i = 0; i < length; i++)
    {
        randomIndex3 = rand() % (charSize + 1);
        Password = Password + lowercaseCharacters[randomIndex3];
    }
    /*********************Number Characters************************/
    charSize = numbers.size();
    srand(time(0));
    int randomIndex4;
    for (int i = 0; i < length; i++)
    {
        randomIndex4 = rand() % (charSize + 1);
        Password = Password + numbers[randomIndex4];
    }

    /*********************Randomize the characters************************/
    charSize = Password.size();
    srand(time(0));
    for (int i = 0; i < Password.size(); i++)
    {
        int j = rand() % (i + 1);
        swap(Password[i], Password[j]);
    }

    return Password; // Finally a strong 16 character  password is returned.
}

void temp::menu()
{
    char choice;

    cout << "\n\t\t ________________________________________________";
    cout << "\n\t\t =                                              =";
    cout << "\n\t\t =    WELCOME TO GEBEYA ONLINE MARKET CENTER    =";
    cout << "\n\t\t =                                              =";
    cout << "\n\t\t =______________________________________________=\n";

menu: // label for the default switch case

    cout << "\n\t\t\t _______________________________";
    cout << "\n\t\t\t| 1. SING-UP                    |";
    cout << "\n\t\t\t| 2. LOGIN                      |";
    cout << "\n\t\t\t| 3. EXIT                       |";
    cout << "\n\t\t\t|_______________________________|";

    cout << "\n\n\t\t\tPlease enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case '1':
        system("cls");
        cin.ignore();
        obj.signUP();
        redirect();
        break;
    case '2':
        system("cls");
        cin.ignore();
        obj.login();
        redirect();
        break;
    case '3':
        cout << "Program is exiting.....\n\n THANK YOU USING GEBEYA, HAVE A GOOD DAY!\n";
        return;
        break;
    default:
        system("cls");
        cout << "Invalid Selection...!";
        cout << "\nPlease choose again from the given alternatives.\n";
        goto menu;
    }
}

void temp::welcomePage()
{
    cout << "\n _____________________________________________________________________________________\n";
    cout << "|             WELCOME TO GEBEYA AUTOMATED FOOD SUPPLY MARKET CENTER                   |\n";
    cout << "|-------------------------------------------------------------------------------------|\n";
    cout << "|-------------------------------------------------------------------------------------|\n";
    cout << "|               ADDIS ABABA SCIENCES AND TECHNOLOGY UNIVERSITY                        |\n";
    cout << "|                            UNIVERSITY FOR INDUSTRY                                  |\n";
    cout << "|                      DEPARTMENT OF SOFTWARE ENGINEERING                             |\n";
    cout << "|-------------------------------------------------------------------------------------|\n";
    cout << "|                  This project was designed by CODE WORRIES Team                     |\n";
    cout << "|_____________________________________________________________________________________|\n";
    cout << "\n\t  GEBEYA AUTOMATED FOOD SUPPLY MARKET center Registration page\n\n";
    cout << "\t  *************************** MENU ***************************\n";
}
