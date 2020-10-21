#include <iostream>												 //  Nama : Calvin Lazuardi	
#include <string.h>											    // Nim  : 2201814600
using namespace std;										 

// Program Data Karyawan

class karyawan{
	private : 
		int Id;
		char name [30];
	public  :
		int getId(){
			return Id;
		}
		char* getname(){
			return name;
		}
		void setId(int Id){
			this -> Id = Id;	
		}
		void setname(char* name){
			strcpy(this -> name , name);
		}
};




int main(){
	karyawan a;
	int pilihan,Id;
	char name [30];
	do{
	
	cout << "--------- Data Karyawan --------" <<endl;
	cout << "1. Input Data Karyawan "<<endl;
	cout << "2. Pencarian Data Karyawan"<<endl;
	cout << "3. EXIT"<<endl;
	cout << "--------------------------------"<<endl;
	cin >> pilihan;
	if (pilihan == 1){
		cout << "Masukkan Id Karyawan   (Max = 3)  : ";
		cin >> Id;
		cout << "Masukkan Nama Karyawan (Max = 30) : ";
		cin >> name;
		cin.clear();
		//cin.get();
		a.setname(name);
		a.setId(Id);
		cout << "	    ~DONE~"<<endl;
		pilihan=1;
	}
	else if (pilihan == 2){
		cout << "Masukkan Id Karyawan : ";
		cin >>Id;
		if (Id ==a.getId()){
			cout << "Nama Karyawan yang dicari : " << a.getname()<<endl;
		}
		pilihan =2;
		
	}
	else 
	{
		cout << "!ENJOY!"<<endl;
		break;
		pilihan =3;
		
	}
}while (pilihan !=3);
	return 0;
}
