#include <stdio.h>
#include <stdlib.h>

	
	int linearSearch( int dizi[], int n, int aranan ){
	//i yi tan�mlad�m
	int i;
	//ko�ullar� belirledim
	for(i=0; i<n; i++){
		//aranan say� dizide bir say�ya e�itse say� indisini d�nd�r�r
		if(aranan ==dizi[i] )
		return i;
	}
	//degiilsede -1 e d�nd�r�r
	return -1;
}
int main()
{
	//n yi tan�mlad�m
	int n;
	//kullan�c�dan dizi boyutunu girmesini s�yledim
	printf("dizinin boyutunu giriniz:");
	scanf("%d",&n);
	//dizi[n],i yi tan�mlad�m
	int dizi[n];
	int i=0;
	while( i<n)
	{
		//kullan�c�dan sayi
		printf("sayi:");
		scanf("%d", &dizi[i]);
		i++;
	}
     //kullan�c�dan aranan say�y� girmesini istedim
     printf("aranan sayiyi giriniz:");
     //aranan say�y� tan�mlad�k
	 int aranan;
	 scanf("%d",&aranan);
	 //sonucu tan�mlad�m ve  fonskiyonu �ag�rd�m
	 int sonuc= linearSearch(dizi,n,aranan);
	 //eger sonuc -1 e�itse
	 if(sonuc==-1)  
	 //aranan say� dizide yok
     printf("aranan sayi dizide yok \n");
     else//degilse
     //aranan say� dizide var 
     
     printf("aranan sayi dizide var");
     return 0;
}

