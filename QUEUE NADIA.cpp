#include <iostream>
#include <stdlib.h>

using namespace std;

typedef struct TNode
{
	int data;
	TNode *next;
}data;

TNode *head;
void init()
{
	head=NULL;
}

int IsEmpty()
{
	if(head==NULL)
	{
		return 0;
	}
	else
	{
		return 0;
	}
}

void insertdepan(int n)
{
	TNode *baru;
	baru = new TNode;
	baru->data = n;
	baru->next = NULL;
	if(IsEmpty()==1)
	{
		head=baru;
		head->next=NULL;
	}
	else
	{
		baru->next=head;
		head=baru;
	}
	system ("clear");
	cout<<"\nData Terisi\n";
}
void tampil()
{
	TNode *bantu;
	bantu=head;
	if(IsEmpty()==0)
	{
		system("clear");
		cout<<"\nIsi Antrian";
		while(bantu!=NULL)
		{
			
			cout<<bantu->data<<endl;
			bantu=bantu->next;
		}
	}
	else
	{
	system ("clear");
	cout<<"\nMasih Kosong\n";
	}
}

void insertbelakang(int n)
{
	TNode *baru,*bantu;
	baru=new TNode;
	baru->data=n;
	baru->next=NULL;
	if(IsEmpty()==1)
	{
		head=baru;
		head->next=NULL;
	}
	else
	{
		bantu=head;
		while(bantu->next!=NULL)
		{
			bantu=bantu->next;
		}
		bantu->next=baru;
	}
	system ("clear");
	cout<<"Data Terisi\n";
}

void hapusdepan()
{
	TNode*hapus;
	int d;
	if(IsEmpty()==0)
	{
		if(head!=NULL)
		{
			hapus=head;
			d=hapus->data;
			head=hapus->next;
			delete hapus;
		}
		system ("clear");
		cout<<d<<"Terhapus\n";
	}
	else
	{
		system ("clear");
		cout<<"\nMasih Kosong\n";
	 }
}

int main()
{
	int pil;
	do
	{
		int n;
		cout<<"\n=========QUEUE MENGGUNAKAN LINKED LIST==========";
		cout<<"\n\n1.Enqueue \n";
		cout<<"2.Dequeue\n";
		cout<<"3.TAMPIL\n";
		cout<<"4.EXIT\n";
		cout<<"Masukan Pilihan (1-4) : ";
		cin>>pil;
		
		switch (pil)
		{
			case 1 :
				cout<<"\nData Pemain Bola"<<endl;
				cout<<"------------------"<<endl;
				cout<<"No Punggung : ";;
				cin>>n;
				cout<<"Posisi      : ";;
				cin>>n;
				cout<<endl;
				
				IsEmpty();
				insertdepan(n);
				break;
			case 2 :
				cout<<"No Punggung : ";;
				cin>>n;
				cout<<"Nama :";;
				cin>>n;
				cout<<"Posisi :";;
				cin>>n;
				IsEmpty();
				insertbelakang(n);
				break;
			case 3 :
				cout<<"\nIsi Antrian"<<endl;
				cout<<"------------------"<<endl;
				cout<<n;;
				cout<<endl;
				IsEmpty();
				tampil();
				break;
			case 4 :
				IsEmpty();
				hapusdepan();
				break;
		}
	}
	while (pil!=4);
}
