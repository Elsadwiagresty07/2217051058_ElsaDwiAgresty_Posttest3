#include <iostream>
using namespace std;

int main(){
	
	int tahun;
	cin>>tahun;
  
  // Jika tahun habis dibagi 400, tahun kabisat.
	if (tahun%400==0){
		cout<<"Tahun Kabisat"<<endl;

  // Jika tahun tidak habis dibagi 400 tapi habis dibagi 100, bukan tahun kabisat.
  }else if(tahun%400>0 && tahun%100==0){
		cout<<"Bukan Tahun Kabisat"<<endl;

  // Jika tahun tidak habis dibagi 400, tidak habis dibagi 100 tapi habis dibagi 4, tahun kabisat. 
	}else if (tahun%400>0 && tahun%100>0 && tahun%4==0){
		cout<< "Tahun Kabisat"<<endl;

  // Jika tahun tidak habis dibagi 400, 100, dan 4, bukan tahun kabisat.
	}else if(tahun%400>0 && tahun%100>0 && tahun%4>0){
		cout<< "Bukan Tahun Kabisat"<<endl;
	}	
	
	return 0;
}