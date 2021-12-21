// Function to modify order
// Time Complexity - O(n^2)
void computerType ::modify()
{
    system("cls");
    int i, ch, sid;
    bool found = false;
    temp = start_ptr;
    
    string str1 = "********************************************************************************************************************\n";
    string str2 = "+-------+-----------------+---------------------------------+------------------------------+-----------------------+\n";


    if (temp == NULL || sid == 0)
    {
        cout << "\n\t\t=============================\n";
        cout << "\t\t    NO RECORD TO MODIFY...!\n";
        cout << "\t\t=============================\n\n";
    }

    else
    {
        cout << "\nEnter Receipt Number To Modify: ";
        cin >> sid;

        while (temp != NULL && !found)
        {
            if (temp->receipt_number == sid)
                found = true;

            else
                temp = temp->next;

            if (found)
            {
                cout << "Change Order Number: ";
                cin >> temp->receipt_number;

                cout << "Change Customer Name: ";
                cin >> temp->customerName;

                cout << "Change Date : ";
                cin >> temp->date;
                cout << "-----------------";
    cout << "\nAdd Order Details\n";
    cout << "-----------------\n\n";
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

                cout << "\nHow many new laptops would you like to change" << endl;
                cout << "(Maximum is 10 order for each transaction): ";
                cin >> temp->x;

                if (temp->x > 10)
                {
                    cout << "The laptop you order is exceed the maximum amount of order!";
                    system("pause");
                }

                else
                {
                    for (i = 0; i < temp->x; i++)
                    {
                        cout << "-----------------------------------------\n";
                        cout << "\nPlease Enter your selection to Change: ";
                        cin >> temp->menu2[i];

                        cout << "Change Laptop Name: " << temp->computerName[temp->menu2[i] - 1] << endl;

                        cout << "\nHow many New laptops do you want: ";
                        cin >> temp->quantity[i];
                        cout << "\n-----------------------------------------\n";

                        temp->amount[i] = temp->quantity[i] * temp->computer[temp->menu2[i] - 1];

                        cout << "\n----------------------------------------------------------------\n";
                        cout << "The amount you need to pay after modification is: " << temp->amount[i] << " USD./-\n";
                        cout << "----------------------------------------------------------------\n\n"; 

                        system("PAUSE");
                    }

                    temp = temp->next;

                    system("cls");
                }

                cout << "\n\t\t=============================\n";
                cout << "\t\t     RECORD MODIFIED....!" << endl;
                cout << "\t\t=============================\n\n";
            }

            else
            {
                if (temp != NULL && temp->receipt_number != sid)
                {
                    cout << "\n\t\t===============================\n";
                    cout << "\t\t   Invalid Receipt Number...!" << endl;
                    cout << "\t\t===============================\n\n";
                }
            }
        }
    }

} // End modify function
