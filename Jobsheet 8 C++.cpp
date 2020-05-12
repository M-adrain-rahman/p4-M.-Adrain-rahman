#include <iostream>
using namespace std;
int main (){

cout<<"Nama : M.Adrain rahman\n";
cout<<"Nim : F1B019084\n";
cout<<"Kelompok: Kelompok 18\n";

int x[3],i;
cout<<"masukkan NIM terakhir Anda"<<endl;
for(i=0;i<=4;i++)
{
cout<<"Masukkan nim "<<i+1<<" : ";
cin>>x[i];
}
cout<<endl;
for(i=0;i<=4;i++)
{
cout<<"nim ke- "<<i+1<<" = "<<x[i]<<endl;
} cout<<endl;

return 0;
}
