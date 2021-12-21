#include<stdio.h>
#include<math.h>
#include<string.h>
#define max 100
struct Date
{
	int ngay;
	int thang;
	int nam;
};
typedef Date date;
struct NhanVien
{
	int msnv;
	char ho[10];
	char ten[30];
	date namsinh;
	char noisinh[300];
	char diachi[300];
	float luong;
	date ngayvao;
};
typedef NhanVien nhanvien;
struct DanhSach
{
	nhanvien a[max];
	int n;
};
typedef DanhSach danhsach;
void menu();
void nhapngaythang(date &ntn);
void nhap1nv(nhanvien &nv);
void xuat1nv(nhanvien nv);
void xuatngaythang(date ntn);
void nhapdanhsach(danhsach &ds);
void xuatdanhsach(danhsach ds);
int timten(danhsach ds,char *c);
void themnv(danhsach &ds,nhanvien x,int k);
int timMSNV(danhsach ds,int d);
void xoanv(danhsach ds,int d);
void sapxep(danhsach ds);
int main()
{
	menu();
	return 0;
}
void menu()
{
	int ch;
	int d,k;
	danhsach ds;
	nhanvien x;
	//nhapdanhsach(ds);
	//xuatdanhsach(ds);
	do{
		printf("\n\t\t--------------MENU--------------");
		printf("\n\t1.Them vao 1 nhan vien");
		printf("\n\t2.Tim nhan vien theo ma so");
		printf("\n\t3.Tim nhan vien thoe ten");
		printf("\n\t4.Bang luong cua  nhan vien giam dan");
		printf("\n\t5.Xoa 1 nhan vien");
		printf("\n\    *************************************************");
		printf("\n\tChon 1 trong chuc nang tren: ");
		scanf("%d",&ch);
		switch(ch)
		{
		case 1:
			{
				printf("\n\tvi tri them: ");
				scanf("%d",&k);
				nhap1nv(x);
				themnv(ds,x,k);
				printf("\n\t\t\tdanh sach sau khi them");
				xuatdanhsach(ds);
				break;
			}
		case 2:
			{
				int d;
				danhsach ds;
				printf("\n\tNhap ma so can tim: ");
				scanf("%d",&d);
				int b=timMSNV(ds,d);
				if(timMSNV(ds,d)==-1)
					printf("\nkhong tim thay");
				else
					printf("\nTim thay nhan vien thu %d",b+1);
			}
		case 3:
			{
				char c[20];
				printf("\n\tnhap ten can tim: ");
				fflush(stdin);
				gets(c);
				int b=timten(ds,c);
				if(timten(ds,c)==-1)
					printf("\nKhong tim thay nhan vien: %s",c);
				else
					printf("\nTim thay nhan vien thu %d",b+1);
				break;
			}
		case 4:
			{
				sapxep(ds);
				printf("\n\t\t\tDANH SACH LUONG SAU KHI SAP XEP ");
				xuatdanhsach(ds);
				break;
			}
		case 5:
			{
				printf("\nnhap ma so can xoa: ");
				scanf("%d",&d);
				xoanv(ds,d);
				printf("\n\t\tdanh sach sau khi xoa");
				xuatdanhsach(ds);
				break;
			}
		default: printf("\nkhong co chuc nang nay");
			break;
	}
}
void nhapngaythang(date &ntn)
{
	do
	{
		printf("\nnhap vao ngay ");
		scanf("%d",&ntn.ngay);
	}while(ntn.nam>0 || ntn.ngay>31);
	do
	{
		printf("\nnhap vao thang ");
		scanf("%d",&ntn.thang);
	}while(ntn.thang<0 || ntn.thang>12);
	printf("\nnhap vao nam ");
	scanf("%d",&ntn.nam);
}
void xuatngaythang(date ntn)
{
	printf("%d-",ntn.ngay);
	printf("%d-",ntn.thang);
	printf("%d",ntn.nam);
}
void nhap1nv(nhanvien &nv)
{
	
	printf("\nnhap vao msnv: ");
	scanf("%d",&nv.msnv);
	printf("\nnhap vao ho: ");
	fflush(stdin);
	gets(nv.ho);
	printf("\nnhap vao ten:");
	fflush(stdin);
	gets(nv.ten);
	printf("\nngay sinh: ");
	nhapngaythang(nv.namsinh);
	printf("\nnhap vao noi sinh: ");
	fflush(stdin);
	gets(nv.noisinh);
	printf("\nnhap vao dia chi: ");
	fflush(stdin);
	gets(nv.diachi);
	printf("\nnhap vao luong: ");
	scanf("%f",&nv.luong);
	printf("\nngay vao: ");
	nhapngaythang(nv.ngayvao);
}
void xuat1nv(nhanvien nv)
{
	printf("\nma so nhan vien: %d",nv.msnv);
	printf("\nho: %s",nv.ho);
	printf("\nten: %s",nv.ten);
	printf("\nngay sinh: ");
	xuatngaythang(nv.namsinh);
	printf("\nnoi sinh: %s",nv.noisinh);
	printf("\ndia chi: %s",nv.diachi);
	printf("\nluong: %8.2f",nv.luong);
	printf("\nngay vao: ");
	xuatngaythang(nv.ngayvao);
}
void nhapdanhsach(danhsach &ds)
{
	printf("\nnhap so luong nhan vien: ");
	scanf("%d",&ds.n);
	printf("\n\t\t\tnhap thong tin nhan vien");
	for(int i=0;i< ds.n;i++)
	{
		printf("\n\t\tnhan vien thu %d",i+1);
		nhap1nv(ds.a[i]);
	}
}
void xuatdanhsach(danhsach ds)
{
	printf("\n\t\t\tdanh sach nhan vien");
	for(int i=0;i< ds.n;i++)
	{
		printf("\n\t\tnhan vien thu %d",i+1);
		xuat1nv(ds.a[i]);
	}
}
void themnv(danhsach &ds,nhanvien x,int k)
{
	for(int i=ds.n;i>k;i--)
		ds.a[i]=ds.a[i-1];
	ds.a[k]=x;
	ds.n++;
}
int timten(danhsach ds,char *c)
{
	for(int i=0;i<ds.n;i++)
	{
		if(strcmp(ds.a[i].ten,c)==0)
		{
			return i;
			break;
		}
	}
	return -1;
}
int timMSNV(danhsach ds,int d)
{
	for(int i=0;i<ds.n;i++)
	{
		if(ds.a[i].msnv==d)
		{
			return i;
			break;
		}
	}
	return -1;
}

void sapxep(danhsach ds)
{
	for(int i=0;i<ds.n-1;i++)
	{
		for(int j=i+1;j<ds.n;j++)
		{
			if(ds.a[i].luong<ds.a[j].luong)
			{
				float t=ds.a[i].luong;
				ds.a[i].luong=ds.a[j].luong;
				ds.a[j].luong=t;
			}
		}
	}
}
void xoanv(danhsach ds,int d)
{
	int vt=timMSNV(ds,d);
	if(vt==-1)
		printf("\nkhong tim thay msnv %d muon xoa",d );
	else
		for(int i=vt;i<ds.n;i++)
		{
			ds.a[i]=ds.a[i+1];
			ds.n--;
		}
}
