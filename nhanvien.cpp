#include <iostream>
#include <conio.h>
#include <string.h>
#include "khachhang.cpp"

using namespace std;

class NhanVien : protected KhachHang 
{
    private:
        int maso;
        char* hoten;
        char* sodienthoai;
        char* quequan;
        char* ngaysinh;
        //int luong;
    public:
        NhanVien* tiep;
        NhanVien()
        {
            maso=0;
            //luong=1;
            hoten=new char[25];
            sodienthoai= new char[15];
            quequan = new char[25];
            ngaysinh = new char[15];
            tiep=NULL;
        }
        ~NhanVien(){
		}
        void nhap()
        {
            cout<<"  Input customer's ID: ";
            cin>>maso;
            cout<<"  Customer's name: ";
            cin.ignore();
            cin.getline(hoten,25);
            cout<<"  Customer's phone number: ";
            cin.ignore();
            cin.getline(sodienthoai, 15);
            cout<<"  Customer's hometown: ";
            cin.ignore();
            cin.getline(quequan, 25);
            cout << "  Customer's Date of Birth: ";
            cin.ignore();
            cin.getline(ngaysinh, 15);
            //cout<<"  Customer's salary: ";
            //cin>>luong;
        }
        void setgiatri(int id,char* ht,char* sdt,char* qq,char* ns)
        {
            maso=id;
            hoten=ht;
            sodienthoai=sdt;
            quequan=qq;
            ngaysinh=ns;
            //luong=l;
        }
        int getmaso()
        {
            return this->maso;
        }
        char* gethoten()
        {
            return this->hoten;
        }
        char* getsodienthoai()
        {
        	return this->sodienthoai;
		}
        char* getchucvu()
        {
        	return this->quequan;
		}
        char* getngaysinh()
        {
        	return this->ngaysinh;
		}
        //int getl()
        //{
        //    return this->luong;
        //}
};
 
class QuanLyNV
{
    private:
        NhanVien* dau;
    public:
        QuanLy()
        {
            dau=NULL;
        }
        void taoMoi();
        void hoanDoi(NhanVien* ng1,NhanVien* ng2);
        void SapXep();
        void TimKiem();
        void xoaNhanVien();
        void inDanhSach();
};
 
void QuanLyNV::taoMoi()
{
	system("cls");
    NhanVien* hientai;
    int songuoi=0;
    char c;
    do
    {
        if(dau==NULL)
        {
            dau=new NhanVien;
            hientai=dau;
        }
        else
        {
            hientai->tiep=new NhanVien;
            hientai=hientai->tiep;
        }
        cout<<"Input employee number "<<++songuoi<<":"<<endl;
        hientai->nhap();
        cout<<"Do you want to continue?(Y/N):";
        fflush(stdin);
        cin >> c;
        cout<<endl;
    }
    while(c=='y'||c=='Y');
    system("PAUSE");
}
 
void QuanLyNV::SapXep()
{
	system("cls");
    if(dau==NULL)
    {
    	cout << "\n\t\t========================================\n";
        cout << "\t\t           The List is Empty!!!" << endl;
        cout << "\t\t========================================\n\n";
        //printf("Danh sach trong");
        fflush(stdin);getch();
        return;
    }
    NhanVien* dangsosanh;
    dangsosanh=dau;
    while(dangsosanh->tiep!=NULL)
    {
        NhanVien* sosanh;
        sosanh=dangsosanh->tiep;
        while(sosanh!=NULL)
        {
            if(strcmp(sosanh->gethoten(),dangsosanh->gethoten())<0)
            {
                int id=dangsosanh->getmaso();
                char* s=dangsosanh->gethoten();
                char* sdt=dangsosanh->getsodienthoai();
                char* cv=dangsosanh->getchucvu();
                char* ns=dangsosanh->getngaysinh();
                //int l=dangsosanh->getl();
                dangsosanh->setgiatri(sosanh->getmaso(),sosanh->gethoten(),sosanh->getsodienthoai(),sosanh->getchucvu(), sosanh->getngaysinh());
                sosanh->setgiatri(id,s,sdt,cv,ns);
            }
            sosanh=sosanh->tiep;
        }
        dangsosanh=dangsosanh->tiep;
    }
    cout << "\n\t\t========================================\n";
    cout << "\t\t   The List is Ordered Successfully!!!" << endl;
    cout << "\t\t========================================\n\n";
    //cout<<"Da sap xep nhan vien";
    fflush(stdin);
    system("PAUSE");
}
 
void QuanLyNV::xoaNhanVien()
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
    NhanVien *hientai;
    int id;
    cout<<"Input Employee's ID to be deleted: ";
    cin>>id;
    cout << "\n\t\t========================================\n";
    cout << "\t\t The Employee is Deleted Successfully!!!" << endl;
    cout << "\t\t========================================\n\n";
    if(dau->getmaso()==id)
    {
        hientai=dau;
        dau=dau->tiep;
        delete hientai;
        return;
    }
    hientai=dau;
    while(hientai->tiep!=NULL)
        if(hientai->tiep->getmaso()==id)
        {
            NhanVien* xoa=hientai->tiep;
            hientai->tiep=xoa->tiep;
            delete xoa;
            return;
        }
        else hientai=hientai->tiep;
    fflush(stdin);
    system("PAUSE");
}

void QuanLyNV::TimKiem()
{
	system("cls");
	if(dau==NULL)
    {
    	cout << "\n\t\t========================================\n";
        cout << "\t\t   Cannot Search an Empty List!!!" << endl;
        cout << "\t\t========================================\n\n";
        //printf("Danh sach trong");
        fflush(stdin);getch();
        return;
    }
    NhanVien *hientai;
    hientai=dau;
    int id;
    cout<<"Input Employee's ID you want to search: ";
    cin>>id;
    while(hientai!=NULL){
    	if(hientai->getmaso()==id){
    		cout << "+==================+==========================+======================+==========================+==========================+" << endl;
        	cout << "|      ID          |         Full Name        |      Phone number    |          Hometown        |        Date of birth     |" << endl;
        	cout << "+==================+==========================+======================+==========================+==========================+" << endl;
        	cout << "       " << hientai->getmaso() << "\t\t    " << hientai->gethoten() << "\t\t     "  << hientai->getsodienthoai() << "\t                " <<hientai->getchucvu() << "\t\t  " << hientai->getngaysinh() << "\t\t  " << endl;
        	break;
    	}else hientai=hientai->tiep;
	}
    system("PAUSE");
}

void QuanLyNV::inDanhSach()
{
	system("cls");
	//int k=1;
	string str = "\t\t===========================================\n";
    if(dau==NULL)
    {
        cout << endl << str;
        cout << "\t\t\tThere is no Employee to show!!!\n\t\t\tThe List is Empty\n";
        cout << str << endl;
        fflush(stdin);getch();
        return;
    }
    NhanVien* hientai;
    hientai=dau;
    if(hientai!=NULL)
        cout << "+==================+==========================+======================+==========================+==========================+" << endl;
        cout << "|      ID          |         Full Name        |      Phone number    |          Position        |        Date of birth     |" << endl;
        cout << "+==================+==========================+======================+==========================+==========================+" << endl;
    while(hientai!=NULL)
    {
    	//if(k%2!=0)
        	//cout << "       " << hientai->getmaso() << "\t\t    " << hientai->gethoten() << "\t\t     "  << hientai->getsodienthoai() << "\t\t        " <<hientai->getchucvu() << "\t\t  " << hientai->getngaysinh() << "\t\t  " <<  hientai->getl() << endl;
        //else
        	cout << "       " << hientai->getmaso() << "                  " << hientai->gethoten() << "              "  << hientai->getsodienthoai() << "                 " <<hientai->getchucvu() << "                  " << hientai->getngaysinh() << "                  "  << endl;	
        //k+=1;	
        hientai=hientai->tiep;
    }
    
    fflush(stdin);
    system("PAUSE");
}

