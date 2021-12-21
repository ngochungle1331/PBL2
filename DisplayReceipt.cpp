// Function to display receipt
// Time Complexity - O(n^2)
#include <iostream>
#include <fstream>
using namespace std;

void computerType ::order_list()
{
	ofstream Receipt;
	Receipt.open("Receipt.txt", ios::app);
    int i, num;
    bool found = false; // Variable to search

    string str = "\t\t===========================================\n";

    system("cls");

    node *temp = start_ptr;

    if (temp == NULL) // If list is empty
    {
        cout << endl << str;
        cout << "\t\t\tThere is no Order to show!!!\n\t\t\tThe List is Empty\n";
        cout << str << endl;
    }

    else
    {
        cout << "\nEnter the Receipt Number To Print The Receipt: ";
        cin >> num;
        cout << "\n";
        
        while (temp != NULL && !found)
        {
            if (temp->receipt_number == num)
                found = true;

            else
                temp = temp->next;

            if (found) // Print the receipt
            {
                cout << "================================================================================================" << endl;
                cout << "\t\t\t\t  Here is the Ordered list\n";
                cout << "================================================================================================\n"
                     << endl;

                cout << "Receipt Number : " << temp->receipt_number << endl;
                cout << "Customer Name  : " << temp->customerName << endl;
                cout << "Order Date     : " << temp->date << endl
                     << endl;

                cout << "+===================+==============================+====================+=======================+" << endl;
                cout << "|   Laptop Type     |         Laptop Name          |      Quantity      |     Total Price (USD.)|" << endl;
                cout << "+===================+==============================+====================+=======================+" << endl;

                for (i = 0; i < temp->x; i++)
                {
                    cout << "     " << temp->type[temp->menu2[i] - 1] << "      \t";
                    cout << "  " << temp->computerName[temp->menu2[i] - 1] << "\t  ";
                    cout << "\t    " << temp->quantity[i] << "\t";
                    cout << "\t\t" << temp->amount[i] << ".00" << endl;
                    cout << "+-------------------+------------------------------+--------------------+-----------------------+" << endl;
                }

                temp->total = temp->amount[0] + temp->amount[1] + temp->amount[2] + temp->amount[3] + temp->amount[4] + temp->amount[5] + temp->amount[6] + temp->amount[7] + temp->amount[8] + temp->amount[9];
                cout << "\nTotal Bill: " << temp->total << ".00  USD.";
                cout << "\n\n";

                cout << "Thank You!!!\n";
                cout << "------------\n";
                cout << "================================================================================================\n\n";
                
                Receipt << "================================================================================================" << endl;
                Receipt << "\t\t\t\t  Here is the Ordered list\n";
                Receipt << "================================================================================================\n"
                     << endl;

                Receipt << "Receipt Number : " << temp->receipt_number << endl;
                Receipt << "Customer Name  : " << temp->customerName << endl;
                Receipt << "Order Date     : " << temp->date << endl
                     << endl;

                Receipt << "+===================+==============================+====================+=======================+" << endl;
                Receipt << "|   Laptop Type     |         Laptop Name          |      Quantity      |     Total Price (USD.)|" << endl;
                Receipt << "+===================+==============================+====================+=======================+" << endl;

                for (i = 0; i < temp->x; i++)
                {
                    Receipt << "     " << temp->type[temp->menu2[i] - 1] << "      \t";
                    Receipt << "    " << temp->computerName[temp->menu2[i] - 1] << "\t  ";
                    Receipt << "\t    " << temp->quantity[i] << "\t";
                    Receipt << "\t\t" << temp->amount[i] << ".00" << endl;
                    Receipt << "+-------------------+------------------------------+--------------------+-----------------------+" << endl;
                }
				Receipt << "\nTotal Bill: " << temp->total << ".00  USD.";
                Receipt << "\n\n";
                Receipt << "Thank You!!!\n";
                Receipt << "------------\n";
                Receipt << "================================================================================================\n\n";
            }
        
        }

        if (!found)
        {
            cout << str;
            cout << "\t\t\t  Invalid Receipt Number!\n";
            cout << str << endl;
        }
    }
	Receipt.close();
} // End function order_list

