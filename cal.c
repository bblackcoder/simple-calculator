#include<stdio.h>//membuka library stdio.h
//mutiara sukma indah fajriati
//1 TI A
//Teknik informatika
main(){
	
	int bil1,bil2,hasil;//int adalah tipe data dan bil1&bil2 adalah variablenya
	
	char pilihan;//tipe data char= karakter variablenya adalah pilihan
	
	printf("++++++++++++++++++++++++++++++++++++++++\n");//menampilkan output di layar dengan format tertentu
	
	printf("MEMBUAT KALKULATOR SEDERHANA \n");
	
	printf("Oleh : Mutiara sukma indah fajriati\n");
	
	printf("++++++++++++++++++++++++++++++++++++++++\n");
	
	printf("pilih menu yang disediakan :\n");
	
	printf("1. pertambahan(+)");
	
	printf("2. pengurangan(-)\n");
	
	printf("3. perkalian(*)");
	
	printf("4. pembagian(/)\n");
	
	printf("5. modulo(%)\n");
	
	printf("++++++++++++++++++++++++++++++++++++++++\n");
	
	printf("pilih menu yang disediakan (dalam bentuk karakter)=");
	
	scanf("%c",&pilihan);//scanf:menerima input dari keyboard dg format tertentu.%c untuk menampilakan karakter
	
	printf("masukkan bilangan 1=");
	
	scanf("%d",&bil1);//menginputkan bilangan pertama

	printf("masukkan bilangan 2=");

	scanf("%d",&bil2);//menginputkan bilangan kedua,%D untuk menampilkan desimal integer
	
	if(pilihan=='+'){//jika benar(true) pilihan dengan karakter '+' akan menampilkan output dibawah ini
	
		hasil=bil1+bil2;//operator aritmatika perjumlahan
		
		printf("hasil nilai adalah %d",hasil);//menampilkan output hasil perjumlahan operator aritmatika	
		
	}
	else if(pilihan=='-'){//jika pilihan karakter '+' salah(false) maka akan ke pilihan dengan karakter '-' akan menampilkan output dibawah ini
	
		hasil=bil1-bil2;
		
		printf("hasil nilai adalah %d",hasil);	//menampilkan output hasil pengurangan operator aritmatika
	}
	else if(pilihan=='*'){//jika salah maka menampilkan pilihan dengan karakter'*'
		
		hasil=bil1*bil2;
		
		printf("hasil nilai adalah %d",hasil);//menampilkan output hasil perkalian operator aritmatika	
	}
	else if(pilihan=='/'){//jika salah maka menampilkan pilihan dengan karakter'/'
		
		hasil=bil1/bil2;
		
		printf("hasil nilai adalah %d",hasil);	//menampilkan output hasil pembagian operator aritmatika
	}
	else if(pilihan=='%'){//jika salah maka menampilkan pilihan dengan karakter'%'
		
		hasil=bil1%bil2;
		
		printf("hasil nilai adalah %d",hasil);	//menampilkan output hasil modulo operator aritmatika
	}
	
	
	
	
}
