#include<iostream>
using namespace std;
class Linear
{
	public:
	struct node
	{
		int data;
		node *link;
	}*Head;
	void getn(node *Head)
	{
		int i=0;
		cout<<"\nEnter the data : ";
		cin>>Head->data;
		cout<<"\nDo you want to continue ? ( 1 = Yes / 0 = No ) : ";
		cin>>i;
		if(i==1)
		{
			Head->link=new Linear::node;
			getn(Head->link);
		}
		else
		Head->link=NULL;
	}
	void putn(node *Head)
	{
		while(Head!=NULL)
		{
			cout<<endl<<Head->data;
			Head=Head->link;
		}
	}
	void insert1()
	{
		node *T=new node;
		cout<<"\nEnter the data : \n";
		cin>>T->data;
		T->link=Head;
		Head=T;
	}
	void insert2(node *Head)
	{
		int i=1,n=0;
		node *T=new node,*N=new node;
		cout<<"\nEnter the position\n";
		cin>>n;
		while(Head!=NULL)
		{
			if(i++==n)
			{
				N=Head->link;
				Head->link=T;
				T->link=N;
				cout<<"\nEnter the data : ";
				cin>>T->data;
				return;
			}
			Head=Head->link;
		}
		cout<<"\nInvalid Position\n";
	}
	void insert3(node *Head)
	{
		while(Head->link!=NULL)
		Head=Head->link;
		Head->link=new node;
		getn(Head->link);
	}
	int delete1()
	{
		int data=Head->data;
		node *T=new node;
		T=Head->link;
		delete(Head);
		Head=T;
		return data;
	}
	int delete2(node *Head)
	{
		int i=1,n=0,data=0;
		node *A=new node,*B=new node,*C=new node;
		cout<<"\nEnter the position\n";
		cin>>n;
		n--;
		while(Head!=NULL)
		{
			if(i++==n)
			{
				A=Head;
				B=A->link;
				C=B->link;
				A->link=C;
				data=B->data;
				delete(B);
				return data;
			}
			Head=Head->link;
		}
		cout<<"\nInvalid Position or such a linked list does not exists.\n";
		return -1;
	}
	int delete3()
	{
		int data;
		node *X=new node,*Y=new node;
		X=Head;
		Y=Head->link;
		while(Y->link!=NULL)
		{
			Y=Y->link;
			X=X->link;
		}
		data=Y->data;
		X->link=NULL;
		delete(Y);
		return data;
	}
	int search(node *Head,int Search_Key)
	{
		while(Head!=NULL)
		{
			if(Head->data==Search_Key)
			return 1;
			Head=Head->link;
		}
		return 0;
	}
	void reverse()
	{
		node *A=new node,*B=new node,*C=new node;
		if (Head->link==NULL)
		return;
		A=Head;
		B=A->link;
		C=B->link;
		A->link=NULL;
		B->link=A;
		while (C!=NULL)
		{
			A=B;
			B=C;
			C=C->link;
			B->link=A;
		}
		Head=B;
	}
	void dispose()
	{
		node *X=new node;
		while(Head->link!=NULL)
		{
			X=Head->link;
			delete(Head);
			Head=X;
		}
		Head->data=0;
	}
	void menu()
	{
		cout<<"\n                    CHOISE \n";
		cout<<"\n****************************************************\n";
		cout<<"\n\t 0.\tExit.\n";
		cout<<"\n\t 1.\tRead.\n";
		cout<<"\n\t 2.\tDisplay.\n";
		cout<<"\n\t 3.\tInsert at First position.\n";
		cout<<"\n\t 4.\tInsert at Middle position.\n";
		cout<<"\n\t 5.\tInsert at Last position.\n";
		cout<<"\n\t 6.\tDelete from First position.\n";
		cout<<"\n\t 7.\tDelete from Middle position.\n";
		cout<<"\n\t 8.\tDelete from Last position.\n";
		cout<<"\n\t 9.\tReverse.\n";
		cout<<"\n\t10.\tSearch.\n";
		cout<<"\n\t11.\tDispose.\n";
	}
}L;
int main()
{
	int c=0,confirmation=0,adb;
	L.Head=new Linear::node;
	A:c=0;
	L.menu();
	cout<<"\nEnter the Choise : ";
	cin>>c;
	switch(c)
	{
		case 1:
		L.Head=new Linear::node;
		L.getn(L.Head);
		break;
		case 2:
		cout<<"\nThe List is : ";
		L.putn(L.Head);
		break;
		case 3:
		L.insert1();
		break;
		case 4:
		L.insert2(L.Head);
		break;
		case 5:
		L.insert3(L.Head);
		break;
		case 6:
		cout<<endl<<L.delete1()<<" deleted.";
		break;
		case 7:
		cout<<endl<<L.delete2(L.Head)<<" deleted.";
		break;
		case 8:
		cout<<endl<<L.delete3()<<" deleted.";
		break;
		case 9:
		L.reverse();
		break;
		case 10:
		{
			int a=0;
			cout<<"\nEnter The Search Key : ";
			cin>>a;
			if(L.search(L.Head,a)==1)
			cout<<"Search Key found in the list.\n";
			else
			cout<<"Search Key not found in the List.\n";
			break;
		}
		case 11:
		cout<<"\n\nAre you sure that you want to dispose the Linear Linked List ?\n( 1 = Yes / 0 = No ) : ";
		cin>>confirmation;
		L.dispose();
		break;
		case 12:
		cout<<"\n                    Help                      \n";
		cout<<"\n#1\tIf you Delete all nodes in the list there is a chance of Terminating the program without any confirmation !\n";
		cout<<"\n#2\tPlease Dispose List before exiting the program , otherwise it may lead to memory leak !\n";
		cout<<"\n#3\tIt won't automatically display the list , after every actions you perform , you need to choose the option from the menu .\n";
		goto A;
		break;
		default:
		B:L.dispose();
		cout<<"\nProgram Terminated ! ! !\n";
		return 0;
	}
	if(c!=0)
	goto A;
	return 0;
}
