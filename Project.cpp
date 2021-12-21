#include "Class.cpp"
#include "Structure.cpp"
#include "TakeOrder.cpp"
#include "DeleteOrder.cpp"
#include "DisplayReceipt.cpp"
#include "ModifyOrder.cpp"
#include "DailySummary.cpp"
#include "Exit.cpp"
#include "nhanvien.cpp"
#include <iostream>
#include <fstream>

using namespace std;

int main(){ // main function

    computerType computer; // Create an object of class computerType
    QuanLyNV ql; // Create an object of QuanLyNhanVien
    QuanLyKH ql2; // Create an object of QuanLyKhachHang
    int menu;

    do{		
        system("cls");
    	cout <<"\t|---------------------------------------------------------------------------------";
		cout <<"|\n";
		cout <<"\t|\tPBL2: LAPTOP STORE INVOICE AND CUSTOMERS MANAGEMENT SYSTEM                |\n\t|---------------------------------------------------------------------------------|"<< endl;
		cout <<"\t|\t\t - Instructor: Le Thi My Hanh                                     |"<< endl;
		cout <<"\t|\t\t - Students in group 9:                                           |\n\t|\t\t\t1. Le Ngoc Hung\t        Class: 20T1                       |"<< endl;
		cout <<"\t|\t\t\t2. Nguyen Huu Duc\tClass: 20T2                       |\n\t|                                                                                 |"<< endl;
		cout <<"\t|---------------------------------------------------------------------------------|\n";
	

        cout << "\t=====================================================================================\n";
        cout << "\t   WELCOME TO LAPTOP STORE INVOICE INVOICE AND CUSTOMER MANAGEMENT SYSTEM \n";
        cout << "\t=====================================================================================\n\n";
        cout << "-----------------------------------------------------------------------------------------------------------------------\n";
        cout << "||\t1. Take New Computer Order \t ||      6. Add a list of customers \t ||\n";
        cout << "||\t2. Delete An Order\t\t ||      7. Arrange list of customer \t ||\n";
        cout << "||\t3. Modify Order List \t\t ||      8. Search for a customer \t ||\n";
        cout << "||\t4. Print the Receipt             ||      9. Print list of customer\t ||      \n";
        cout << "||\t5. Daily Summary of Total Sale \t ||      10. Exit\t\t\t ||\n";
        cout << "||\t\t\t\t\t ||      \t\t\t \n";
        cout << "-----------------------------------------------------------------------------------------------------------------------\n";

        cout << "\nEnter Choice: ";
        cin >> menu;

        switch (menu){
        case 1:
        {
            computer.take_order(); // Function add
            break;
        } // End case 1

        case 2:
        {
            computer.delete_order(); // Function delete
            system("PAUSE");
            break;
        } // End case 2
		
		case 3:
		{
			computer.modify();
			system("PAUSE");
			break;
		}// End case 3
		
        case 4:
        {
            computer.order_list(); // Function order
            system("PAUSE");
            break;
        } // End case 4

        case 5:
        {
            computer.daily_summary(); // Function daily_summary
            system("PAUSE");
            break;
        } // End case 5
        case 6:
        {
            ql.taoMoi();
            break;
    	}
        case 7:
        {
            ql.SapXep();
            break;
    	}
    	case 8:
    	{
    		ql.TimKiem();
    		break;
    	}
    	case 9:
    	{
    		ql.inDanhSach();
    		break;
		}
        case 10:
        {
            computer.exit(); // Function exit
            goto a;
			break;
        }
        /*case 9:
        {
			ql2.taoMoi();
            break;
        }
        case 10:
        {
        	ql2.xoaKhachHang();
        	break;
		}
		case 11:
		{
			ql2.inDanhSach();
			break;
		}*/
		/*case 11:
		{
			computer.exit(); // Function exit
            goto a;
			break;
		}*/

        default:
        {
            cout << "Invalid input\nPlease re-enter the input\n"
                 << endl;
        } // End default

        } // End Switch

    } while (menu != 10); // End do

a: // goto

    cout << "\t\t===========================\n";
    cout << "\t\t\tThank You!!!\n";
    cout << "\t\t===========================\n\n";

    system("PAUSE");

    return 0;

} // End main function


////////////////////////////END OF THE PROGRAM//////////////////////////////////////////
