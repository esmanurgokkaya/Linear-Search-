#include <stdio.h>
#include <stdlib.h>

// lineer search yapabilmek için gerekli fonksiyonu tanýmlanýyor
int lineerSearch(int dizi[], int boyut, int deger){
	int i;
	
	for(i = 0 ; i < boyut ; i++){		// bu kýsýmda dizinin her elemaný gezilerek kontrol yapýlýyor
		if(dizi[i] == deger){
			return i;
		}
	}
	
	return -1 ; // eðer sayý bulunmuyorsa -1 döndürülüyor ve else gidiyor
}


int main(int argc, char *argv[]) {
	// gerekli deðiþkenleri tanýmlanýyor
	int boyut, aranan,i;
	// kullanýcýya gerekli bildirimler yapýlýyor
	printf("**********GIRILEN DIZIDE ISTENILEN ELEMANI BULMA**********\n\n");
	// kullanýcýnýn gireceði dizinin boyutu isteniyor
	printf("Gireceginiz dizinin eleman sayisini giriniz\n");
	scanf("%d",&boyut);
	// alýnan boyuta göre dizi tanýmlanýyor
	int sayilar[boyut];

	printf("Dizinin elemanlarini giriniz\n");
	// kullanýcýdan dizinin elemanlarý alýnýyor
	for (i = 0 ; i < boyut ; i++){
		printf("%d. eleman --> ",i+1);
		scanf("%d", &sayilar[i]);
		
	} 
	// dizide aranacak eleman kullanýcýdan isteniyor  
	printf("\nGirilen dizide aramak istediginiz elemani giriniz\n");
	scanf("%d",&aranan);
	// alýnan  deðer fonksiyona diðer deðerlerle eklenerek arama yaptýrýlýyor ve bir deðiþkene aktarýlýyor
	int sonuc = lineerSearch(sayilar,boyut,aranan);
	// fonksiyondan gelen deðere göre if kontrolu yapýlýr ve gerekli çýktýlar gösterilir
	if (sonuc >= 0 ){
		printf("\nAradiginiz sayi dizinin %d. sirasinda bulunmaktadir\n",sonuc+1);
	}
	else{
		printf("\nAradiginiz sayi dizide bulunmamaktadir\n");

	}
	
	
	return 0;
}
