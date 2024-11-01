#include <stdio.h>
#include <stdlib.h>

int main() {

	//Dairenin alanini ve cevresini hesaplayan program.


	/*float r;
	float Area;
	float Circumfrence;
	const float PI=3;


		printf("Dairenin yaricapini giriniz : \n");
		scanf_s("%f", &r);
		Area = PI * r * r;
		Circumfrence = 2 * PI * r;
		printf("Dairenin alani : %f\n", Area);
		printf("Dairenin cevresi : %f", Circumfrence);*/


		//3 adet sayýnýn kendisini, karesini ve kupunu yazdýran program.


		/*float sayi1;
			float sayi2;
			float sayi3;

			printf("Enter 3 number :");
			scanf_s("%f %f %f", &sayi1, &sayi2, &sayi3);

			printf("Sayi\t\t");
			printf("Sayinin Karesi\t\t");
			printf("Sayinin Kupu\t\t\n");

			printf("%f\t\t", sayi1);
			printf("%f\t\t\t", sayi1 * sayi1);
			printf("%f\t\t\n", sayi1 * sayi1 * sayi1);

			printf("%f\t\t", sayi2);
			printf("%f\t\t\t", sayi2*sayi2);
			printf("%f\t\t\n", sayi2*sayi2*sayi2);

			printf("%f\t\t", sayi3);
			printf("%f\t\t\t", sayi3*sayi3);
			printf("%f\t\t\n\n", sayi3*sayi3*sayi3);

			printf("\t\t\t Well Done\n ");*/


			//Metin yazdýrma 


			/*char Yourcity[16];
			printf("Enter your city:");
			scanf_s("%s", Yourcity, 16);
			printf("\n");
			printf("Your city is %s", Yourcity);
			printf("\n\n");*/


			// 4 basamakli bir sayinin basamaklari toplamini hesaplayan program.


			/*int sayi;
			int	bolum;
			int kalan;
			int sum;
			sum = 0;

			printf("4 basamakli bir sayi giriniz : ");
			scanf_s("%d", &sayi);

			bolum = sayi / 1000;
			sum += bolum;
			kalan = sayi % 1000;

			bolum = kalan / 100;
			sum += bolum;
			kalan = kalan % 100;

			bolum = kalan / 10;
			sum += bolum;
			kalan = kalan % 10;

			sum += kalan;

			printf(" Girdiðiniz 4 basamaklý sayinin rakamlari toplami : %d\n", sum);*/


			//Mantiksal operator islemleri


			/*int x, y;             //result=sonuç
			x = 7;
			y = 4;

			printf("result x=y : %d\n", x == y);
			printf("result x=y : %d\n", x != y);
			printf("result x=y : % d\n", x<y);
			printf("result x=y : %d\n", x > y);
			printf("result x=y : %d\n", x <= y);
			printf("result x=y : %d\n", x >= y);
			printf("result : %d\n", (x > y && x != y));
			printf("result : %d\n", (x < y && x != y));
			printf("result : %d\n", (x > y || x == y));
			printf("result : %d\n", (x < y || x <= 8));
			printf("result : %d\n", !(x < y || x == y));              //Deðilini alýyorsun 0 ise 1, 1 ise 0.

			printf("\n\n");*/


			//Kapali bir kaptaki gazin basinci hesaplayan program.

		/*float P, R;   //  pressure=basýnç, number of moles=mol sayýsý, volume=hacim, heat=sýcaklýk
		int V, n, T;
		R = 0.82;

		printf("Kabin Hacmini giriniz : ");
		scanf_s("%d", &V);
		printf("Kabin Sicakligini giriniz : ");
		scanf_s("%d", &T);
		printf("Mol Sayisini Giriniz : ");
		scanf_s("%d", &n);
		printf("\n\n");

		P = (n * R * T) / V;

		printf("%d m^3 Hacimli kaptaki gazin basinci : %f\n\n", n, R);*/


		//Girilen sayinin onlar ve birler basamagini bulan program.


		/*int Sayi, onlar, birler;

		printf("Bir sayi giriniz : ");
		scanf_s("%d", &Sayi);

		birler = Sayi % 10;
		onlar = ((Sayi % 100) - birler) / 10; // int olarak tanýmladýðým için, 100 modunu aldýktan sonra 10'a direkt bölebilirdik.

		printf("Girdiginiz sayinin birler basamagi : %d \nGirdiginiz sayinin onlar basamagi : %d\n", birler, onlar);*/

		//Girilen 4 sayinin aritmetik ortalamasýný bulan program.


		/*  int sayi1, sayi2, sayi3, sayi4;
			float ortalama;

		printf(" 4 adet sayi giriniz : ");
		scanf_s("%d %d %d %d", &sayi1, &sayi2, &sayi3, &sayi4);

		ortalama = (sayi1 + sayi2 + sayi3 + sayi4) / 4;
		printf("\n\n");
		printf("Girdiginiz 4 sayinin aritmetik ortalamasi : %f\n", ortalama);*/


//girilen sayýnýn pozitif mi negatif mi olduðunu anlayan program

/*int number;
printf("Enter a number : ");
scanf_s("%d", &number);

if (number > 0) {
	printf("Your value is positive number\n\n");
}
else if (number < 0) {
	printf("Your value is negative number\n\n");
}

else{ 
 printf("Your number is 0\n\n");
}*/


// if ve else kýsayollar

/*int score;

printf("Enter a score : ");
scanf_s("%d", &score);

(score >= 60) ? printf("You passed the exam\n") : printf("You failed the exam\n");*/


//2 sayýyý karþýlarþtýran program


/*int sayi1, sayi2;
sayi1 = 0;
sayi2 = 0;

printf("2 adet sayi giriniz : ");
scanf_s("%d %d", &sayi1, &sayi2);

if (sayi1 > sayi2) {
	printf("%d is gtreater than %d\n", sayi1, sayi2);
}
else if (sayi2 > sayi1) {
	printf("%d is greater than %d\n", sayi2, sayi1);
}
else {
	printf("%d is equel %d\n\n", sayi1, sayi2);
}*/


//Basit bir kitap sipariþ ve indirim programý


/*int bookPrice, orderQuantity; //Kitabýn fiyatý ve sipariþ miktarýný tanýmladýk
//indirim oraný, indirimsiz fiyat, kitabýn indirimli fiyatý, toplam variables
float discountRate, noDiscountPrice, discountPrice, sum;

bookPrice = 20;        //kitap fiyatý
orderQuantity = 0;     //sipariþ miktarý

printf("Kac adet kitap siparis etmek istiyorsunuz : ");
scanf_s("%d", &orderQuantity);

if (orderQuantity >= 60) {
	discountRate = 0.30;
}
else {
	if (orderQuantity >= 30 && orderQuantity < 60) {
		discountRate = 0.20;
	}
	else if (orderQuantity >= 10 && orderQuantity < 60) {
		discountRate = 0.12;
	}
	else {
		discountRate = 0.01;
	}

	}

	noDiscountPrice = bookPrice * orderQuantity;

	printf("Kitaplarin indirimsiz fiyati : %f TL\n\n", noDiscountPrice);

	discountPrice = bookPrice * orderQuantity * discountRate;

	printf("Indirim tutariniz : %f TL\n\n", discountPrice);

	sum = noDiscountPrice - discountPrice;

	printf("Kitaplarin indirimli  fiyati : %.2f TL\n\n", sum);*/


//

	






	return 0;
}
