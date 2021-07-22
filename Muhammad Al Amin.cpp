#include<iostream>
using namespace std;
int main(){
	char ulangi;
    int counter = 0;
	int pilihan1, pilihan2, pilihan3, total_pembayaran;
	int ayam_goreng = 18000, ikan_goreng = 16000, es_teh = 3000;
	do{
	system("cls");
	
	cout<<"=====DAFTAR MENU WARUNG MAKAN TEGAL=====\n";
	cout<<"========================================\n";
	//tampilan daftar menu warung makanan tegal
	cout<<"PILIHAN 1\n";
	cout<<"1. AYAM GORENG (Rp. 18.000)\n2. IKAN GORENG (Rp. 16.000)\n3. ES TEH (Rp. 3.000)\n4. SELESAI\n";
	cout<<"========================================\n";
	cout<<"MASUKKAN PILIHAN ANDA : ";
	cin>>pilihan1;
	
	//(if bertingkat)
	if(pilihan1==1){
		total_pembayaran=ayam_goreng;
		cout<<"PILIHAN 2\n";
		cout<<"2. IKAN GORENG (Rp. 16.000)\n";
		cout<<"3. ES TEH (Rp. 3.000)\n";
		cout<<"4. SELESAI\n";
		cout<<"========================================\n";
		cout<<"MASUKKAN PILIHAN ANDA : ";
		cin>>pilihan2;	
		
		if(pilihan2==2){
			total_pembayaran = ayam_goreng+ikan_goreng;
			cout<<"PILIHAN 3\n";
			cout<<"3. ES TEH (Rp. 3.000)\n";
			cout<<"4. SELESAI\n";
			cout<<"========================================\n";
			cout<<"MASUKKAN PILIHAN ANDA : ";
			cin>>pilihan3;
			
			if(pilihan3==3){
				total_pembayaran= ayam_goreng+ikan_goreng+es_teh;
				cout<<"----------------------------------------\n";
				cout<<"Total pembayaran : Rp. "<<total_pembayaran;
				cout<<"\nApakah kamu ingin mengulang? (y/t)";
				cin>>ulangi;
			}else if(pilihan3==4){				
				total_pembayaran= ayam_goreng+ikan_goreng;
				cout<<"----------------------------------------\n";
				cout<<"Total pembayaran : Rp. "<<total_pembayaran;
				cout<<"\nApakah kamu ingin mengulang? (y/t)";
				cin>>ulangi;
			}else{
				cout<<"Nomor yang di masukkan anda salah!";
				cout<<"\nApakah kamu ingin mengulang? (y/t)";
				cin>>ulangi;
			}     
		}else if(pilihan2==3){
			total_pembayaran = ayam_goreng+es_teh;
			cout<<"PILIHAN 3\n";
			cout<<"2. IKAN GORENG (Rp. 16.000)\n";
			cout<<"4. SELESAI\n";
			cout<<"========================================\n";
			cout<<"MASUKKAN PILIHAN ANDA : ";
			cin>>pilihan3;
			
			if(pilihan3==2){
				total_pembayaran= ayam_goreng+es_teh+ikan_goreng;
				cout<<"----------------------------------------\n";
				cout<<"Total pembayaran : Rp. "<<total_pembayaran;
				cout<<"\nApakah kamu ingin mengulang? (y/t)";
				cin>>ulangi;
			}else if(pilihan3==4){
				total_pembayaran= ayam_goreng+es_teh;         
				cout<<"----------------------------------------\n";
				cout<<"Total pembayaran : Rp. "<<total_pembayaran;
				cout<<"\nApakah kamu ingin mengulang? (y/t)";
				cin>>ulangi;
			}else{
				cout<<"----------------------------------------\n";
				cout<<"Nomor yang di masukkan anda salah!";
				cout<<"\nApakah kamu ingin mengulang? (y/t)";
				cin>>ulangi;
			}
				
		}else if(pilihan2==4){
			total_pembayaran= ayam_goreng;
			cout<<"----------------------------------------\n";
			cout<<"Total pembayaran : Rp. "<<total_pembayaran;
			cout<<"\nApakah kamu ingin mengulang? (y/t)";
			cin>>ulangi;
		}
			
		else{
			cout<<"----------------------------------------\n";
			cout<<"Nomor yang di masukkan anda salah!";
			cout<<"\nApakah kamu ingin mengulang? (y/t)";
			cin>>ulangi;
		}
	
	}else if(pilihan1==2){
		total_pembayaran=ikan_goreng;
		cout<<"PILIHAN 2"<<endl;
		cout<<"1. AYAM GORENG (Rp. 18.000)"<<endl;
		cout<<"3. ES TEH (Rp. 3.000)"<<endl;
		cout<<"4. SELESAI"<<endl;
		
		cout<<"========================================"<<endl;
		cout<<"MASUKKAN PILIHAN ANDA : ";
		cin>>pilihan2;	
		
		if(pilihan2==1){
			total_pembayaran = ikan_goreng+ayam_goreng;
			cout<<"PILIHAN 3"<<endl;
			cout<<"3. ES TEH (Rp. 3.000)"<<endl;
			cout<<"4. SELESAI"<<endl;
		
			cout<<"========================================"<<endl;
			cout<<"MASUKKAN PILIHAN ANDA : ";
			cin>>pilihan3;
			
			if(pilihan3==3){
				total_pembayaran= ayam_goreng+ikan_goreng+es_teh;
				cout<<"----------------------------------------"<<endl;
				cout<<"Total pembayaran : Rp. "<<total_pembayaran;
				cout<<"\nApakah kamu ingin mengulang? (y/t)";
				cin>>ulangi;
			}else if(pilihan3==4){				
				total_pembayaran= ayam_goreng+ikan_goreng;
				cout<<"----------------------------------------"<<endl;
				cout<<"Total pembayaran : Rp. "<<total_pembayaran;
				cout<<"\nApakah kamu ingin mengulang? (y/t)";
				cin>>ulangi;
			}else{
				cout<<"Nomor yang di masukkan anda salah!";
				cout<<"\nApakah kamu ingin mengulang? (y/t)";
				cin>>ulangi;
			}     
		}else if(pilihan2==3){
			total_pembayaran = ikan_goreng+es_teh;
			cout<<"PILIHAN 3"<<endl;
			cout<<"1. AYAM GORENG (Rp. 18.000)"<<endl;
			cout<<"4. SELESAI"<<endl;
		
			cout<<"========================================"<<endl;
			cout<<"MASUKKAN PILIHAN ANDA : ";
			cin>>pilihan3;
			
			if(pilihan3==1){
				total_pembayaran= ikan_goreng+es_teh+ayam_goreng;
				cout<<"----------------------------------------"<<endl;
				cout<<"Total pembayaran : Rp. "<<total_pembayaran;
				cout<<"\nApakah kamu ingin mengulang? (y/t)";
				cin>>ulangi;
			}else if(pilihan3==4){
				total_pembayaran= ikan_goreng+es_teh;         
				cout<<"----------------------------------------"<<endl;
				cout<<"Total pembayaran : Rp. "<<total_pembayaran;
				cout<<"\nApakah kamu ingin mengulang? (y/t)";
				cin>>ulangi;
			}else{
				cout<<"----------------------------------------"<<endl;
				cout<<"Nomor yang di masukkan anda salah!";
				cout<<"\nApakah kamu ingin mengulang? (y/t)";
				cin>>ulangi;
			}
				
		}else if(pilihan2==4){
			total_pembayaran= ikan_goreng;
			cout<<"----------------------------------------"<<endl;
			cout<<"Total pembayaran : Rp. "<<total_pembayaran;
			cout<<"\nApakah kamu ingin mengulang? (y/t)";
			cin>>ulangi;
			
		}else{
			cout<<"----------------------------------------"<<endl;
			cout<<"Nomor yang di masukkan anda salah!";
			cout<<"\nApakah kamu ingin mengulang? (y/t)";
			cin>>ulangi;
		}
		
		
	}else if(pilihan1==3){
		total_pembayaran=es_teh;
		cout<<"PILIHAN 2\n";
		cout<<"1. AYAM GORENG (Rp. 18.000)\n";
		cout<<"2. IKAN GORENG (Rp. 16.000)\n";
		cout<<"4. SELESAI\n";
		cout<<"========================================\n";
		cout<<"MASUKKAN PILIHAN ANDA : ";
		cin>>pilihan2;	
		
		if(pilihan2==1){
			total_pembayaran = es_teh+ayam_goreng;
			cout<<"PILIHAN 3\n";
			cout<<"2. IKAN GORENG (Rp. 16.000)\n";
			cout<<"4. SELESAI\n";	
			cout<<"========================================\n";
			cout<<"MASUKKAN PILIHAN ANDA : ";
			cin>>pilihan3;
			
			if(pilihan3==2){
				total_pembayaran= es_teh+ayam_goreng+ikan_goreng;
				cout<<"----------------------------------------\n";
				cout<<"Total pembayaran : Rp. "<<total_pembayaran;
				cout<<"\nApakah kamu ingin mengulang? (y/t)";
				cin>>ulangi;
			}else if(pilihan3==4){				
				total_pembayaran= es_teh+ayam_goreng;
				cout<<"----------------------------------------\n";
				cout<<"Total pembayaran : Rp. "<<total_pembayaran;
				cout<<"\nApakah kamu ingin mengulang? (y/t)";
				cin>>ulangi;
			}else{
				cout<<"Nomor yang di masukkan anda salah!";
				cout<<"\nApakah kamu ingin mengulang? (y/t)";
				cin>>ulangi;
			}     
		}else if(pilihan2==2){
			total_pembayaran = es_teh+ikan_goreng;
			cout<<"PILIHAN 3\n";
			cout<<"1. AYAM GORENG (Rp. 18.000)\n";
			cout<<"4. SELESAI\n";
			cout<<"========================================\n";
			cout<<"MASUKKAN PILIHAN ANDA : ";
			cin>>pilihan3;
			
			if(pilihan3==1){
				total_pembayaran= es_teh+ikan_goreng+ayam_goreng;
				cout<<"----------------------------------------\n";
				cout<<"Total pembayaran : Rp. "<<total_pembayaran;
				cout<<"\nApakah kamu ingin mengulang? (y/t)";
				cin>>ulangi;
			}else if(pilihan3==4){
				total_pembayaran= es_teh+ikan_goreng;         
				cout<<"----------------------------------------\n";
				cout<<"Total pembayaran : Rp. "<<total_pembayaran;
				cout<<"\nApakah kamu ingin mengulang? (y/t)";
				cin>>ulangi;
			}else{
				cout<<"----------------------------------------\n";
				cout<<"Nomor yang di masukkan anda salah!";
				cout<<"\nApakah kamu ingin mengulang? (y/t)";
				cin>>ulangi;
			}
				
		}else if(pilihan2==4){
			total_pembayaran= es_teh;
			cout<<"----------------------------------------\n";
			cout<<"Total pembayaran : Rp. "<<total_pembayaran;
			cout<<"\nApakah kamu ingin mengulang? (y/t)";
			cin>>ulangi;
			
		}else{
			cout<<"----------------------------------------\n";
			cout<<"Nomor yang di masukkan anda salah!";
			cout<<"\nApakah kamu ingin mengulang? (y/t)";
			cin>>ulangi;
		}
	
	
	}else if(pilihan1==4){
		total_pembayaran = 0;
		cout<<"----------------------------------------"<<endl;
		cout<<"Total pembayaran : Rp. "<<total_pembayaran;
		cout<<"\nApakah kamu ingin mengulang? (y/t)";
		cin>>ulangi;
		
	}else{
		cout<<"----------------------------------------"<<endl;
		cout<<"Nomor yang di masukkan anda salah!";
		cout<<"\nApakah kamu ingin mengulang? (y/t)";
		cin>>ulangi;
	}
	
    } while(ulangi == 'y');

    
}