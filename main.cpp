#include <iostream>
using namespace std;
int main()
{
 int sayac=0;
 string ad,soyad,yas,numara;
 string cvp;
 string kullanici[100][4];
 
 do{
 cout<<"adinizi girin"<<endl;
 cin>>ad;
 cout<<"soyadinizi girin"<<endl;
 cin>>soyad;
 cout<<"yasinizi girin"<<endl;
 cin>>yas;
 cout<<"ogrenci numaranizi girin"<<endl;
 cin>>numara;
 kullanici[sayac][0]=ad;
 kullanici[sayac][1]=soyad;
 kullanici[sayac][2]=yas;
 kullanici[sayac][3]=numara;
 sayac++;
 cout <<"Kullanici eklemek ister misiniz? E/H";
 cin>>cvp;
 
 } while((cvp=="E")||(cvp=="e") && sayac<100);
 
 //Kayitli kullanicilari ekrana yazdirma
 
 cout << "Ad Soyad Yas Numara" << endl;
 
 for (int i=0;i<=sayac;i++){
 
 for (int j=0;j<=3;j++){
 cout<<kullanici[i][j];
 
 if (j==3) cout << endl;
 
 else cout<<" ";
 }
 }
 return 0;
}