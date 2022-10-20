//UTP Kelas A
//Kelompok 9
//Akmal Adnan Djayasinga (2217051063)
//Mutiara Cintia Rainy (2217051125)
//Reguel Andreas Agustinus Pangaribuan (2217051084)

#include <iostream>
#include <conio.h>
using namespace std;

void myFunction()
{
	cout<<"Terimakasih telah membeli disini, sampai jumpa di lain waktu!";
}

int main()
{
	system("cls");
    cout<<"--------------------------------------------"<<endl;
	cout<<"|                                          |"<<endl;
	cout<<"|                JUAL BELI                 |"<<endl;
	cout<<"|               MOBIL ONLINE               |"<<endl;
	cout<<"|                SEDERHANA                 |"<<endl;
	cout<<"|                                          |"<<endl;
	cout<<"--------------------------------------------"<<endl;
	cout<<endl;
	
	cout<<"Tentukan jenis mobil mu!"<<endl;
	cout<<"1) Mobil Sedan"<<endl<<"2) Mobil Keluarga"<<endl;
	cout<<endl;

    cout<<"Pilihan mu : ";
	long int pilihan,mobil1,mobil2,jumlah_mobil1,jumlah_mobil2;
	cin>>pilihan;
	cout<<endl;

	//Kalau yang dipilih Jenis Mobilnya SEDAN
    if (pilihan==1)
	{
		system("cls");
		cout<<"--------------------------------------------"<<endl;
		cout<<"|                                          |"<<endl;
		cout<<"|                JUAL BELI                 |"<<endl;
		cout<<"|               MOBIL ONLINE               |"<<endl;
		cout<<"|                SEDERHANA                 |"<<endl;
		cout<<"|                                          |"<<endl;
		cout<<"--------------------------------------------"<<endl;
		cout<<endl;
		
		cout<<"1) Honda Civic           = Rp 1.180.000.000";
		cout<<endl;
		cout<<"2) Toyota Supra          = Rp 2.051.000.000";
		cout<<endl;
		cout<<"Tentukan mobil yang ingin dibeli : ";
		cin>>mobil1;
			
		cout<<"Tentukan jumlah mobil yang ingin dibeli : ";
		cin>>jumlah_mobil1;

        char ulangi = 'y';
        int counter = 0;

        while (ulangi=='y')
        {
            cout<<"Apakah saudara ingin menambah lagi ? (y/t) : ";
            cin>>ulangi;
            counter++;
			
            if (ulangi!='y')
            {
            	cout<<endl;
            	cout<<"Jumlah mobil yang ingin saudara beli adalah "<<((counter-1)+jumlah_mobil1);
			}
			
		cout<<endl;
		
        cout<<endl;
        
        system("cls");
		string nama,alamat,pekerjaan;
		int usia,penghasilan;
	
		cout<<"--------------------------------------------"<<endl;
		cout<<"|                                          |"<<endl;
		cout<<"|                JUAL BELI                 |"<<endl;
		cout<<"|               MOBIL ONLINE               |"<<endl;
		cout<<"|                SEDERHANA                 |"<<endl;
		cout<<"|                                          |"<<endl;
		cout<<"--------------------------------------------"<<endl;
		cout<<endl;
		
		cout<<"Harap mengisi data diri anda dibawah ini"<<endl<<"   "<<endl;
		cin.ignore(1,'\n');
	
		cout<<"Nama\t\t\t: ";
		getline(cin,nama);
		cout<<endl;
	
		cout<<"Usia\t\t\t: ";
		cin>>usia;
		cin.ignore(4,'\n');
		cout<<endl;
	
		cout<<"Alamat\t\t\t: ";
		getline(cin,alamat);
		cout<<endl;
	
		cout<<"Pekerjaan\t\t: ";
		getline(cin,pekerjaan);
		cout<<endl;

		cout<<"Penghasilan/bulan \t: ";
		cin>>penghasilan;
		cout<<endl;
		
		system("cls");
    	long int pilihann,nml,cicil;
    	
    	cout<<"--------------------------------------------"<<endl;
		cout<<"|                                          |"<<endl;
		cout<<"|                JUAL BELI                 |"<<endl;
		cout<<"|               MOBIL ONLINE               |"<<endl;
		cout<<"|                SEDERHANA                 |"<<endl;
		cout<<"|                                          |"<<endl;
		cout<<"--------------------------------------------"<<endl;
		cout<<endl;
    	
		cout<<"Pilih menu pembayaran\n"<<endl;
    	cout<<"1) Lunas\n"<<"2) Cicilan\n"<<endl;
    	cout<<"Pilihan anda : ";
    	cin>>pilihann;
    	cin.ignore(1,'\n');
    	
    	cout<<endl;
    	//Kalau bayarnya NYICIL dan mobil yang dibeli adalah Honda Civic
    	if (pilihann==2&&mobil1==1)
    	{
    		system("cls");
    		cout<<"--------------------------------------------"<<endl;
			cout<<"|                                          |"<<endl;
			cout<<"|                JUAL BELI                 |"<<endl;
			cout<<"|               MOBIL ONLINE               |"<<endl;
			cout<<"|                SEDERHANA                 |"<<endl;
			cout<<"|                                          |"<<endl;
			cout<<"--------------------------------------------"<<endl;
			cout<<endl;
			
			cout<<"Pelanggan atas nama : "<<nama<<endl<<"Dengan usia : "<<usia<<endl<<"Yang beralamat di : "<<alamat<<endl<<"Dengan pekerjaan : "<<pekerjaan<<endl<<"Dan berpenghasilan/bulan : "<<penghasilan<<"/bulan"<<endl;
			cout<<endl;
			cout<<"Honda Civic\n";
			cout<<"Harga mobil = Rp "<<(((counter-1)+jumlah_mobil1)*(1180000000))<<endl;
			cout<<endl;
			cout<<"Pilih waktu untuk menyicil\n"<<endl;
			cout<<"1) 1 Tahun\n"<<"2) 2 Tahun\n"<<endl;
			cout<<"Pilihan anda : ";
			cin>>cicil;
			
			//Kalau memilih nyicil dalam waktu 1 tahun
			if (cicil==1)
			{
				system("cls");
				cout<<"--------------------------------------------"<<endl;
				cout<<"|                                          |"<<endl;
				cout<<"|                JUAL BELI                 |"<<endl;
				cout<<"|               MOBIL ONLINE               |"<<endl;
				cout<<"|                SEDERHANA                 |"<<endl;
				cout<<"|                                          |"<<endl;
				cout<<"--------------------------------------------"<<endl;
				cout<<endl;
				cout<<"Anda akan menyicil mobil tersebut sebesar "<<1180000000/12<<" /bulan\n"<<endl;
				cout<<"Mobil anda akan segera dikirim, dimohon untuk membayar cicilan tepat waktu!\n";
				
				cout<<endl;
				cout<<"Rate 1-10 untuk pelayanan kami : ";

					string saran;
					int ratte;
					int rate[10]={1,2,3,4,5,6,7,8,9,10};
					cin>>ratte;
					if (ratte==rate[0]||ratte==rate[1]||ratte==rate[2]||ratte==rate[3]||ratte==rate[4]||ratte==rate[5]||ratte==rate[6])
					{
						cout<<endl;
						cout<<"Tolong berikan saran, agar kami dapat meningkatkan pelayanan kami.\n";
						cout<<"---------------------------------------------------------------------------------------------\n";
						cin>>saran;
						cout<<endl;
						cout<<"---------------------------------------------------------------------------------------------\n";
						cout<<"Terimakasih atas saran anda, kami akan memperbaiki layanan kami untuk kedepannya.";
					}
					else if (ratte==rate[7]||ratte==rate[8]||ratte==rate[9]||ratte==rate[10])
					{
						cout<<endl;
						cout<<"Terimakasih telah menggunakan layanan kami, rekomendasikan pada teman dan keluarga anda jika anda puas!";
					}
					cout<<endl;
					cout<<endl;
					myFunction();
			}
			
			//Kalau memilih nyicil dalam waktu 2 tahun
			if (cicil==2)
			{
				system("cls");
				cout<<"--------------------------------------------"<<endl;
				cout<<"|                                          |"<<endl;
				cout<<"|                JUAL BELI                 |"<<endl;
				cout<<"|               MOBIL ONLINE               |"<<endl;
				cout<<"|                SEDERHANA                 |"<<endl;
				cout<<"|                                          |"<<endl;
				cout<<"--------------------------------------------"<<endl;
				cout<<endl;
				cout<<"Anda akan menyicil mobil tersebut sebesar "<<1180000000/24<<" /bulan\n"<<endl;
				cout<<"Mobil anda akan segera dikirim, dimohon untuk membayar cicilan tepat waktu!\n";
				
				cout<<endl;
				cout<<"Rate 1-10 untuk pelayanan kami : ";

					string saran;
					int ratte;
					int rate[10]={1,2,3,4,5,6,7,8,9,10};
					cin>>ratte;
					if (ratte==rate[0]||ratte==rate[1]||ratte==rate[2]||ratte==rate[3]||ratte==rate[4]||ratte==rate[5]||ratte==rate[6])
					{
						cout<<endl;
						cout<<"Tolong berikan saran, agar kami dapat meningkatkan pelayanan kami.\n";
						cout<<"---------------------------------------------------------------------------------------------\n";
						cin>>saran;
						cout<<endl;
						cout<<"---------------------------------------------------------------------------------------------\n";
						cout<<"Terimakasih atas saran anda, kami akan memperbaiki layanan kami untuk kedepannya.";
					}
					else if (ratte==rate[7]||ratte==rate[8]||ratte==rate[9]||ratte==rate[10])
					{
						cout<<endl;
						cout<<"Terimakasih telah menggunakan layanan kami, rekomendasikan pada teman dan keluarga anda jika anda puas!";
					}
					cout<<endl;
					cout<<endl;
					myFunction();
			}
			
		}
    	
    	//Kalau bayarnya NYICIL dan mobil yang dibeli adalah Toyota Supra
    	if (pilihann==2&&mobil1==2)
    	{
    		system("cls");
    		cout<<"--------------------------------------------"<<endl;
			cout<<"|                                          |"<<endl;
			cout<<"|                JUAL BELI                 |"<<endl;
			cout<<"|               MOBIL ONLINE               |"<<endl;
			cout<<"|                SEDERHANA                 |"<<endl;
			cout<<"|                                          |"<<endl;
			cout<<"--------------------------------------------"<<endl;
			cout<<endl;
			
			cout<<"Pelanggan atas nama : "<<nama<<endl<<"Dengan usia : "<<usia<<endl<<"Yang beralamat di : "<<alamat<<endl<<"Dengan pekerjaan : "<<pekerjaan<<endl<<"Dan berpenghasilan/bulan : "<<penghasilan<<"/bulan"<<endl;
			cout<<endl;
			cout<<"Toyota Supra\n";
			cout<<"Harga mobil = Rp "<<(((counter-1)+jumlah_mobil1)*(2051000000))<<endl;
			cout<<endl;
			cout<<"Pilih waktu untuk menyicil\n"<<endl;
			cout<<"1) 1 Tahun\n"<<"2) 2 Tahun\n"<<endl;
			cout<<"Pilihan anda : ";
			cin>>cicil;
			
			//Kalau memilih nyicil dalam waktu 1 tahun
			if (cicil==1)
			{
				system("cls");
				cout<<"--------------------------------------------"<<endl;
				cout<<"|                                          |"<<endl;
				cout<<"|                JUAL BELI                 |"<<endl;
				cout<<"|               MOBIL ONLINE               |"<<endl;
				cout<<"|                SEDERHANA                 |"<<endl;
				cout<<"|                                          |"<<endl;
				cout<<"--------------------------------------------"<<endl;
				cout<<endl;
				cout<<"Anda akan menyicil mobil tersebut sebesar "<<2051000000/12<<" /bulan\n"<<endl;
				cout<<"Mobil anda akan segera dikirim, dimohon untuk membayar cicilan tepat waktu!\n";
				
				cout<<endl;
				cout<<"Rate 1-10 untuk pelayanan kami : ";

					string saran;
					int ratte;
					int rate[10]={1,2,3,4,5,6,7,8,9,10};
					cin>>ratte;
					if (ratte==rate[0]||ratte==rate[1]||ratte==rate[2]||ratte==rate[3]||ratte==rate[4]||ratte==rate[5]||ratte==rate[6])
					{
						cout<<endl;
						cout<<"Tolong berikan saran, agar kami dapat meningkatkan pelayanan kami.\n";
						cout<<"---------------------------------------------------------------------------------------------\n";
						cin>>saran;
						cout<<endl;
						cout<<"---------------------------------------------------------------------------------------------\n";
						cout<<"Terimakasih atas saran anda, kami akan memperbaiki layanan kami untuk kedepannya.";
					}
					else if (ratte==rate[7]||ratte==rate[8]||ratte==rate[9]||ratte==rate[10])
					{
						cout<<endl;
						cout<<"Terimakasih telah menggunakan layanan kami, rekomendasikan pada teman dan keluarga anda jika anda puas!";
					}
					cout<<endl;
					cout<<endl;
					myFunction();
			}
			
			//Kalau memilih nyicil dalam waktu 2 tahun
			if (cicil==2)
			{
				system("cls");
				cout<<"--------------------------------------------"<<endl;
				cout<<"|                                          |"<<endl;
				cout<<"|                JUAL BELI                 |"<<endl;
				cout<<"|               MOBIL ONLINE               |"<<endl;
				cout<<"|                SEDERHANA                 |"<<endl;
				cout<<"|                                          |"<<endl;
				cout<<"--------------------------------------------"<<endl;
				cout<<endl;
				cout<<"Anda akan menyicil mobil tersebut sebesar "<<2051000000/24<<" /bulan\n"<<endl;
				cout<<"Mobil anda akan segera dikirim, dimohon untuk membayar cicilan tepat waktu!\n";
				
				cout<<endl;
				cout<<"Rate 1-10 untuk pelayanan kami : ";

					string saran;
					int ratte;
					int rate[10]={1,2,3,4,5,6,7,8,9,10};
					cin>>ratte;
					if (ratte==rate[0]||ratte==rate[1]||ratte==rate[2]||ratte==rate[3]||ratte==rate[4]||ratte==rate[5]||ratte==rate[6])
					{
						cout<<endl;
						cout<<"Tolong berikan saran, agar kami dapat meningkatkan pelayanan kami.\n";
						cout<<"---------------------------------------------------------------------------------------------\n";
						cin>>saran;
						cout<<endl;
						cout<<"---------------------------------------------------------------------------------------------\n";
						cout<<"Terimakasih atas saran anda, kami akan memperbaiki layanan kami untuk kedepannya.";
					}
					else if (ratte==rate[7]||ratte==rate[8]||ratte==rate[9]||ratte==rate[10])
					{
						cout<<endl;
						cout<<"Terimakasih telah menggunakan layanan kami, rekomendasikan pada teman dan keluarga anda jika anda puas!";
					}
					cout<<endl;
					cout<<endl;
					myFunction();
			}
		}
    	//Kalau bayarnya langsung LUNAS dan mobil yang dibeli Honda Civic
    	if (pilihann==1&&mobil1==1)
    	{
    		system ("cls");
			cout<<"--------------------------------------------"<<endl;
			cout<<"|                                          |"<<endl;
			cout<<"|                JUAL BELI                 |"<<endl;
			cout<<"|               MOBIL ONLINE               |"<<endl;
			cout<<"|                SEDERHANA                 |"<<endl;
			cout<<"|                                          |"<<endl;
			cout<<"--------------------------------------------"<<endl;
			cout<<endl;
			
			cout<<"Pelanggan atas nama : "<<nama<<endl<<"Dengan usia : "<<usia<<endl<<"Yang beralamat di : "<<alamat<<endl<<"Dengan pekerjaan : "<<pekerjaan<<endl<<"Dan berpenghasilan/bulan : "<<penghasilan<<"/bulan"<<endl;
			cout<<endl;
			cout<<endl;
			cout<<"Honda Civic\n";
			cout<<"Harga mobil = Rp "<<(((counter-1)+jumlah_mobil1)*(1180000000))<<endl;
    		cout<<"Masukkan nominal pembayaran : ";
    		cin>>nml;
    		cout<<endl;
    		
    		//Kalau dananya gak cukup
    		if (nml<(1180000000)*((counter-1)+jumlah_mobil1))
    		{
    			system("cls");
    			cout<<"--------------------------------------------"<<endl;
				cout<<"|                                          |"<<endl;
				cout<<"|                JUAL BELI                 |"<<endl;
				cout<<"|               MOBIL ONLINE               |"<<endl;
				cout<<"|                SEDERHANA                 |"<<endl;
				cout<<"|                                          |"<<endl;
				cout<<"--------------------------------------------"<<endl;
				cout<<endl;
				
				cout<<"Maaf saldo tidak cukup, silahkan menabung dan membelinya di lain hari!\n";
				
				cout<<endl;
				cout<<"Rate 1-10 untuk pelayanan kami : ";

					string saran;
					int ratte;
					int rate[10]={1,2,3,4,5,6,7,8,9,10};
					cin>>ratte;
					if (ratte==rate[0]||ratte==rate[1]||ratte==rate[2]||ratte==rate[3]||ratte==rate[4]||ratte==rate[5]||ratte==rate[6])
					{
						cout<<endl;
						cout<<"Tolong berikan saran, agar kami dapat meningkatkan pelayanan kami.\n";
						cout<<"---------------------------------------------------------------------------------------------\n";
						cin>>saran;
						cout<<endl;
						cout<<"---------------------------------------------------------------------------------------------\n";
						cout<<"Terimakasih atas saran anda, kami akan memperbaiki layanan kami untuk kedepannya.";
					}
					else if (ratte==rate[7]||ratte==rate[8]||ratte==rate[9]||ratte==rate[10])
					{
						cout<<endl;
						cout<<"Terimakasih telah menggunakan layanan kami, rekomendasikan pada teman dan keluarga anda jika anda puas!";
					}
					cout<<endl;
					cout<<endl;
					myFunction();
			}
			//Kalau dananya cukup/lebih
			if (nml>=(1180000000)*((counter-1)+jumlah_mobil1))
			{
				system("cls");
				cout<<"--------------------------------------------"<<endl;
				cout<<"|                                          |"<<endl;
				cout<<"|                JUAL BELI                 |"<<endl;
				cout<<"|               MOBIL ONLINE               |"<<endl;
				cout<<"|                SEDERHANA                 |"<<endl;
				cout<<"|                                          |"<<endl;
				cout<<"--------------------------------------------"<<endl;
				cout<<endl;
				
				cout<<"Pembayaran berhasil!\n"<<endl;
				cout<<"Mobil anda akan segera dikirim!\n";
				
				cout<<endl;
				cout<<"Rate 1-10 untuk pelayanan kami : ";

					string saran;
					int ratte;
					int rate[10]={1,2,3,4,5,6,7,8,9,10};
					cin>>ratte;
					if (ratte==rate[0]||ratte==rate[1]||ratte==rate[2]||ratte==rate[3]||ratte==rate[4]||ratte==rate[5]||ratte==rate[6])
					{
						cout<<endl;
						cout<<"Tolong berikan saran, agar kami dapat meningkatkan pelayanan kami.\n";
						cout<<"---------------------------------------------------------------------------------------------\n";
						cin>>saran;
						cout<<endl;
						cout<<"---------------------------------------------------------------------------------------------\n";
						cout<<"Terimakasih atas saran anda, kami akan memperbaiki layanan kami untuk kedepannya.";
					}
					else if (ratte==rate[7]||ratte==rate[8]||ratte==rate[9]||ratte==rate[10])
					{
						cout<<endl;
						cout<<"Terimakasih telah menggunakan layanan kami, rekomendasikan pada teman dan keluarga anda jika anda puas!";
					}
					cout<<endl;
					cout<<endl;
					myFunction();
			}
		}
		//Kalau bayarnya langsung LUNAS dan mobil yang dibeli Toyota Supra
		if (pilihann==1&&mobil1==2)
    	{
    		system("cls");
    		cout<<"--------------------------------------------"<<endl;
			cout<<"|                                          |"<<endl;
			cout<<"|                JUAL BELI                 |"<<endl;
			cout<<"|               MOBIL ONLINE               |"<<endl;
			cout<<"|                SEDERHANA                 |"<<endl;
			cout<<"|                                          |"<<endl;
			cout<<"--------------------------------------------"<<endl;
			cout<<endl;
			
			cout<<"Pelanggan atas nama : "<<nama<<endl<<"Dengan usia : "<<usia<<endl<<"Yang beralamat di : "<<alamat<<endl<<"Dengan pekerjaan : "<<pekerjaan<<endl<<"Dan berpenghasilan/bulan : "<<penghasilan<<"/bulan"<<endl;
			cout<<endl;
			cout<<"Toyota Supra\n";
			cout<<"Harga mobil = Rp "<<(((counter-1)+jumlah_mobil1)*(2051000000))<<endl;
    		cout<<"Masukkan nominal pembayaran : ";
    		cin>>nml;
    		cout<<endl;
    		
    		//Kalau dananya gak cukup
    		if (nml<(2051000000)*((counter-1)+jumlah_mobil1))
    		{
    			system("cls");
    			cout<<"--------------------------------------------"<<endl;
				cout<<"|                                          |"<<endl;
				cout<<"|                JUAL BELI                 |"<<endl;
				cout<<"|               MOBIL ONLINE               |"<<endl;
				cout<<"|                SEDERHANA                 |"<<endl;
				cout<<"|                                          |"<<endl;
				cout<<"--------------------------------------------"<<endl;
				cout<<endl;
				
				cout<<"Maaf saldo tidak cukup, silahkan menabung dan membelinya di lain hari!\n";
				
				cout<<endl;
				cout<<"Rate 1-10 untuk pelayanan kami : ";

					string saran;
					int ratte;
					int rate[10]={1,2,3,4,5,6,7,8,9,10};
					cin>>ratte;
					if (ratte==rate[0]||ratte==rate[1]||ratte==rate[2]||ratte==rate[3]||ratte==rate[4]||ratte==rate[5]||ratte==rate[6])
					{
						cout<<endl;
						cout<<"Tolong berikan saran, agar kami dapat meningkatkan pelayanan kami.\n";
						cout<<"---------------------------------------------------------------------------------------------\n";
						cin>>saran;
						cout<<endl;
						cout<<"---------------------------------------------------------------------------------------------\n";
						cout<<"Terimakasih atas saran anda, kami akan memperbaiki layanan kami untuk kedepannya.";
					}
					else if (ratte==rate[7]||ratte==rate[8]||ratte==rate[9]||ratte==rate[10])
					{
						cout<<endl;
						cout<<"Terimakasih telah menggunakan layanan kami, rekomendasikan pada teman dan keluarga anda jika anda puas!";
					}
					cout<<endl;
					cout<<endl;
					myFunction();
			}
			//Kalau dananya cukup/lebih
			if (nml>=(2051000000)*((counter-1)+jumlah_mobil1))
			{
				system("cls");
				cout<<"--------------------------------------------"<<endl;
				cout<<"|                                          |"<<endl;
				cout<<"|                JUAL BELI                 |"<<endl;
				cout<<"|               MOBIL ONLINE               |"<<endl;
				cout<<"|                SEDERHANA                 |"<<endl;
				cout<<"|                                          |"<<endl;
				cout<<"--------------------------------------------"<<endl;
				cout<<endl;
				
				cout<<"Pembayaran berhasil!\n"<<endl;
				cout<<"Mobil anda akan segera dikirim!\n";
				
				cout<<endl;
				cout<<"Rate 1-10 untuk pelayanan kami : ";

					string saran;
					int ratte;
					int rate[10]={1,2,3,4,5,6,7,8,9,10};
					cin>>ratte;
					if (ratte==rate[0]||ratte==rate[1]||ratte==rate[2]||ratte==rate[3]||ratte==rate[4]||ratte==rate[5]||ratte==rate[6])
					{
						cout<<endl;
						cout<<"Tolong berikan saran, agar kami dapat meningkatkan pelayanan kami.\n";
						cout<<"---------------------------------------------------------------------------------------------\n";
						cin>>saran;
						cout<<endl;
						cout<<"---------------------------------------------------------------------------------------------\n";
						cout<<"Terimakasih atas saran anda, kami akan memperbaiki layanan kami untuk kedepannya.";
					}
					else if (ratte==rate[7]||ratte==rate[8]||ratte==rate[9]||ratte==rate[10])
					{
						cout<<endl;
						cout<<"Terimakasih telah menggunakan layanan kami, rekomendasikan pada teman dan keluarga anda jika anda puas!";
					}
					cout<<endl;
					cout<<endl;
					myFunction();
			}
    }
        
	}
	}

		
	//Kalau dipilih Jenis Mobilnya Mobil Keluarga
    if (pilihan==2)
    {
        system("cls");
		cout<<"--------------------------------------------"<<endl;
		cout<<"|                                          |"<<endl;
		cout<<"|                JUAL BELI                 |"<<endl;
		cout<<"|               MOBIL ONLINE               |"<<endl;
		cout<<"|                SEDERHANA                 |"<<endl;
		cout<<"|                                          |"<<endl;
		cout<<"--------------------------------------------"<<endl;
		cout<<endl;
		
		cout<<"1) Toyota Avanza           = Rp 233.000.000";
		cout<<endl;
		cout<<"2) Daihatsu Xenia          = Rp 220.000.000";
		cout<<endl;
		cout<<"Tentukan mobil yang ingin dibeli : ";
		cin>>mobil1;
			
		cout<<"Tentukan jumlah mobil yang ingin dibeli : ";
		cin>>jumlah_mobil1;

        char ulangi = 'y';
        int counter = 0;

        while (ulangi=='y')
        {
            cout<<"Apakah saudara ingin menambah lagi ? (y/t) : ";
            cin>>ulangi;
            counter++;
			
            if (ulangi!='y')
            {
            	cout<<endl;
            	cout<<"Jumlah mobil yang ingin saudara beli adalah "<<((counter-1)+jumlah_mobil1);
			}
			
		cout<<endl;
        cout<<endl;
        
        system("cls");
		string nama,alamat,pekerjaan;
		int usia,penghasilan;
	
		cout<<"--------------------------------------------"<<endl;
		cout<<"|                                          |"<<endl;
		cout<<"|                JUAL BELI                 |"<<endl;
		cout<<"|               MOBIL ONLINE               |"<<endl;
		cout<<"|                SEDERHANA                 |"<<endl;
		cout<<"|                                          |"<<endl;
		cout<<"--------------------------------------------"<<endl;
		cout<<endl;
		
		cout<<"Harap mengisi data diri anda dibawah ini"<<endl<<"   "<<endl;
		cin.ignore(1,'\n');
	
		cout<<"Nama\t\t\t: ";
		getline(cin,nama);
		cout<<endl;
	
		cout<<"Usia\t\t\t: ";
		cin>>usia;
		cin.ignore(4,'\n');
		cout<<endl;
	
		cout<<"Alamat\t\t\t: ";
		getline(cin,alamat);
		cout<<endl;
	
		cout<<"Pekerjaan\t\t: ";
		getline(cin,pekerjaan);
		cout<<endl;

		cout<<"Penghasilan/bulan \t: ";
		cin>>penghasilan;
		cout<<endl;
		
		system("cls");
    	long int pilihann,nml,cicil;
    	
    	cout<<"--------------------------------------------"<<endl;
		cout<<"|                                          |"<<endl;
		cout<<"|                JUAL BELI                 |"<<endl;
		cout<<"|               MOBIL ONLINE               |"<<endl;
		cout<<"|                SEDERHANA                 |"<<endl;
		cout<<"|                                          |"<<endl;
		cout<<"--------------------------------------------"<<endl;
		cout<<endl;
    	
		cout<<"Pilih menu pembayaran\n"<<endl;
    	cout<<"1) Lunas\n"<<"2) Cicilan\n"<<endl;
    	cout<<"Pilihan anda : ";
    	cin>>pilihann;
    	cin.ignore(1,'\n');
    	
    	cout<<endl;
    	
    	//Kalau bayarnya NYICIL dan mobil yang dibeli adalah Toyota Avanza
    	if (pilihann==2&&mobil1==1)
    	{
    		system("cls");
    		cout<<"--------------------------------------------"<<endl;
			cout<<"|                                          |"<<endl;
			cout<<"|                JUAL BELI                 |"<<endl;
			cout<<"|               MOBIL ONLINE               |"<<endl;
			cout<<"|                SEDERHANA                 |"<<endl;
			cout<<"|                                          |"<<endl;
			cout<<"--------------------------------------------"<<endl;
			cout<<endl;
			
			cout<<"Pelanggan atas nama : "<<nama<<endl<<"Dengan usia : "<<usia<<endl<<"Yang beralamat di : "<<alamat<<endl<<"Dengan pekerjaan : "<<pekerjaan<<endl<<"Dan berpenghasilan/bulan : "<<penghasilan<<"/bulan"<<endl;
			cout<<endl;
			cout<<"Toyota Avanza\n";
			cout<<"Harga mobil = Rp "<<(((counter-1)+jumlah_mobil1)*(233000000))<<endl;
			cout<<endl;
			cout<<"Pilih waktu untuk menyicil\n"<<endl;
			cout<<"1) 1 Tahun\n"<<"2) 2 Tahun\n"<<endl;
			cout<<"Pilihan anda : ";
			cin>>cicil;
			
			//Kalau memilih nyicil dalam waktu 1 tahun
			if (cicil==1)
			{
				system("cls");
				cout<<"--------------------------------------------"<<endl;
				cout<<"|                                          |"<<endl;
				cout<<"|                JUAL BELI                 |"<<endl;
				cout<<"|               MOBIL ONLINE               |"<<endl;
				cout<<"|                SEDERHANA                 |"<<endl;
				cout<<"|                                          |"<<endl;
				cout<<"--------------------------------------------"<<endl;
				cout<<endl;
				
				cout<<"Anda akan menyicil mobil tersebut sebesar "<<233000000/12<<" /bulan\n"<<endl;
				cout<<"Mobil anda akan segera dikirim, dimohon untuk membayar cicilan tepat waktu!\n";
				
				cout<<endl;
				cout<<"Rate 1-10 untuk pelayanan kami : ";

					string saran;
					int ratte;
					int rate[10]={1,2,3,4,5,6,7,8,9,10};
					cin>>ratte;
					if (ratte==rate[0]||ratte==rate[1]||ratte==rate[2]||ratte==rate[3]||ratte==rate[4]||ratte==rate[5]||ratte==rate[6])
					{
						cout<<endl;
						cout<<"Tolong berikan saran, agar kami dapat meningkatkan pelayanan kami.\n";
						cout<<"---------------------------------------------------------------------------------------------\n";
						cin>>saran;
						cout<<endl;
						cout<<"---------------------------------------------------------------------------------------------\n";
						cout<<"Terimakasih atas saran anda, kami akan memperbaiki layanan kami untuk kedepannya.";
					}
					else if (ratte==rate[7]||ratte==rate[8]||ratte==rate[9]||ratte==rate[10])
					{
						cout<<endl;
						cout<<"Terimakasih telah menggunakan layanan kami, rekomendasikan pada teman dan keluarga anda jika anda puas!";
					}
					cout<<endl;
					cout<<endl;
					myFunction();
			}
			
			//Kalau memilih nyicil dalam waktu 2 tahun
			if (cicil==2)
			{
				system("cls");
				cout<<"--------------------------------------------"<<endl;
				cout<<"|                                          |"<<endl;
				cout<<"|                JUAL BELI                 |"<<endl;
				cout<<"|               MOBIL ONLINE               |"<<endl;
				cout<<"|                SEDERHANA                 |"<<endl;
				cout<<"|                                          |"<<endl;
				cout<<"--------------------------------------------"<<endl;
				cout<<endl;
				
				cout<<"Anda akan menyicil mobil tersebut sebesar "<<233000000/24<<" /bulan";
				cout<<"Mobil anda akan segera dikirim, dimohon untuk membayar cicilan tepat waktu!\n";
				
				cout<<endl;
				cout<<"Rate 1-10 untuk pelayanan kami : ";

					string saran;
					int ratte;
					int rate[10]={1,2,3,4,5,6,7,8,9,10};
					cin>>ratte;
					if (ratte==rate[0]||ratte==rate[1]||ratte==rate[2]||ratte==rate[3]||ratte==rate[4]||ratte==rate[5]||ratte==rate[6])
					{
						cout<<endl;
						cout<<"Tolong berikan saran, agar kami dapat meningkatkan pelayanan kami.\n";
						cout<<"---------------------------------------------------------------------------------------------\n";
						cin>>saran;
						cout<<endl;
						cout<<"---------------------------------------------------------------------------------------------\n";
						cout<<"Terimakasih atas saran anda, kami akan memperbaiki layanan kami untuk kedepannya.";
					}
					else if (ratte==rate[7]||ratte==rate[8]||ratte==rate[9]||ratte==rate[10])
					{
						cout<<endl;
						cout<<"Terimakasih telah menggunakan layanan kami, rekomendasikan pada teman dan keluarga anda jika anda puas!";
					}
					cout<<endl;
					cout<<endl;
					myFunction();
			}
			
		}
    	
    	//Kalau bayarnya NYICIL dan mobil yang dibeli adalah Daihatsu Xenia
    	if (pilihann==2&&mobil1==2)
    	{
    		system("cls");
    		cout<<"--------------------------------------------"<<endl;
			cout<<"|                                          |"<<endl;
			cout<<"|                JUAL BELI                 |"<<endl;
			cout<<"|               MOBIL ONLINE               |"<<endl;
			cout<<"|                SEDERHANA                 |"<<endl;
			cout<<"|                                          |"<<endl;
			cout<<"--------------------------------------------"<<endl;
			cout<<endl;
			
			cout<<"Pelanggan atas nama : "<<nama<<endl<<"Dengan usia : "<<usia<<endl<<"Yang beralamat di : "<<alamat<<endl<<"Dengan pekerjaan : "<<pekerjaan<<endl<<"Dan berpenghasilan/bulan : "<<penghasilan<<"/bulan"<<endl;
			cout<<endl;
			cout<<"Daihatsu Xenia\n";
			cout<<"Harga mobil = Rp "<<(((counter-1)+jumlah_mobil1)*(220000000))<<endl;
			cout<<endl;
			cout<<"Pilih waktu untuk menyicil\n"<<endl;
			cout<<"1) 1 Tahun\n"<<"2) 2 Tahun\n"<<endl;
			cout<<"Pilihan anda : ";
			cin>>cicil;
			
			//Kalau memilih nyicil dalam waktu 1 tahun
			if (cicil==1)
			{
				system ("cls");
				cout<<"--------------------------------------------"<<endl;
				cout<<"|                                          |"<<endl;
				cout<<"|                JUAL BELI                 |"<<endl;
				cout<<"|               MOBIL ONLINE               |"<<endl;
				cout<<"|                SEDERHANA                 |"<<endl;
				cout<<"|                                          |"<<endl;
				cout<<"--------------------------------------------"<<endl;
				cout<<endl;
				
				cout<<"Anda akan menyicil mobil tersebut sebesar "<<220000000/12<<" /bulan\n"<<endl;
				cout<<"Mobil anda akan segera dikirim, dimohon untuk membayar cicilan tepat waktu!\n";
				
				cout<<endl;
				cout<<"Rate 1-10 untuk pelayanan kami : ";

					string saran;
					int ratte;
					int rate[10]={1,2,3,4,5,6,7,8,9,10};
					cin>>ratte;
					if (ratte==rate[0]||ratte==rate[1]||ratte==rate[2]||ratte==rate[3]||ratte==rate[4]||ratte==rate[5]||ratte==rate[6])
					{
						cout<<endl;
						cout<<"Tolong berikan saran, agar kami dapat meningkatkan pelayanan kami.\n";
						cout<<"---------------------------------------------------------------------------------------------\n";
						cin>>saran;
						cout<<endl;
						cout<<"---------------------------------------------------------------------------------------------\n";
						cout<<"Terimakasih atas saran anda, kami akan memperbaiki layanan kami untuk kedepannya.";
					}
					else if (ratte==rate[7]||ratte==rate[8]||ratte==rate[9]||ratte==rate[10])
					{
						cout<<endl;
						cout<<"Terimakasih telah menggunakan layanan kami, rekomendasikan pada teman dan keluarga anda jika anda puas!";
					}
					cout<<endl;
					cout<<endl;
					myFunction();
			}
			
			//Kalau memilih nyicil dalam waktu 2 tahun
			if (cicil==2)
			{
				system("cls");
				cout<<"--------------------------------------------"<<endl;
				cout<<"|                                          |"<<endl;
				cout<<"|                JUAL BELI                 |"<<endl;
				cout<<"|               MOBIL ONLINE               |"<<endl;
				cout<<"|                SEDERHANA                 |"<<endl;
				cout<<"|                                          |"<<endl;
				cout<<"--------------------------------------------"<<endl;
				cout<<endl;
				
				cout<<"Anda akan menyicil mobil tersebut sebesar "<<220000000/24<<" /bulan";
				cout<<"Mobil anda akan segera dikirim, dimohon untuk membayar cicilan tepat waktu!\n";
				
				cout<<endl;
				cout<<"Rate 1-10 untuk pelayanan kami : ";

					string saran;
					int ratte;
					int rate[10]={1,2,3,4,5,6,7,8,9,10};
					cin>>ratte;
					if (ratte==rate[0]||ratte==rate[1]||ratte==rate[2]||ratte==rate[3]||ratte==rate[4]||ratte==rate[5]||ratte==rate[6])
					{
						cout<<endl;
						cout<<"Tolong berikan saran, agar kami dapat meningkatkan pelayanan kami.\n";
						cout<<"---------------------------------------------------------------------------------------------\n";
						cin>>saran;
						cout<<endl;
						cout<<"---------------------------------------------------------------------------------------------\n";
						cout<<"Terimakasih atas saran anda, kami akan memperbaiki layanan kami untuk kedepannya.";
					}
					else if (ratte==rate[7]||ratte==rate[8]||ratte==rate[9]||ratte==rate[10])
					{
						cout<<endl;
						cout<<"Terimakasih telah menggunakan layanan kami, rekomendasikan pada teman dan keluarga anda jika anda puas!";
					}
					cout<<endl;
					cout<<endl;
					myFunction();
			}
			
		}
    	
    	//Kalau bayarnya langsung lunas dan mobil yang dibeli Toyota Avanza
    	if (pilihann==1&&mobil1==1)
    	{
    		system ("cls");
			cout<<"--------------------------------------------"<<endl;
			cout<<"|                                          |"<<endl;
			cout<<"|                JUAL BELI                 |"<<endl;
			cout<<"|               MOBIL ONLINE               |"<<endl;
			cout<<"|                SEDERHANA                 |"<<endl;
			cout<<"|                                          |"<<endl;
			cout<<"--------------------------------------------"<<endl;
			cout<<endl;
			
			cout<<"Pelanggan atas nama : "<<nama<<endl<<"Dengan usia : "<<usia<<endl<<"Yang beralamat di : "<<alamat<<endl<<"Dengan pekerjaan : "<<pekerjaan<<endl<<"Dan berpenghasilan/bulan : "<<penghasilan<<"/bulan"<<endl;
			cout<<endl;
			cout<<endl;
			cout<<"Toyota Avanza\n";
			cout<<"Harga mobil = Rp "<<(((counter-1)+jumlah_mobil1)*(233000000))<<endl;
    		cout<<"Masukkan nominal pembayaran : ";
    		cin>>nml;
    		cout<<endl;
    		
    		//Kalau dananya gak cukup
    		if (nml<(233000000)*((counter-1)+jumlah_mobil1))
    		{
    			system("cls");
    			cout<<"--------------------------------------------"<<endl;
				cout<<"|                                          |"<<endl;
				cout<<"|                JUAL BELI                 |"<<endl;
				cout<<"|               MOBIL ONLINE               |"<<endl;
				cout<<"|                SEDERHANA                 |"<<endl;
				cout<<"|                                          |"<<endl;
				cout<<"--------------------------------------------"<<endl;
				cout<<endl;
				
				cout<<"Maaf saldo tidak cukup, silahkan menabung dan membelinya di lain hari!\n";
				
				cout<<endl;
				cout<<"Rate 1-10 untuk pelayanan kami : ";

					string saran;
					int ratte;
					int rate[10]={1,2,3,4,5,6,7,8,9,10};
					cin>>ratte;
					if (ratte==rate[0]||ratte==rate[1]||ratte==rate[2]||ratte==rate[3]||ratte==rate[4]||ratte==rate[5]||ratte==rate[6])
					{
						cout<<endl;
						cout<<"Tolong berikan saran, agar kami dapat meningkatkan pelayanan kami.\n";
						cout<<"---------------------------------------------------------------------------------------------\n";
						cin>>saran;
						cout<<endl;
						cout<<"---------------------------------------------------------------------------------------------\n";
						cout<<"Terimakasih atas saran anda, kami akan memperbaiki layanan kami untuk kedepannya.";
					}
					else if (ratte==rate[7]||ratte==rate[8]||ratte==rate[9]||ratte==rate[10])
					{
						cout<<endl;
						cout<<"Terimakasih telah menggunakan layanan kami, rekomendasikan pada teman dan keluarga anda jika anda puas!";
					}
					cout<<endl;
					cout<<endl;
					myFunction();
			}
			//Kalau dananya cukup/lebih
			if (nml>=(233000000)*((counter-1)+jumlah_mobil1))
			{
				system("cls");
				cout<<"--------------------------------------------"<<endl;
				cout<<"|                                          |"<<endl;
				cout<<"|                JUAL BELI                 |"<<endl;
				cout<<"|               MOBIL ONLINE               |"<<endl;
				cout<<"|                SEDERHANA                 |"<<endl;
				cout<<"|                                          |"<<endl;
				cout<<"--------------------------------------------"<<endl;
				cout<<endl;
				
				cout<<"Pembayaran berhasil!\n"<<endl;
				cout<<"Mobil anda akan segera dikirim!\n";
				
				cout<<endl;
				cout<<"Rate 1-10 untuk pelayanan kami : ";

					string saran;
					int ratte;
					int rate[10]={1,2,3,4,5,6,7,8,9,10};
					cin>>ratte;
					if (ratte==rate[0]||ratte==rate[1]||ratte==rate[2]||ratte==rate[3]||ratte==rate[4]||ratte==rate[5]||ratte==rate[6])
					{
						cout<<endl;
						cout<<"Tolong berikan saran, agar kami dapat meningkatkan pelayanan kami.\n";
						cout<<"---------------------------------------------------------------------------------------------\n";
						cin>>saran;
						cout<<endl;
						cout<<"---------------------------------------------------------------------------------------------\n";
						cout<<"Terimakasih atas saran anda, kami akan memperbaiki layanan kami untuk kedepannya.";
					}
					else if (ratte==rate[7]||ratte==rate[8]||ratte==rate[9]||ratte==rate[10])
					{
						cout<<endl;
						cout<<"Terimakasih telah menggunakan layanan kami, rekomendasikan pada teman dan keluarga anda jika anda puas!";
					}
					cout<<endl;
					cout<<endl;
					myFunction();
			}
		}
		//Kalau bayarnya langsung lunas dan mobil yang dibeli Daihatsu Xenia
		if (pilihann==1&&mobil1==2)
    	{
    		system("cls");
    		cout<<"--------------------------------------------"<<endl;
			cout<<"|                                          |"<<endl;
			cout<<"|                JUAL BELI                 |"<<endl;
			cout<<"|               MOBIL ONLINE               |"<<endl;
			cout<<"|                SEDERHANA                 |"<<endl;
			cout<<"|                                          |"<<endl;
			cout<<"--------------------------------------------"<<endl;
			cout<<endl;
			
			cout<<"Pelanggan atas nama : "<<nama<<endl<<"Dengan usia : "<<usia<<endl<<"Yang beralamat di : "<<alamat<<endl<<"Dengan pekerjaan : "<<pekerjaan<<endl<<"Dan berpenghasilan/bulan : "<<penghasilan<<"/bulan"<<endl;
			cout<<endl;
			cout<<"Daihatsu Xenia\n";
			cout<<"Harga mobil = Rp "<<(((counter-1)+jumlah_mobil1)*(220000000))<<endl;
    		cout<<"Masukkan nominal pembayaran : ";
    		cin>>nml;
    		cout<<endl;
    		
    		//Kalau dananya gak cukup
    		if (nml<(220000000)*((counter-1)+jumlah_mobil1))
    		{
    			system("cls");
    			cout<<"--------------------------------------------"<<endl;
				cout<<"|                                          |"<<endl;
				cout<<"|                JUAL BELI                 |"<<endl;
				cout<<"|               MOBIL ONLINE               |"<<endl;
				cout<<"|                SEDERHANA                 |"<<endl;
				cout<<"|                                          |"<<endl;
				cout<<"--------------------------------------------"<<endl;
				cout<<endl;
				
				cout<<"Maaf saldo tidak cukup, silahkan menabung dan membelinya di lain hari!\n";
				
				cout<<endl;
				cout<<"Rate 1-10 untuk pelayanan kami : ";

					string saran;
					int ratte;
					int rate[10]={1,2,3,4,5,6,7,8,9,10};
					cin>>ratte;
					if (ratte==rate[0]||ratte==rate[1]||ratte==rate[2]||ratte==rate[3]||ratte==rate[4]||ratte==rate[5]||ratte==rate[6])
					{
						cout<<endl;
						cout<<"Tolong berikan saran, agar kami dapat meningkatkan pelayanan kami.\n";
						cout<<"---------------------------------------------------------------------------------------------\n";
						cin>>saran;
						cout<<endl;
						cout<<"---------------------------------------------------------------------------------------------\n";
						cout<<"Terimakasih atas saran anda, kami akan memperbaiki layanan kami untuk kedepannya.";
					}
					else if (ratte==rate[7]||ratte==rate[8]||ratte==rate[9]||ratte==rate[10])
					{
						cout<<endl;
						cout<<"Terimakasih telah menggunakan layanan kami, rekomendasikan pada teman dan keluarga anda jika anda puas!";
					}
					cout<<endl;
					cout<<endl;
					myFunction();
			}
			//Kalau dananya cukup/lebih
			if (nml>=(220000000)*((counter-1)+jumlah_mobil1))
			{
				system("cls");
				cout<<"--------------------------------------------"<<endl;
				cout<<"|                                          |"<<endl;
				cout<<"|                JUAL BELI                 |"<<endl;
				cout<<"|               MOBIL ONLINE               |"<<endl;
				cout<<"|                SEDERHANA                 |"<<endl;
				cout<<"|                                          |"<<endl;
				cout<<"--------------------------------------------"<<endl;
				cout<<endl;
				
				cout<<"Pembayaran berhasil!\n"<<endl;
				cout<<"Mobil anda akan segera dikirim!\n";
				
				cout<<endl;
				cout<<"Rate 1-10 untuk pelayanan kami : ";

					string saran;
					int ratte;
					int rate[10]={1,2,3,4,5,6,7,8,9,10};
					cin>>ratte;
					if (ratte==rate[0]||ratte==rate[1]||ratte==rate[2]||ratte==rate[3]||ratte==rate[4]||ratte==rate[5]||ratte==rate[6])
					{
						cout<<endl;
						cout<<"Tolong berikan saran, agar kami dapat meningkatkan pelayanan kami.\n";
						cout<<"---------------------------------------------------------------------------------------------\n";
						cin>>saran;
						cout<<endl;
						cout<<"---------------------------------------------------------------------------------------------\n";
						cout<<"Terimakasih atas saran anda, kami akan memperbaiki layanan kami untuk kedepannya.";
					}
					else if (ratte==rate[7]||ratte==rate[8]||ratte==rate[9]||ratte==rate[10])
					{
						cout<<endl;
						cout<<"Terimakasih telah menggunakan layanan kami, rekomendasikan pada teman dan keluarga anda jika anda puas!";
					}
					cout<<endl;
					cout<<endl;
					myFunction();
			}
    	}
        
	}
    }
}
