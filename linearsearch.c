#include <stdio.h>
#include <stdlib.h>

	
	int linearSearch( int dizi[], int n, int aranan ){
	//i yi tanýmladým
	int i;
	//koþullarý belirledim
	for(i=0; i<n; i++){
		//aranan sayý dizide bir sayýya eþitse sayý indisini döndürür
		if(aranan ==dizi[i] )
		return i;
	}
	//degiilsede -1 e döndürür
	return -1;
}
int main()
{
	//n yi tanýmladým
	int n;
	//kullanýcýdan dizi boyutunu girmesini söyledim
	printf("dizinin boyutunu giriniz:");
	scanf("%d",&n);
	//dizi[n],i yi tanýmladým
	int dizi[n];
	int i=0;
	while( i<n)
	{
		//kullanýcýdan sayi
		printf("sayi:");
		scanf("%d", &dizi[i]);
		i++;
	}
     //kullanýcýdan aranan sayýyý girmesini istedim
     printf("aranan sayiyi giriniz:");
     //aranan sayýyý tanýmladýk
	 int aranan;
	 scanf("%d",&aranan);
	 //sonucu tanýmladým ve  fonskiyonu çagýrdým
	 int sonuc= linearSearch(dizi,n,aranan);
	 //eger sonuc -1 eþitse
	 if(sonuc==-1)  
	 //aranan sayý dizide yok
     printf("aranan sayi dizide yok \n");
     else//degilse
     //aranan sayý dizide var 
     
     printf("aranan sayi dizide var");
     return 0;
}

