#include <stdio.h>
#include <stdlib.h>

// lineer search yapabilmek için gerekli fonksiyonu tanımlanıyor
int lineerSearch(int dizi[], int boyut, int deger){
	int i;
	
	for(i = 0 ; i < boyut ; i++){		// bu kısımda dizinin her elemanı gezilerek kontrol yapılıyor
		if(dizi[i] == deger){
			return i;
		}
	}
	
	return -1 ; // eğer sayı bulunmuyorsa -1 döndürülüyor ve else gidiyor
}


int main() {
	// gerekli değişkenleri tanımlanıyor
	int boyut, aranan,i;
	// kullanıcıya gerekli bildirimler yapılıyor
	printf("**********GIRILEN DIZIDE ISTENILEN ELEMANI BULMA**********\n\n");
	// kullanıcının gireceği dizinin boyutu isteniyor
	printf("Gireceginiz dizinin eleman sayisini giriniz\n");
	scanf("%d",&boyut);
	// alınan boyuta göre dizi tanımlanıyor
	int sayilar[boyut];

	printf("Dizinin elemanlarini giriniz\n");
	// kullanıcıdan dizinin elemanları alınıyor
	for (i = 0 ; i < boyut ; i++){
		printf("%d. eleman --> ",i+1);
		scanf("%d", &sayilar[i]);
		
	} 
	// dizide aranacak eleman kullanıcıdan isteniyor  
	printf("\nGirilen dizide aramak istediginiz elemani giriniz\n");
	scanf("%d",&aranan);
	// alınan  değer fonksiyona diğer değerlerle eklenerek arama yaptırılıyor ve bir değişkene aktarılıyor
	int sonuc = lineerSearch(sayilar,boyut,aranan);
	// fonksiyondan gelen değere göre if kontrolu yapılır ve gerekli çıktılar gösterilir
	if (sonuc >= 0 ){
		printf("\nAradiginiz sayi dizinin %d. sirasinda bulunmaktadir\n",sonuc+1);
	}
	else{
		printf("\nAradiginiz sayi dizide bulunmamaktadir\n");

	}
	
	
	return 0;
}
