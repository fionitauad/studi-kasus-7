#include <iostream>
using namespace std;

class mhs{
	public : 
	void input();
	void proses();
	void ulang();
	void output();
	
	private:
	int nim[10], telp[10], nnim, pil, jumlah, cari, x=0;
	string nama[50], prodi[50];
};

void mhs::input(){
	cout<<"Masukkan jumlah data yang diinginkan : ";
	cin>>jumlah;
	for (int i=1; i<=jumlah; i++){
		cout<<"Masukkan nama mahasiswa ke-"<<i<<" : ";
    cin>>nama[i];
    cout<<"Masukkan nim mahasiswa ke-"<<i<<" : ";
    cin>>nim[i];
    cout<<"Masukkan prodi mahasiswa ke-"<<i<<" : ";
    cin>>prodi[i];
    cout<<"Masukkan no tlp mahasiswa ke-"<<i<<" : ";
    cin>>telp[i];
    cout<<endl;
	}
  system("clear");

  cout<<"Data NIM yang telah dimasukkan : ";
  for(int i=1; i<=jumlah; i++){
    cout<<nim[i]<<" ";
  }

  cout<<"Mencari data mahasiswa menggunakan NIM" <<endl;
  cout<<"Masukkan NIM : ";
  cin>>cari;
}

void mhs::proses(){
  for(int i=1; i<=jumlah; i++){
    if (nim[i]==cari){
      x=1;
      cout<<"Berikut data yang anda cari : "<<endl;
      cout<<"Nama : "<<nama[i]<<endl; 
      cout<<"NIM : "<<nim[i]<<endl; 
      cout<<"Prodi : "<<prodi[i]<<endl; 
      cout<<"No. tlp : "<<telp[i]<<endl; 
      
    }
  }
  ulang();
}
void mhs::ulang(){
  cout<<"\nMengurutkan data NIM : "<<endl;
  cout<<"1. Ascending"<<endl;
  cout<<"2. Descending"<<endl;
  cout<<"Masukkan Pilihanmu : ";
  cin>>pil;

  if (pil==1){
    for(int i=1; i<=jumlah; i++){
      for(int j=1; j<=jumlah; j++){
        if(nim[i]<nim[j]){
          nnim=nim[i];
          nim[i]=nim[j];
          nim[j]=nnim;
        }
      }
      cout<<"Data NIM yang diurutkan secara Ascending : ";
      for(int i=1; i<=jumlah; i++){
        cout<<nim[i]<<" ";
      }
    }
  } else if (pil==2){
    for(int i=1; i<=jumlah; i++){
      for(int j=1; j<=jumlah; j++){
        if (nim[i]>nim[j]){
          nnim=nim[i];
          nim[i]=nim[j];
          nim[j]=nnim;
        }
      }
    }
    cout<<"\nData nim yang diurutkan secara Descending : ";
    for (int i=1; i<=jumlah; i++){
      cout<<nim[i]<<" ";
    }
  }else{
    cout<<"Pilihan tidak sesuai : "<<endl;
    system("clear");
    ulang();
  }
}
void mhs::output(){
  proses();
}

int main(){
  mhs x;
  x.input();
  x.output();
}