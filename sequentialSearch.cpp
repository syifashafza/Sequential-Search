#include<iostream>
using namespace std;

int main(){

	int data[10] = {4,2,6,8,9,1,4,2,8,3};
	int key;
	int jumlah = 0;
	
	cout<<"cari angka = ";
	cin>>key;
	
	for(int i=0; i<10;i++){
		if(data[i]==key){
			jumlah++;
		}
	}
	if(jumlah > 0){
		cout<<"ditemukan "<<key<<" sebanyak "<<jumlah<<endl;
	}else{
		cout<<"data tidak ditemukan"<<endl;
	}
}
