#include <iostream>

using namespace std;
//Construct node


struct node
{
    int receipt_number, x;

    string customerName, date;

    int quantity[15], menu2[15];

    int amount[15], total;

    string type[15] = {"16GB/1TB", "8GB/512GB", "16GB/256GB", "16GB/512GB", "8GB/512GB",
	 "8GB/512GB", "8GB/512GB", "8GB/512GB", "8GB/512GB", "16GB/512GB", 
	 "16GB/512GB", "8GB/512GB", "16GB/1TB", "8GB/512GB", "8GB/512GB"};

    string specifications[15] = {"Apple M1", "Apple M1", "Apple M1",
	"AMD Ryzen 7 5800H", "Intel Core i5(11th Gen)", "Intel Core i7(11th Gen)", 
	"Intel Core i7(11th Gen)", "Intel Core i5(11th Gen)", "Intel Core i5(11th Gen)", 
	"Ryzen 9 5900HS", "Intel Core i7(11th Gen)", "AMD Ryzen 7 5700U", "Intel Core i7(11th Gen)",
	"AMD Ryzen 7 5800H", "Intel Core i7(11th Gen)"};

    string computerName[15] = {"MacBook Pro M1 2020", "MacBook Pro M1 2020", "MacBook Air M1 2020", 
	"Dell Gaming G15 5515", "Dell Inspiron 7501", "Dell Vostro 3400", 
	"HP Envy 13 ba1030TU", "HP Envy 13 ba1027TU", "Acer Nitro 5 AN515", 
	"Acer Swift 3 SF313", "Asus ZenBook UX425EA", "Asus VivoBook TM420UA", 
	"Lenovo YOGA Slim 7 Carbon", "MSI Gaming Bravo 15", "MSI GF75 Thin 10SCXR"};

    int computer[15] = {2252, 1678, 1434, 1474, 1346,
	1148, 1322, 1156, 1256, 1132, 
	1324, 881, 1447, 1105, 1038};

    // node *prev;
    node *next;

} *q, *temp; // Pointer declaration

node *start_ptr = NULL;
node *head = NULL;
node *last = NULL;
