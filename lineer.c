#include <stdio.h>
#include <stdlib.h>

// lineer search yapabilmek i�in gerekli fonksiyonu tan�mlan�yor
int lineerSearch(int dizi[], int boyut, int deger){
	int i;
	
	for(i = 0 ; i < boyut ; i++){		// bu k�s�mda dizinin her eleman� gezilerek kontrol yap�l�yor
		if(dizi[i] == deger){
			return i;
		}
	}
	
	return -1 ; // e�er say� bulunmuyorsa -1 d�nd�r�l�yor ve else gidiyor
}


int main(int argc, char *argv[]) {
	// gerekli de�i�kenleri tan�mlan�yor
	int boyut, aranan,i;
	// kullan�c�ya gerekli bildirimler yap�l�yor
	printf("**********GIRILEN DIZIDE ISTENILEN ELEMANI BULMA**********\n\n");
	// kullan�c�n�n girece�i dizinin boyutu isteniyor
	printf("Gireceginiz dizinin eleman sayisini giriniz\n");
	scanf("%d",&boyut);
	// al�nan boyuta g�re dizi tan�mlan�yor
	int sayilar[boyut];

	printf("Dizinin elemanlarini giriniz\n");
	// kullan�c�dan dizinin elemanlar� al�n�yor
	for (i = 0 ; i < boyut ; i++){
		printf("%d. eleman --> ",i+1);
		scanf("%d", &sayilar[i]);
		
	} 
	// dizide aranacak eleman kullan�c�dan isteniyor  
	printf("\nGirilen dizide aramak istediginiz elemani giriniz\n");
	scanf("%d",&aranan);
	// al�nan  de�er fonksiyona di�er de�erlerle eklenerek arama yapt�r�l�yor ve bir de�i�kene aktar�l�yor
	int sonuc = lineerSearch(sayilar,boyut,aranan);
	// fonksiyondan gelen de�ere g�re if kontrolu yap�l�r ve gerekli ��kt�lar g�sterilir
	if (sonuc >= 0 ){
		printf("\nAradiginiz sayi dizinin %d. sirasinda bulunmaktadir\n",sonuc+1);
	}
	else{
		printf("\nAradiginiz sayi dizide bulunmamaktadir\n");

	}
	
	
	return 0;
}
