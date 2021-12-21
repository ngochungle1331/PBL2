// Function to take order
// Time Complexity - O(n)
void computerType ::take_order()
{
    system("cls");
    int i;
    int choice, quantity, price, None;
    string str1 = "********************************************************************************************************************\n";
    string str2 = "+-------+-----------------+---------------------------------+------------------------------+-----------------------+\n";

    cout << "-----------------";
    cout << "\nAdd Order Details\n";
    cout << "-----------------\n\n";

    node *temp;
    temp = new node;

    cout << str1;
    cout << " ID "
         << "\t    LAPTOP TYPE"
         << "\t        LAPTOP CPU"
         << "   \t\t         LAPTOP NAME"
         << "    \t\tLAPTOP PRICE (USD.)" << endl;
    cout << str1;
    cout << "0001"
         << "\t"
         << "     16GB/1TB"
         << "\t\t"
         << " Apple M1"
         << "\t"
         << " \t\t MacBook Pro M1 2020     "
         << "  	2252.00" << endl;
    cout << str2;
    cout << "0002"
         << "\t"
         << "     8GB/512GB"
         << "\t\t"
         << " Apple M1"
         << "\t"
         << "\t\t MacBook Pro M1 2020     "
         << "	1678.00" << endl;
    cout << str2;
    cout << "0003"
         << "\t"
         << "     16GB/256GB"
         << "\t\t"
         << " Apple M1 "
         << "\t"
         << "\t\t MacBook Air M1 2020     "
         << "	1434.00" << endl;
    cout << str2;
    cout << "0004"
         << "\t"
         << "     16GB/512GB"
         << "\t\t"
         << " AMD Ryzen 7 5800H  "
         << "\t"
         << "\t Dell Gaming G15 5515     "
         << "	1474.00" << endl;
    cout << str2;
    cout << "0005"
         << "\t"
         << "     8GB/512GB"
         << "\t\t"
         << " Intel Core i5(11th Gen)        "
         << ""
         << " Dell Inspiron 7501     "
         << "	1346.00" << endl;
    cout << str2;
    cout << "0006"
         << "\t"
         << "     8GB/512GB"
         << "\t\t"
         << " Intel Core i7(11th Gen)"
         << "\t"
         << " Dell Vostro 3400        "
         << " 	1148.00" << endl;
    cout << str2;
    cout << "0007"
         << "\t"
         << "     8GB/512GB"
         << "\t\t"
         << " Intel Core i7(11th Gen) "
         << "\t"
         << " HP Envy 13 ba1030TU        "
         << " 	1085.00" << endl;
    cout << str2;
    cout << "0008"
         << "\t"
         << "     8GB/512GB"
         << "\t\t"
         << " Intel Core i5(11th Gen) "
         << "\t"
         << " HP Envy 13 ba1027TU        "
         << " 	 927.00" << endl;
    cout << str2;
    cout << "0009"
         << "\t"
         << "     8GB/512GB"
         << "\t\t"
         << " Intel Core i5(11th Gen) "
         << "\t"
         << " Acer Nitro 5 AN515        "
         << " 	 692.00" << endl;
    cout << str2;
    cout << "0010"
         << "\t"
         << "     16GB/1TB"
         << "\t\t"
         << " Ryzen 9 5900HS "
         << "\t\t"
         << " Acer Swift 3 SF313        "
         << " 	1768.00" << endl;
    cout << str2;
    cout << "0011"
         << "\t"
         << "     16GB/512GB"
         << "\t\t"
         << " Intel Core i7(11th Gen) "
         << "\t"
         << " Asus ZenBook UX425EA        "
         << " 	1324.00" << endl;
    cout << str2;
    cout << "0012"
         << "\t"
         << "     8GB/512GB"
         << "\t\t"
         << " Intel Core i7(11th Gen) "
         << "\t"
         << " Asus VivoBook TM420UA        "
         << " 	1324.00" << endl;
    cout << str2;
    cout << "0013"
         << "\t"
         << "     16GB/1TB"
         << "\t\t"
         << " Intel Core i7(11th Gen) "
         << "\t"
         << " Lenovo YOGA Slim 7 Carbon"
         << " 	1447.00" << endl;
    cout << str2;
    cout << "0014"
         << "\t"
         << "     8GB/512GB"
         << "\t\t"
         << " AMD Ryzen 7 5800H "
         << "\t\t"
         << " MSI Gaming Bravo 15        "
         << " 	1105.00" << endl;
    cout << str2;
    cout << "0015"
         << "\t"
         << "     8GB/512GB"
         << "\t\t"
         << " Intel Core i7(11th Gen) "
         << "\t"
         << " MSI GF75 Thin 10SCXR        "
         << " 	1038.00" << endl;
    cout << str2;
    cout << str1;
    cout << " " << endl;

    temp = new node;

    string str = "-------------------------------------------\n";

    cout << str;

    cout << "Type Order No: ";
    cin >> temp->receipt_number;

    cout << "Enter Customer Name: ";
    cin >> temp->customerName;

    cout << "Enter Date: ";
    cin >> temp->date;

    cout << str;

    cout << "\nHow many different laptops would you like to order?";
    cout << "\n(Maximum order is 10 for each transaction): ";
    cin >> temp->x;

    cout << endl;

    if (temp->x <= 0)
    {
         cout << "\nInvalid order!!!\n";
         cout << str;
         system("pause");
    }

    else if (temp->x > 10)
    {
        cout << "\nYour order exceeds the maximum amount of order!!!\n"; 
        cout << str;
        system("pause");
    }

    else
    {
         cout << str;
         
         cout << "\t    Enter Computer ID\n";

         for (i = 0; i < temp->x; i++)
         {
              cout << str;

              cout << "Please Enter Your Selection: ";
              cin >> temp->menu2[i];

              cout << "\nLaptop Name: " << temp->computerName[temp->menu2[i] - 1] << endl;

              cout << "\nHow many laptops do you want?: ";
              cin >> temp->quantity[i];

              temp->amount[i] = temp->quantity[i] * temp->computer[temp->menu2[i] - 1];
              cout << "\nThe amount You need to pay is:  " << temp->amount[i] << ".00 USD.   " << endl;

              cout << str << endl;

              system("PAUSE");
        }

        cout << "\n===========================================================================" << endl;
        cout << "                     Order Taken Successfully..." << endl;
        cout << "===========================================================================" << endl;
        cout << "                Go to Receipt Menu to Pay The Bill" << endl;
        cout << "===========================================================================\n" << endl;

        system("PAUSE");

        temp->next = NULL;

        if (start_ptr != NULL)
            temp->next = start_ptr;

        start_ptr = temp;

        system("cls");
    }

} // End function take_order
