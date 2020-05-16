#include<iostream>
#include<iomanip>
#include<string>
#include<conio.h>

using namespace std;

int main()
{
	int i, nilai, benar=0, salah=0;
	string user, pass;
	char pilihanlogin, pilihan, jawab, pilih;
	ulang : 
	cout<<"                                            SELAMAT DATANG\n";
	cout<<"                                                  DI\n";
	cout<<"                                        KUIS BERHADIAH TENTANG COVID 19\n";
	cout<<"                             =============================================\n";
	cout<<"                                            Silahkan Login!\n";
	cout<<"\t\t\t\t\t\t\t\t\t\n";
	cout<<"\t\t\t\t Masukkan Ussername : ";cin>>user;cout<<"\n";
	cout<<"\t\t\t\t Masukkan Password  : ";cin>>pass;cout<<"\t\t\n";
			if (user == "adrain" && pass == "rahman")
			{
				cout<<"\t\t\t Login Berhasil\t\t\n";
			}
			else
			{
				cout<<"\t\t\t Ussername dan password anda salah silahkan coba kembali \t\t\n";
				cout<<"\t\t\t Coba lagi ?[y/t]  : ";cin>>pilihanlogin;cout<<"\t\t\n";
					if (pilihanlogin=='y' || pilihanlogin=='Y')
					{system("cls");
					goto ulang;}
					else{goto selesai;}
					if (pilihanlogin=='t' || pilihanlogin=='T')
					{goto selesai;}		
			}
			
			
	cout<<"-------------------------------------------------------------------------\n";
	system("cls");
	{
    ulangjwb :
	cout<<"PILIH SALAH SATU JAWABAN YANG MENURUT ANDA BENAR, ANTARA A, B, C, ATAU D!\n";
	cout<<"=========================================================================\n";
	cout<<"1. Apakah COVID-19 termasuk penyakit yang berbahaya??\n";
	string pilgan1[50]={"a. iya ","b. bisa jadi","c. tidak","d. belum diketahui"};
	for (i=0;i<=3;i++)
	{cout<<pilgan1[i]<<"\n";}
    cout<<"Jawaban Anda : ";
    cin >> jawab;
        if(jawab == 'a' || jawab == 'A')
        {benar++;}
        else{
        salah++;}
    cout<<"==========================================================================\n";        
    cout<<"2. Dimana Covid-19 pertama kali ditemukan??\n";
    string pilgan2[50]={"a. Indonesia","b. Italia","c. Amerika","d. China"};
	for (i=0;i<=3;i++)
	{cout<<pilgan2[i]<<"\n";}
    cout<<"Jawaban Anda : ";
    cin >> jawab;
        if(jawab == 'd' || jawab == 'D')
        {benar++;}
        else{
        salah++;}
    cout<<"==========================================================================\n";        
	cout<<"3. sampai saat ini berapa banyak orang yang terinfeksi di NTB?\n";
	string pilgan3[50]={"a. 344","b. 120","c. 200","d. 150"};
	for (i=0;i<=3;i++)
	{cout<<pilgan3[i]<<"\n";}
    cout<<"Jawaban Anda : ";
    cin >> jawab;
        if(jawab == 'a' || jawab == 'A')
        {benar++;}
        else{
        salah++;}
	cout<<"==========================================================================\n";				
	cout<<"4. Berikut ini cara memutus tali penularan covid-19, kecuali??\n";
	string pilgan4[50]={"a. Diam di rumah","b. Membuat acara yang dapat mengundang banyak orang","c. Mencuci tangan dengan sabun","d. Jaga jarak"};
    for (i=0;i<=3;i++)
	{cout<<pilgan4[i]<<"\n";}
	cout<<"Jawaban Anda : ";
    cin >> jawab;
        if(jawab == 'b' || jawab == 'B')
        {benar++;}
        else{
        salah++;}
    cout<<"==========================================================================\n";       
    cout<<"5. bagaimana cara mencegah penyebaran covid 19?\n";
    string pilgan5[50]={"a.berkumpul dengan orang banyak","b. menggunakan masker,rajim cuci tangan,dan menjaga kebersihan","c. tidak menggunakan pelindung saat keluar rumah","d. berkeliaran di luar rumah"};
	for (i=0;i<=3;i++)
	{cout<<pilgan5[i]<<"\n";}
    cout<<"Jawaban Anda : ";
    cin >> jawab;
            if(jawab == 'b' || jawab == 'B')
        {benar++;}
        else{
        salah++;}
	cout<<"==========================================================================\n";
	cout<<"6. Berikut ini gejala-gejala yang di alami orang yang terkena covid-19, kecuali??\n";
	string pilgan6[50]={"a. Batuk Kering","b. Jatuh cinta:v","c. Demam","d. Pusing dan badan terasa lemas"};
	for (i=0;i<=3;i++)
	{cout<<pilgan6[i]<<"\n";}
	cout<<"Jawaban Anda : ";
    cin >> jawab;
        if(jawab == 'b' || jawab == 'B')
        {benar++;}
        else{
        salah++;}     
	cout<<"==========================================================================\n";
	cout<<"7. Siapa nama juru bicara pemerintah khusus penanganan covid-19??\n";
	string pilgan7[50]={"a. Yasonna Laoly","b. Anies Baswedan","c. Achmad Yurianto","d. Nadiem Makarim"};
	for (i=0;i<=3;i++)
	{cout<<pilgan7[i]<<"\n";}
    cout<<"Jawaban Anda : ";
    cin >> jawab;
        if(jawab == 'c' || jawab == 'C')
        {benar++;}
        else{
        salah++;}
	cout<<"==========================================================================\n";
	cout<<"8. siapa saja yang beresiko terinfeksi covid-19??\n";
	string pilgan8[50]={"a. orang yang di rumah aja","b. orang yang sering rebahan","c. orang yang sering berpergian keluar daerah","d.orang yang menjaga kebersihan"};
    for (i=0;i<=3;i++)
	{cout<<pilgan8[i]<<"\n";}
	cout<<"Jawaban Anda : ";
    cin >> jawab;
            if(jawab == 'c' || jawab == 'C')
        {benar++;}
        else{
        salah++;}
	cout<<"==========================================================================\n";
	cout<<"9. Di Indonesia daerah manakah yang paling banyak terinfeksi covid-19??\n";
	string pilgan9[50]={"a. Jakarta","b. Bandung","c. Bali","d. Lombok"};
	for (i=0;i<=3;i++)
	{cout<<pilgan9[i]<<"\n";}
	cout<<"Jawaban Anda : ";
    cin >> jawab;
            if(jawab == 'a' || jawab == 'A')
        {benar++;}
        else{
        salah++;}
	cout<<"==========================================================================\n";
	cout<<"10. Apakah hewan dapat menyebarkan covid 19??\n";
	string pilgan10[50]={"a. bisa jadi","b. tidak","c. belum diketahui","d. iya"};
	for (i=0;i<=3;i++)
	{cout<<pilgan10[i]<<"\n";}
	cout<<"Jawaban Anda : ";
    cin >> jawab;
            if(jawab == 'd' || jawab == 'D')
        {benar++;}
        else{
        salah++;} 
			
	cout<<"Apakah anda yakin dengan jawaban anda??[y/t]\n";cin>>pilihan;cout<<"\n";
					if (pilihan=='y' || pilihan=='Y')
					{goto nilai;}
					
					if (pilihan=='t' || pilihan=='T')
					{system("cls"); 
					goto ulangjwb;
					cout<<endl;}												       

	}		nilai :
					cout<<"=====================================================\n";
					cout<<"Perolehan Nilai :"<<endl;
            		nilai = benar*10;
            		cout<<"    Jumlah Benar : "<<benar<<" soal "<<endl;
            		cout<<"    Jumlah Salah : "<<salah<<" soal "<<endl;
            		cout<<"    Nilai Anda   : "<<nilai<<"\n"<<endl;
			selesai : 
			cout<<"==========================="<<endl;
			cout<<"Program Selesai, Terimakasi\n";
			cout<<"==========================="<<endl;
	
}
