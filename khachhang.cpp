#include <iostream>

using namespace std;

class KhachHang{
	protected:
		int masoKhachHang;
        char* hoten;
        char* sodienthoai;
        char* ngaysinh;
    public:
		KhachHang* tiep;
        KhachHang()
        {
        	masoKhachHang=0;
            sodienthoai= new char[15];
            hoten=new char[25];
            ngaysinh = new char[15];
            tiep=NULL;
        }
        ~KhachHang()
        {
    
		}
        void nhap()
        {
        	cout << " Input customer's ID: ";
        	cin >> masoKhachHang;
            cout<<"  Customer's full name: ";
            cin.ignore();
            cin.getline(hoten,25);
            cout<<"  Customer's phone number: ";
            cin.ignore();
            cin.getline(sodienthoai, 25);
            cout << "  Customer's Date of Birth: ";
            cin.ignore();
            cin.getline(ngaysinh, 15);
            
        }
        void setgiatri(int ms,char* ht,char* sdt,char* ns)
        {
        	masoKhachHang=ms;
            hoten=ht;
			sodienthoai=sdt;
            ngaysinh=ns;
        }
        int getmasoKhachHang()
        {
        	return this->masoKhachHang;
		}
        char* gethoten()
        {
        	return this->hoten;
		}
		char* getsodienthoai()
		{
			return this->sodienthoai;
		}
		char* getngaysinh()
		{
			return this->ngaysinh;
		}
};

class QuanLyKH
{
    private:
        KhachHang* dau;
    public:
        QuanLyKH()
        {
            dau=NULL;
        }
        void taoMoi();
        void hoanDoi(KhachHang* ng1,KhachHang* ng2);
        void xoaKhachHang();
        void inDanhSach();
};
void QuanLyKH::taoMoi()
{
	system("cls");
    KhachHang* hientai;
    int songuoi=0;
    char c;
    do
    {
        if(dau==NULL)
        {
            dau=new KhachHang;
            hientai=dau;
        }
        else
        {
            hientai->tiep=new KhachHang;
            hientai=hientai->tiep;
        }
        cout<<"Input customer number "<<++songuoi<<":"<<endl;
        hientai->nhap();
        cout<<"Do you want to continue? (Y/N):";
        fflush(stdin);
        cin >> c;
        cout<<endl;
    }
    while(c=='y'||c=='Y');
    system("PAUSE");
}
/*void QuanLyKH::xoaKhachHang()
{
	//system("cls");
    if(dau==NULL)
    {
    	cout << "\n\t\t=======================================================\n";
        cout << "\t\t    The List is Empty!!!Cannot delete any customer" << endl;
        cout << "\t\t=======================================================\n\n";
        //printf("Danh sach trong");
        fflush(stdin);getch();
        return;
    }
    KhachHang *hientai;
    int id;
    cout<<"Input Customer's ID to be deleted::";
    cin>>id;
    cout << "\n\t\t========================================\n";
    cout << "\t\t The Employee is Deleted Successfully!!!" << endl;
    cout << "\t\t========================================\n\n";
    if(dau->getmasoKhachHang()==id)
    {
        hientai=dau;
        dau=dau->tiep;
        delete hientai;
        return;
    }
    hientai=dau;
    while(hientai->tiep!=NULL)
        if(hientai->tiep->getmasoKhachHang()==id)
        {
            KhachHang* xoa=hientai->tiep;
            hientai->tiep=xoa->tiep;
            delete xoa;
            return;
        }
        else hientai=hientai->tiep;
    //cout<<"Da xoa khach hang";
    fflush(stdin);
    system("PAUSE");
}*/
void QuanLyKH::xoaKhachHang()
{
	system("cls");
    if(dau==NULL)
    {
    	cout << "\n\t\t========================================\n";
        cout << "\t\t   Cannot Delete an Empty List!!!" << endl;
        cout << "\t\t========================================\n\n";
        //printf("Danh sach trong");
        fflush(stdin);getch();
        return;
    }
    KhachHang *hientai;
    int id;
    cout<<"Input Customer's ID to be deleted: ";
    cin>>id;
    cout << "\n\t\t========================================\n";
    cout << "\t\t The Customer is Deleted Successfully!!!" << endl;
    cout << "\t\t========================================\n\n";
    if(dau->getmasoKhachHang()==id)
    {
        hientai=dau;
        dau=dau->tiep;
        delete hientai;
        return;
    }
    hientai=dau;
    while(hientai->tiep!=NULL)
        if(hientai->tiep->getmasoKhachHang()==id)
        {
            KhachHang* xoa=hientai->tiep;
            hientai->tiep=xoa->tiep;
            delete xoa;
            return;
        }
        else hientai=hientai->tiep;
    fflush(stdin);
    system("PAUSE");
}
 
void QuanLyKH::inDanhSach()
{
	int k=1;
	system("cls");
	string str = "\t\t===========================================\n";
    if(dau==NULL)
    {
    	cout << endl << str;
        cout << "\t\t\tThere is no Employee to show!!!\n\t\t\tThe List is Empty\n";
        cout << str << endl;
        //printf("Danh sach trong");
        fflush(stdin);getch();
        return;
    }
    KhachHang* hientai;
    hientai=dau;
    if(hientai!=NULL)
        cout << "+===================+==========================+======================+========================+" << endl;
        cout << "|      Ma ID        |           Ho ten         |      So dien thoai   |          Ngay sinh     |" << endl;
        cout << "+===================+==========================+======================+========================+" << endl;
    while(hientai!=NULL)
    {

    	if(k%2!=0)
        	cout << "       " << hientai->getmasoKhachHang() << "\t\t    " << hientai->gethoten() << "\t              "  << hientai->getsodienthoai() << "\t\t " << hientai->getngaysinh() << endl;
        else
			cout << "       " << hientai->getmasoKhachHang() << "\t\t    " << hientai->gethoten() << "\t\t      "  << hientai->getsodienthoai() << "\t\t " << hientai->getngaysinh() << endl;        	
		k+=1;
		hientai=hientai->tiep;
    }
    fflush(stdin);
    system("PAUSE");
}

