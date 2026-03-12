#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>


int main() {

	int tus;
	int kahve_cesitleri = 0;
	int siparis_adeti;
	int siparis_tutari;
	int odenen_tutar;
	int kalan_tutar;
	int ek_odeme;
	int geri_odeme;
	int i, j, k, l;
	int alt_menu;

	do {
		system("cls");
		system("color F1");

		printf("\n\n\n\n\n                           %c", 201);        //sol üst köþe

		for (i = 0; i < 60; i++) {
			printf("%c", 205);    //yatay çizgiler
		}

		printf("%c", 187);      //sað üst köþe

		for (j = 0; j < 3; j++) {
			printf("\n\t\t           ");
			printf("%c\t\t\t\t\t\t                %c", 186, 186);     //dikey kenarlar
		}

		printf("\n\t\t\t   %c\t\t      SANAL KAFEYE HOSGELDINIZ   \t        %c", 186, 186);
		for (k = 0; k < 3; k++) {
			printf("\n\t\t\t");
			printf("   %c    \t\t\t\t\t\t        %c", 186, 186);
		}
		printf("\n\t\t           %c         Devam etmek icin D veya d tusuna basiniz.          %c", 186, 186);
		printf("\n\t\t           %c              CIKIS icin ESC tusuna basiniz.                %c", 186, 186);

		for (l = 0; l < 9; l++) {
			printf("\n\t\t\t");
			printf("   %c        \t\t\t\t\t\t        %c", 186, 186);
		}

		printf("\n\t\t           %c", 200);          //sol alt köþe

		for (i = 0; i < 60; i++) {
			printf("%c", 205);
		}

		printf("%c", 188);

		tus = _getch();

		if (tus == 27) {
			system("cls");
			system("color F1");

			printf("Cikmak istediginizden emin misiniz? (E/H)");
			tus = _getch();
			if (tus == 69 || tus == 101) {
				return 0;
			}
			else {
				system("cls");
				continue;
			}
		}
		if (tus == 68 || tus == 100) {
			system("cls");
			system("color F1");

			printf("\n\n\n\n\n                                                   KAHVE CESITLERI");
			printf("\n                                    --------------------------------------------");
			printf("\n\n                                        1- TURK KAHVESI               40 TL");
			printf("\n\n                                        2- ESPRESSO                   33 TL");
			printf("\n\n                                        3- MOCHA                      70 TL");
			printf("\n\n                                        4- AMERICANO                  47 TL");
			printf("\n\n                                        5- CAPPUCINO                  52 TL");
			printf("\n\n                                        6- CAFFE LATTE                54 TL");
			printf("\n\n                                        7- SICAK CIKOLATA              69 TL");
			printf("\n\n                                        8- SALEP                       73 TL");
			printf("\n\n\n\n                                    Lutfen seciminizi yapiniz: ");
			scanf("%d", &kahve_cesitleri);

			if (kahve_cesitleri > 8 || kahve_cesitleri < 1) {
				system("cls");
				system("color C0");
				printf("\n\n\n\n\n\n                                           LUTFEN GECERLI BIR SECIM YAPINIZ.");
				printf("\n\n                                  * Herhangi bir tusa basarak ana menuye donebilirsiniz.");
				tus = _getch();
				continue;
			}
		}

		switch (kahve_cesitleri) {
		case 1:
			system("cls");
			system("color E0");
			printf("\n\n\n\n\n                                                   TURK KAHVESI");
			printf("\n                                   --------------------------------------------");
			printf("\n\n                                      1- SUTLU TURK KAHVESI             49 TL");
			printf("\n\n                                      2- DAMLA SAKIZLI TURK KAHVESI     46 TL ");
			printf("\n\n                                      3- CIKOLATALI TURK KAHVESI        50 TL");
			printf("\n\n                                      4- SADE TURK KAHVESI              40 TL ");
			printf("\n\n\n\n                                  Lutfen seciminizi yapiniz: ");
			scanf("%d", &alt_menu);

			switch (alt_menu) {
			case 1:
				system("cls");
				system("color E0");
				printf("\n\n\n\n\n\n                                     Kac adet SUTLU TURK KAHVESI istiyorsunuz?");
				printf("\n                                                  Adet giriniz: ");
				scanf("%d", &siparis_adeti);

				siparis_tutari = 49 * siparis_adeti;
				printf("\n\n\n\n                                     Toplam odemeniz gereken tutar: %d", siparis_tutari);
				printf("\n                                     Yatiracaginiz ucreti giriniz: ");
				scanf("%d", &odenen_tutar);


				if (odenen_tutar >= siparis_tutari) {
					system("cls");
					system("color E0");
					printf("\n\n\n\n\n\n                                 %d adet SUTLU TURK KAHVESI icin %d TL odemeniz alinmistir.", siparis_adeti, siparis_tutari);


					if (odenen_tutar > siparis_tutari) {
						geri_odeme = odenen_tutar - siparis_tutari;
						printf("\n                                         Geri odeme: %d", geri_odeme);

					}
					printf("\n\n                                       AFIYET OLSUN. YINE BEKLERIZ.");
					tus = _getch();
				}

				if (odenen_tutar < siparis_tutari) {
					system("cls");
					system("color E0");
					printf("\n\n\n\n\n                       ODEME MIKTARI YETERSIZ! Lutfen odediginiz miktara ilave ucret yatiriniz.");
					printf("\n                                  Toplma odemeniz gereken tutar : %d", siparis_tutari);

					while (odenen_tutar < siparis_tutari) {
						kalan_tutar = siparis_tutari - odenen_tutar;
						printf("\n                                  Su ana kadar odediginiz miktar: %d", odenen_tutar);
						printf("\n                                  Ek ucreti giriniz: ");
						scanf("%d", &ek_odeme);

						odenen_tutar = odenen_tutar + ek_odeme;

						if (odenen_tutar >= siparis_tutari) {
							if (odenen_tutar > siparis_tutari) {
								geri_odeme = odenen_tutar - siparis_tutari;
								printf("\n                                  Geri odeme: %d", geri_odeme);
							}
							printf("\n\n                                AFIYET OLSUN. YINE BEKLERIZ.");
							tus = _getch();
							break;
						}
					}
				}
				return 0;
				break;

			case 2:
				system("cls");
				system("color E0");
				printf("\n\n\n\n\n\n                                     Kac adet DAMLA SAKIZLI TURK KAHVESI istiyorsunuz?");
				printf("\n                                                  Adet giriniz: ");
				scanf("%d", &siparis_adeti);

				siparis_tutari = 46 * siparis_adeti;
				printf("\n\n\n\n                                     Toplam odemeniz gereken tutar: %d", siparis_tutari);
				printf("\n                                     Yatiracaginiz ucreti giriniz: ");
				scanf("%d", &odenen_tutar);

				if (odenen_tutar >= siparis_tutari) {
					system("cls");
					system("color E0");
					printf("\n\n\n\n\n\n                                 %d adet DAMLA SAKIZLI TURK KAHVESI icin %d TL odemeniz alinmistir.", siparis_adeti, siparis_tutari);

					if (odenen_tutar > siparis_tutari) {
						geri_odeme = odenen_tutar - siparis_tutari;
						printf("\n                                         Geri odeme: %d", geri_odeme);
					}
					printf("\n\n                                       AFIYET OLSUN. YINE BEKLERIZ.");
					tus = _getch();
				}

				if (odenen_tutar < siparis_tutari) {
					system("cls");
					system("color E0");
					printf("\n\n\n\n\n                       ODEME MIKTARI YETERSIZ! Lutfen odediginiz miktara ilave ucret yatiriniz.");
					printf("\n                                  Toplam odemeniz gereken tutar: %d", siparis_tutari);

					while (odenen_tutar < siparis_tutari) {
						kalan_tutar = siparis_tutari - odenen_tutar;
						printf("\n                                  Su ana kadar odediginiz miktar: %d", odenen_tutar);
						printf("\n                                  Ek ucreti giriniz: ");
						scanf("%d", &ek_odeme);

						odenen_tutar = odenen_tutar + ek_odeme;

						if (odenen_tutar >= siparis_tutari) {
							if (odenen_tutar > siparis_tutari) {
								geri_odeme = odenen_tutar - siparis_tutari;
								printf("\n                                  Geri odeme: %d", geri_odeme);
							}
							printf("\n\n                                AFIYET OLSUN. YINE BEKLERIZ.");
							tus = _getch();
							break;
						}
					}
				}
				return 0;
				break;

			case 3:
				system("cls");
				system("color E0");
				printf("\n\n\n\n\n                                     Kac adet CIKOLATALI TURK KAHVESI istiyorsunuz?");
				printf("\n                                                  Adet giriniz: ");
				scanf("%d", &siparis_adeti);

				siparis_tutari = 50 * siparis_adeti;
				printf("\n\n\n\n                                     Toplam odemeniz gereken tutar: %d", siparis_tutari);
				printf("\n                                     Yatiracaginiz ucreti giriniz:");
				scanf("%d", &odenen_tutar);

				if (odenen_tutar >= siparis_tutari) {
					system("cls");
					system("color E0");
					printf("\n\n\n\n\n\n                                 %d adet CIKOLATALI TURK KAHVESI icin %d TL odemeniz alinmistir.", siparis_adeti, siparis_tutari);

					if (odenen_tutar > siparis_tutari) {
						geri_odeme = odenen_tutar - siparis_tutari;
						printf("\n                                         Geri odeme: %d", geri_odeme);
					}
					printf("\n\nn                                       AFIYET OLSUN. YINE BEKLERIZ.");
					tus = _getch();
				}

				if (odenen_tutar < siparis_tutari) {
					system("cls");
					system("color E0");
					printf("\n\n\n\n\n                       ODEME MIKTARI YETERSIZ! Lutfen odediginiz miktara ilave ucret yatiriniz.");
					printf("\n                                  Tolam odemeniz gereken tutar: %d", siparis_tutari);

					while (odenen_tutar < siparis_tutari) {
						kalan_tutar = siparis_tutari - odenen_tutar;
						printf("\n                                  Su ana kadar odediginiz miktar: %d", odenen_tutar);
						printf("\n                                  Ek ucreti giriniz: ");
						scanf("%d", &ek_odeme);

						odenen_tutar = odenen_tutar + ek_odeme;

						if (odenen_tutar >= siparis_tutari) {
							if (odenen_tutar > siparis_tutari) {
								geri_odeme = odenen_tutar - siparis_tutari;
								printf("\n                                  Geri odeme: %d", geri_odeme);
							}
							printf("\n\n                                AFIYET OLSUN. YINE BEKLERIZ.");
							tus = _getch();
							break;
						}
					}
				}
				return 0;
				break;

			case 4:
				system("cls");
				system("color E0");
				printf("\n\n\n\n\n\n                                     Kac adet SADE TURK KAHVESI istiyorsunuz?");
				printf("\n                                                  Adet giriniz: ");
				scanf("%d", &siparis_adeti);

				siparis_tutari = 40 * siparis_adeti;
				printf("\n\n\n\n                                     Toplam odemeniz gereken tutar: %d", siparis_tutari);
				printf("\n                                     Yatiricaginiz ucreti giriniz: ");
				scanf("%d", &odenen_tutar);

				if (odenen_tutar >= siparis_tutari) {
					system("cls");
					system("color E0");
					printf("\n\n\n\n\n\n                                 %d adet SADE TURK KAHVESI icin %d TL odemeniz alinmistir.", siparis_adeti, siparis_tutari);

					if (odenen_tutar > siparis_tutari) {
						geri_odeme = odenen_tutar - siparis_tutari;
						printf("\n                                         Geri odeme: %d", geri_odeme);

					}printf("\n\n                                       AFIYET OLSUN. YINE BEKLERIZ.");
					tus = _getch();
				}

				if (odenen_tutar < siparis_tutari) {
					system("cls");
					system("color E0");
					printf("\n\n\n\n\n                       ODEME MIKTARI YETERSIZ! Lutfen odediginiz miktara ilave ucret yatiriniz.");
					printf("\n                                  Toplam odemeniz gereken tutar: %d", siparis_tutari);

					while (odenen_tutar < siparis_tutari) {
						kalan_tutar = siparis_tutari - odenen_tutar;
						printf("\n                                  Su ana kadar odediginiz miktar: %d", odenen_tutar);
						printf("\n                                  Ek ucret giriniz: ");
						scanf("%d", &ek_odeme);

						odenen_tutar = odenen_tutar + ek_odeme;

						if (odenen_tutar <= siparis_tutari) {
							if (odenen_tutar > siparis_tutari) {
								geri_odeme = odenen_tutar - siparis_tutari;
								printf("\n                                  Geri odeme: %d", geri_odeme);

							}
							printf("\n\n                                AFIYET OLSUN. YINE BEKLERIZ.");
							tus = _getch();
							break;
						}
					}
				}return 0;


			}break;


		case 2:
			system("cls");
			system("color E0");
			printf("\n\n\n\n\n                                                   ESPRESSO");
			printf("\n                                   --------------------------------------------");
			printf("\n\n                                     1- DOUBLE ESPRESSO                 43 TL");
			printf("\n\n                                     2- ESPRESSO MACCHIATO              40 TL");
			printf("\n\n                                     3- DOUBLE ESPRESSO MACCHIATO       46 TL");
			printf("\n\n                                     4- ESPRESSO                        33 TL");
			printf("\n\n\n\n                                 Lutfen secim yapiniz: ");
			scanf("%d", &alt_menu);

			switch (alt_menu) {
			case 1:
				system("cls");
				system("color E0");
				printf("\n\n\n\n\n\n                                     Kac adet DOUBLE ESPRESSO istiyorsunuz?");
				printf("\n                                                  Adet giriniz: ");
				scanf("%d", &siparis_adeti);

				siparis_tutari = 43 * siparis_adeti;
				printf("\n\n\n\n                                     Toplam odemeniz gereken tutar: %d", siparis_tutari);
				printf("\n                                     Yatiracaginiz ucreti giriniz: ");
				scanf("%d", &odenen_tutar);

				if (odenen_tutar >= siparis_tutari) {
					system("cls");
					system("color E0");
					printf("\n\n\n\n\n\n                                 %d adet DOUBLE ESPRESSO icin %d TL odemeniz alinmistir.", siparis_adeti, siparis_tutari);

					if (odenen_tutar > siparis_tutari) {
						geri_odeme = odenen_tutar - siparis_tutari;
						printf("\n                                         Geri odeme: %d", geri_odeme);

					}printf("\n\n                                       AFIYET OLSUN. YINE BEKLERIZ.");
					tus = _getch();
				}

				if (odenen_tutar < siparis_tutari) {
					system("cls");
					system("color E0");
					printf("\n\n\n\n\n                       ODEME MIKTARI YETERSIZ! Lutfen odediginiz miktara ilave ucret yatiriniz.");
					printf("\n                                  Toplam odemeniz gereken tutar: %d", siparis_tutari);

					while (odenen_tutar < siparis_tutari) {
						kalan_tutar = siparis_tutari - odenen_tutar;
						printf("\n                                  Su ana kadar odediginiz tutar: %d", odenen_tutar);
						printf("\n                                  Ek ucret giriniz: ");
						scanf("%d", &ek_odeme);

						odenen_tutar += ek_odeme;

						if (odenen_tutar >= siparis_tutari) {
							if (odenen_tutar > siparis_tutari) {
								geri_odeme = odenen_tutar - siparis_tutari;
								printf("\n                                  Geri odeme: %d", geri_odeme);
							}
							printf("\n\n                                AFIYET OLSUN. YINE BEKLERIZ.");
							tus = _getch();
							break;
						}
					}
				}
				return 0;
				break;

			case 2:
				system("cls");
				system("color E0");
				printf("\n\n\n\n\n\n                                     Kac adet ESPRESSO MACCHIATO istiyorsunuz?");
				printf("\n                                                  Adet giriniz: ");
				scanf("%d", &siparis_adeti);

				siparis_tutari = 40 * siparis_adeti;
				printf("\n\n\n\n                                     Toplam odemeniz gereken tutar: %d", siparis_tutari);
				printf("\n                                     Yatiracaginiz ucreti giriniz: ");
				scanf("%d", &odenen_tutar);

				if (odenen_tutar >= siparis_tutari) {
					system("cls");
					system("color E0");
					printf("\n\n\n\n\n\n                                 %d adet ESPRESSO MACCHIATO icin %d TL odemeniz alinmistir.", siparis_adeti, siparis_tutari);

					if (odenen_tutar > siparis_tutari) {
						geri_odeme = odenen_tutar - siparis_tutari;
						printf("\n                                         Geri odeme: %d", geri_odeme);
					}
					printf("\n\n                                       AFIYET OLSUN. YINE BEKLERIZ.");
					tus = _getch();
				}

				if (odenen_tutar < siparis_tutari) {
					system("cls");
					system("color E0");
					printf("\n\n\n\n\n                       ODEME MIKTARI YETERSIZ! Lutfen odediginiz miktara ilave ucret giriniz.");
					printf("\n                                  Toplam odemeniz gereken tutar: %d", siparis_tutari);

					while (odenen_tutar < siparis_tutari) {
						kalan_tutar = siparis_tutari - odenen_tutar;
						printf("\n                                  Su ana kadar odediginiz tutar: %d", odenen_tutar);
						printf("\n                                  Ek ucreti giriniz: ");
						scanf("%d", &ek_odeme);

						odenen_tutar += ek_odeme;

						if (odenen_tutar >= siparis_tutari) {
							if (odenen_tutar > siparis_tutari) {
								geri_odeme = odenen_tutar - siparis_tutari;
								printf("\n                                  Geri odeme: %d", geri_odeme);
							}
							printf("\n\n                                       AFIYET OLSUN. YINE BEKLERIZ.");
							tus = _getch();
							break;
						}
					}
				}
				return 0;
				break;

			case 3:
				system("cls");
				system("color E0");
				printf("\n\n\n\n\n\n                                     Kac adet DOUBLE ESPRESSO MACCHIATO istiyorsunuz?");
				printf("\n                                                  Adet giriniz: ");
				scanf("%d", &siparis_adeti);

				siparis_tutari = 46 * siparis_adeti;
				printf("\n\n\n\n                                     Toplam odemeiz gereken tutar: %d", siparis_tutari);
				printf("\n                                     Yatiracaginiz ucreti giriniz: ");
				scanf("%d", &odenen_tutar);

				if (odenen_tutar >= siparis_tutari) {
					system("cls");
					system("color E0");
					printf("\n\n\n\n\n\n                                 %d adet DOUBLE ESPRESSO MACCHIATO icin %d TL odemeniz alinmistir.", siparis_adeti, siparis_tutari);

					if (odenen_tutar > siparis_tutari) {
						geri_odeme = odenen_tutar - siparis_tutari;
						printf("\n                                         Geri odeme: %d", geri_odeme);

					}printf("\n\n                                       AFIYET OLSUN. YINE BEKLERIZ.");
					tus = _getch();
				}

				if (odenen_tutar < siparis_tutari) {
					system("cls");
					system("color E0");
					printf("\n\n\n\n\n                       ODEME MIKTARI YETERSIZ! Lutfen odediginiz miktara ilave ucret giriniz.");
					printf("\n                                  Toplam odemeniz gereken tutar: %d", siparis_tutari);

					while (odenen_tutar < siparis_tutari) {
						kalan_tutar = siparis_tutari - odenen_tutar;
						printf("\n                                  Su ana kadar odediginiz tutar: %d", odenen_tutar);
						printf("\n                                  Ek ucret giriniz: ");
						scanf("%d", &ek_odeme);

						odenen_tutar += ek_odeme;

						if (odenen_tutar >= siparis_tutari) {
							if (odenen_tutar > siparis_tutari) {
								geri_odeme = odenen_tutar - siparis_tutari;
								printf("\n                                  Geri odeme: %d", geri_odeme);
							}
							printf("\n\n                                AFIYET OLSUN. YINE BEKLERIZ.");
							tus = _getch();
							break;
						}
					}
				}
				return 0;
				break;

			case 4:
				system("cls");
				system("color E0");
				printf("\n\n\n\n\n\n                                        Kac adet ESPRESSO istiyorsunuz?");
				printf("\n                                                  Adet giriniz: ");
				scanf("%d", &siparis_adeti);

				siparis_tutari = 33 * siparis_adeti;
				printf("\n\n\n\n                                        Toplam odemeniz gereken tutar: %d", siparis_tutari);
				printf("\n                                        Yatiracaginiz ucreti giriniz:");
				scanf("%d", &odenen_tutar);

				if (odenen_tutar >= siparis_tutari) {
					system("cls");
					system("color E0");
					printf("\n\n\n\n\n\n                                 %d adet ESPRESSO icin %d TL odemenizalinmistir.", siparis_adeti, siparis_tutari);

					if (odenen_tutar > siparis_tutari) {
						geri_odeme = odenen_tutar - siparis_tutari;
						printf("\n                                         Geri odeme: %d", geri_odeme);
					}printf("\n\n                                       AFIYET OLSUN. YINE BEKLERIZ.");
					tus = _getch();
				}

				if (odenen_tutar < siparis_tutari) {
					system("cls");
					system("color E0");
					printf("\n\n\n\n\n                       ODEME MIKTARI YETERSIZ! Lutfen odediginiz miktara ilave ucret yatiriniz.");
					printf("\n                                  Toplam odemeniz gereken tutar: %d", siparis_tutari);

					while (odenen_tutar < siparis_tutari) {
						kalan_tutar = siparis_tutari - odenen_tutar;
						printf("\n                                  Su ana kadar odediginiz tutar: %d", odenen_tutar);
						printf("\n                                  Ek ucret giriniz: ");
						scanf("%d", &ek_odeme);

						odenen_tutar += ek_odeme;

						if (odenen_tutar >= siparis_tutari) {
							if (odenen_tutar > siparis_tutari) {
								geri_odeme = odenen_tutar - siparis_tutari;
								printf("\n                                  Geri odeme: %d", geri_odeme);
							}
							printf("\n\n                                AFIYET OLSUN. YINE BEKLERIZ.");
							tus = _getch();
							break;
						}
					}
				}return 0;

			}break;


		case 3:
			system("cls");
			system("color E0");
			printf("\n\n\n\n\n                                                        MOCHA");
			printf("\n                                     -------------------------------------------");
			printf("\n\n                                        1- SADE MOCHA                    70 TL");
			printf("\n\n                                        2- CIKOLATALI MOCHA              75 TL");
			printf("\n\n\n\n                                     Lutfen seciminizi yapiniz: ");
			scanf("%d", &alt_menu);

			switch (alt_menu) {
			case 1:
				system("cls");
				system("color E0");
				printf("\n\n\n\n\n\n                                           Kac adet SADE MOCHA istiyorsunuz?");
				printf("\n                                                   Adet giriniz: ");
				scanf("%d", &siparis_adeti);

				siparis_tutari = 70 * siparis_adeti;
				printf("\n\n\n\n                                           Toplam odemeniz gereken tutar: %d", siparis_tutari);
				printf("\n                                           Yatiracaginiz ucreti giriniz: ");
				scanf("%d", &odenen_tutar);

				if (odenen_tutar >= siparis_tutari) {
					system("cls");
					system("color E0");
					printf("\n\n\n\n\n\n                                 %d adet SADE MOCHA icin %d TL odemeniz alinmistir.", siparis_adeti, siparis_tutari);

					if (odenen_tutar > siparis_tutari) {
						geri_odeme = odenen_tutar - siparis_tutari;
						printf("\n                                         Geri odeme: %d", geri_odeme);
					}
					printf("\n\n                                       AFIYET OLSUN. YINE BEKLERIZ.");
					tus = _getch();
				}

				if (odenen_tutar < siparis_tutari) {
					system("cls");
					system("color E0");
					printf("\n\n\n\n\n                       ODEME MIKTARI YETERSIZ! Lutfen odediginiz miktara ilave ucret ytiriniz: ");
					printf("\n                                  Toplam odmeniz gereken tutar: %d", siparis_tutari);

					while (odenen_tutar < siparis_tutari) {
						kalan_tutar = siparis_tutari - odenen_tutar;
						printf("\n                                  Su ana kadar odediginiz tutar: %d", odenen_tutar);
						printf("\n                                  Ek ucret giriniz: ");
						scanf("%d", &ek_odeme);

						odenen_tutar += ek_odeme;

						if (odenen_tutar >= siparis_tutari) {
							if (odenen_tutar > siparis_tutari) {
								geri_odeme = odenen_tutar - siparis_tutari;
								printf("\n                                  Geri odeme: %d", geri_odeme);
							}
							printf("\n\n                                AFIYET OLSUN. YINE BEKLERIZ.");
							tus = _getch();
							break;
						}
					}
				}
				return 0;
				break;

			case 2:
				system("cls");
				system("color E0");
				printf("\n\n\n\n\n\n                                        Kac adet CIKOLATALI MOCHA istiyorsunuz?");
				printf("\n                                                Adet giriniz: ");
				scanf("%d", &siparis_adeti);

				siparis_tutari = 75 * siparis_adeti;
				printf("\n\n\n\n                                           Toplam odemeniz gereken tutar: %d", siparis_tutari);
				printf("\n                                           Yatiracaginiz ucreti giriniz: ");
				scanf("%d", &odenen_tutar);

				if (odenen_tutar >= siparis_tutari) {
					system("cls");
					system("color E0");
					printf("\n\n\n\n\n\n                                 %d adet CIKOLATALI MOCHA icin %d TL odemeniz alinmistir.", siparis_adeti, siparis_tutari);

					if (odenen_tutar > siparis_tutari) {
						geri_odeme = odenen_tutar - siparis_tutari;
						printf("\n                                         Geri odeme: %d", geri_odeme);
					}
					printf("\n\n                                       AFIYET OLSUN. YINE BEKLERIZ.");
					tus = _getch();
				}

				if (odenen_tutar < siparis_tutari) {
					system("cls");
					system("color E0");
					printf("\n\n\n\n\n                       ODEME MIKYARI YETERSIZ! Lutfen odediginiz miktara ilave ucret yatiriniz.");
					printf("\n                                  Toplam odemeniz gereken tutar: %d", siparis_tutari);

					while (odenen_tutar < siparis_tutari) {
						kalan_tutar = siparis_tutari - odenen_tutar;
						printf("\n                                    Su ana kadar odediginiz tutar: %d", odenen_tutar);
						printf("\n                                    Ek ucret giriniz: ");
						scanf("%d", &ek_odeme);

						odenen_tutar += ek_odeme;

						if (odenen_tutar >= siparis_tutari) {
							if (odenen_tutar > siparis_tutari) {
								geri_odeme = odenen_tutar - siparis_tutari;
								printf("\n                                    Geri odeme: %d", geri_odeme);
							}
							printf("\n\n                                  AFIYET OLSUN. YINE BEKLERIZ.");
							tus = _getch();
							break;
						}
					}

				}return 0;

			}break;


		case 4:
			system("cls");
			system("color E0");
			printf("\n\n\n\n\n\n                                       Kac adet AMERICANO istiyorsunuz?");
			printf("\n                                            Adet giriniz: ");
			scanf("%d", &siparis_adeti);

			siparis_tutari = 47 * siparis_adeti;
			printf("\n\n\n\n                                       Toplam odemeniz gereken tutar: %d", siparis_tutari);
			printf("\n                                       Yatiracaginiz ucreti giriniz: ");
			scanf("%d", &odenen_tutar);

			if (odenen_tutar >= siparis_tutari) {
				system("cls");
				system("color E0");
				printf("\n\n\n\n\n\n                                       %d adet AMERICANO icin %d TL odemeniz alinmisitr.", siparis_adeti, siparis_tutari);

				if (odenen_tutar > siparis_tutari) {
					geri_odeme = odenen_tutar - siparis_tutari;
					printf("\n                                               Geri odeme: %d", geri_odeme);
				}
				printf("\n\n                                             AFIYET OLSUN. YINE BEKLERIZ");
				tus = _getch();
			}

			if (odenen_tutar < siparis_tutari) {
				system("cls");
				system("color E0");
				printf("\n\n\n\n\n                           ODEME MIKTARI YETERSIZ! Lutfen odediginiz miktara ilave ucret yatiriniz.");
				printf("\n                                      Toplam odmeniz gereken tutar: %d", siparis_tutari);

				while (odenen_tutar < siparis_tutari) {
					kalan_tutar = siparis_tutari - odenen_tutar;
					printf("\n                                      Su ana kadar odediginiz tutar: %d", odenen_tutar);
					printf("\n                                      Ek ucret giriniz: ");
					scanf("%d", &ek_odeme);

					odenen_tutar += ek_odeme;

					if (odenen_tutar >= siparis_tutari) {
						if (odenen_tutar > siparis_tutari) {
							geri_odeme = odenen_tutar - siparis_tutari;
							printf("\n                                      Geri odeme: %d", geri_odeme);
						}
						printf("\n\n                                    AFIYET OLSUN. YINE BEKLERIZ.");
						tus = _getch();
						break;
					}
				}
			}
			return 0;
			break;


		case 5:
			system("cls");
			system("color E0");
			printf("\n\n\n\n\n\n                                       Kac adet CAPPUCINO istiyorsunuz?");
			printf("\n                                            Adet giriniz: ");
			scanf("%d", &siparis_adeti);

			siparis_tutari = 52 * siparis_adeti;
			printf("\n\n\n\n                                       Toplam odemeniz gereken tutar: %d", siparis_tutari);
			printf("\n                                       Yatiracaginiz ucreti giriniz: ");
			scanf("%d", &odenen_tutar);

			if (odenen_tutar >= siparis_tutari) {
				system("cls");
				system("color E0");
				printf("\n\n\n\n\n\n                                 %d adet CAPPUCINO icin %d TL odemeniz alinmistir.", siparis_adeti, siparis_tutari);

				if (odenen_tutar > siparis_tutari) {
					geri_odeme = odenen_tutar - siparis_tutari;
					printf("\n                                         Geri odeme: %d", geri_odeme);
				}
				printf("\n\n                                       AFIYET OLSUN. YINE BEKLERIZ.");
				tus = -_getch();
			}

			if (odenen_tutar < siparis_tutari) {
				system("cls");
				system("color E0");
				printf("\n\n\n\n\n                           ODEME MIKTARI YETERSIZ! Lutfen odediginiz miktara ilave ucret yatiriniz.");
				printf("\n                                      Toplam odemeniz gereken tutar: %d", siparis_tutari);

				while (odenen_tutar < siparis_tutari) {
					kalan_tutar = siparis_tutari - odenen_tutar;
					printf("\n                                      Su ana kadar odediginiz tutar: %d", odenen_tutar);
					printf("\n                                      Ek ucret giriniz: ");
					scanf("%d", &ek_odeme);

					odenen_tutar += ek_odeme;

					if (odenen_tutar >= siparis_tutari) {
						if (odenen_tutar > siparis_tutari) {
							geri_odeme = odenen_tutar - siparis_tutari;
							printf("\n                                      Geri odeme: %d", geri_odeme);
						}
						printf("\n\n                                    AFIYET OLSUN. YINE BEKLERIZ.");
						tus = _getch();
						break;
					}
				}
			}
			return 0;
			break;


		case 6:
			system("cls");
			system("color E0");
			printf("\n\n\n\n\n\n                                       Kac adet CAFFE LATTE istiyorsunuz?");
			printf("\n                                                Adet giriniz: ");
			scanf("%d", &siparis_adeti);

			siparis_tutari = 54 * siparis_adeti;
			printf("\n\n\n\n                                       Toplam odemeniz gereken tutar: %d", siparis_tutari);
			printf("\n                                       Yatiracaginiz tutar: ");
			scanf("%d", &odenen_tutar);

			if (odenen_tutar >= siparis_tutari) {
				system("cls");
				system("color E0");
				printf("\n\n\n\n\n\n                                  %d adet CAFFE LATTE icin %d TL odemeniz alinmistir.", siparis_adeti, siparis_tutari);

				if (odenen_tutar > siparis_tutari) {
					geri_odeme = odenen_tutar - siparis_tutari;
					printf("\n                                      Geri odeme: %d", geri_odeme);
				}
				printf("\n\n                                    AFIYET OLSUN. YINE BEKLERIZ.");
				tus = _getch();
			}

			if (odenen_tutar < siparis_tutari) {
				system("cls");
				system("color E0");
				printf("\n\n\n\n\n                      ODEME MIKYARI YETERSIZ! Lutfen odediginiz miktara ilave ucret yatiriniz.");
				printf("\n                                 Toplam odemeniz gereken tutar: %d", siparis_tutari);

				while (odenen_tutar < siparis_tutari) {
					kalan_tutar = siparis_tutari - odenen_tutar;
					printf("\n                                 Su ana kadar odediginiz tutar: %d", odenen_tutar);
					printf("\n                                 Ek ucret giriniz: ");
					scanf("%d", &ek_odeme);

					odenen_tutar += ek_odeme;

					if (odenen_tutar >= siparis_tutari) {
						if (odenen_tutar > siparis_tutari) {
							geri_odeme = odenen_tutar - siparis_tutari;
							printf("\n                                 Geri odeme: %d", geri_odeme);
						}
						printf("\n\n                               AFIYET OLSUN. YINE BEKLERIZ.");
						tus = _getch();
						break;
					}
				}
			}
			return 0;
			break;


		case 7:
			system("cls");
			system("color E0");
			printf("\n\n\n\n\n                                                  SICAK CIKOLATA");
			printf("\n                                    --------------------------------------------");
			printf("\n\n                                      1- KAHVELI SICAK CIKOLATA          69 TL");
			printf("\n\n                                      2- BEYAZ SICAK CIKOLATA            73 TL");
			printf("\n\n\n                                     Lutfen seciminizi yapiniz: ");
			scanf("%d", &alt_menu);

			switch (alt_menu) {
			case 1:
				system("cls");
				system("color E0");
				printf("\n\n\n\n\n\n                                     Kac adet KAHVELI SICAK CIKOLATA istiyorsunuz?");
				printf("\n                                                  Adet giriniz: ");
				scanf("%d", &siparis_adeti);

				siparis_tutari = 69 * siparis_adeti;
				printf("\n\n\n\n                                     Toplam odemeniz gereken tutar: %d", siparis_tutari);
				printf("\n                                     Yatiracaginiz ucreti giriniz: ");
				scanf("%d", &odenen_tutar);

				if (odenen_tutar >= siparis_tutari) {

					system("cls");
					system("color E0");
					printf("\n\n\n\n\n\n                                 %d adet KAHVELI SICAK CIKOLATA icin %d odemeniz alinmistir.", siparis_adeti, siparis_tutari);

					if (odenen_tutar > siparis_tutari) {
						geri_odeme = odenen_tutar - siparis_tutari;
						printf("\n                                         Geri odeme: %d", geri_odeme);
					}
					printf("\n\n                                       AFIYET OLSUN. YINE BEKLERIZ");
					tus = _getch();
				}

				if (odenen_tutar < siparis_tutari) {
					system("cls");
					system("color E0");
					printf("\n\n\n\n\n                       ODEME MIKTARI YETERSIZ! Lutfen odediginiz miktara ilave ucret yatiriniz.");
					printf("\n                                  Toplam odemeniz gereken tutar: %d", siparis_tutari);

					while (odenen_tutar < siparis_tutari) {
						kalan_tutar = siparis_tutari - odenen_tutar;
						printf("\n                                  Su ana kadar odediginiz tutar: %d", odenen_tutar);
						printf("\n                                  Ek ucret giriniz: ");
						scanf("%d", &ek_odeme);

						odenen_tutar += ek_odeme;

						if (odenen_tutar >= siparis_tutari) {
							if (odenen_tutar > siparis_tutari) {
								geri_odeme = odenen_tutar - siparis_tutari;
								printf("\n                                  Geri odeme: %d", geri_odeme);
							}
							printf("\n\n                                AFIYET OLSUN. YINE BEKLERIZ");
							tus = _getch();
							break;
						}
					}
				}
				return 0;
				break;

			case 2:
				system("cls");
				system("color E0");
				printf("\n\n\n\n\n\n                                     Kac adet BEYAZ SICAK CIKOLATA istiyorsunuz?");
				printf("\n                                                  Adet giriniz: ");
				scanf("%d", &siparis_adeti);

				siparis_tutari = 73 * siparis_adeti;
				printf("\n\n\n\n                                     Toplam odeemeniz gereken tutar: %d", siparis_tutari);
				printf("\n                                     Yatiracaginiz ucreti giriniz: ");
				scanf("%d", &odenen_tutar);

				if (odenen_tutar >= siparis_tutari) {
					system("cls");
					system("color E0");
					printf("\n\n\n\n\n\                                 %d adet BEYAZ SICAK CIKOLATA icin %d TL odemeniz alinmistir.", siparis_adeti, siparis_tutari);

					if (odenen_tutar > siparis_tutari) {
						geri_odeme = odenen_tutar - siparis_tutari;
						printf("\n                                         Geri odeme: %d", geri_odeme);
					}
					printf("\n\n                                       AFIYET OLSUN. YINE BEKLERIZ.");
					tus = _getch();
				}

				if (odenen_tutar < siparis_tutari) {
					system("cls");
					system("color E0");
					printf("\n\n\n\n\n                       ODEME MIKTARI YETERSIZ! Lutfen odediginiz miktara ilave ucter yatiriniz: ");
					printf("\n                                  Toplam odemeniz gereken tutar: %d", siparis_tutari);

					while (odenen_tutar < siparis_tutari) {
						kalan_tutar = odenen_tutar - siparis_tutari;
						printf("\n                                  Su ana kadar odediginiz tutar: %d", odenen_tutar);
						printf("\n                                  Ek ucret giriniz: ");
						scanf("%d", &ek_odeme);

						odenen_tutar += ek_odeme;

						if (odenen_tutar >= siparis_tutari) {
							if (odenen_tutar > siparis_tutari) {
								geri_odeme = odenen_tutar - siparis_tutari;
								printf("\n                                  Geri odme: %d", geri_odeme);
							}
							printf("\n\n                                AFIYET OLSUN. YINE BEKLERIZ.");
							tus = _getch();
							break;
						}
					}
				}return 0;

			}break;

		case 8:
			system("cls");
			system("color E0");
			printf("\n\n\n\n\n                                         SALEP SEKER SECIMI (seker ucretsizdir)  ");
			printf("\n                                   ------------------------------------------------");
			printf("\n\n                                       1- SEKERLI  ");
			printf("\n\n                                       2- SEKERSIZ ");
			printf("\n\n\n                                     Lutfen seciminizi yapiniz: ");
			scanf("%d", &alt_menu);

			switch (alt_menu) {
			case 1:
				system("cls");
				system("color E0");
				printf("\n\n\n\n\n\n                                     Kac adet SEKERLI SALEP istiyorsunuz?");
				printf("\n                                                Adet giriniz: ");
				scanf("%d", &siparis_adeti);

				siparis_tutari = 73 * siparis_adeti;
				printf("\n\n\n\n                                     Toplam odemeniz gereken tutar: %d", siparis_tutari);
				printf("\n                                     Yatiracaginiz ucreti giriniz: ");
				scanf("%d", &odenen_tutar);

				if (odenen_tutar >= siparis_tutari) {
					system("cls");
					system("color E0");
					printf("\n\n\n\n\n\n                                %d adet SEKERLI SALEP icin %d TL odemeniz alinmisitr.", siparis_adeti, siparis_tutari);

					if (odenen_tutar > siparis_tutari) {
						geri_odeme = odenen_tutar - siparis_tutari;
						printf("\n                                       Geri odeme: %d", geri_odeme);
					}
					printf("\n\n                                       AFIYET OLSUN. YINE BEKLERIZ.");
					tus = _getch();
				}

				if (odenen_tutar < siparis_tutari) {
					system("cls");
					system("color E0");
					printf("\n\n\n\n\n                        ODEME MIKTARI YETERSIZ! Lutfen odediginiz miktara ilave ucret yatiriniz.");
					printf("\n                                  Toplam odemeniz gereken tutar: %d", siparis_tutari);

					while (odenen_tutar < siparis_tutari) {
						kalan_tutar = siparis_tutari - odenen_tutar;
						printf("\n                                  Su ana kadar odediginiz tutar: %d", odenen_tutar);
						printf("\n                                  Ek ucret giriniz: ");
						scanf("%d", &ek_odeme);

						odenen_tutar += ek_odeme;

						if (odenen_tutar >= siparis_tutari) {
							if (odenen_tutar > siparis_tutari) {
								geri_odeme = odenen_tutar - siparis_tutari;
								printf("\n                                  Geri odeme: %d", geri_odeme);
							}
							printf("\n\n                                AFIYET OLSUN. YINE BEKLERIZ.");
							tus = _getch();
							break;
						}
					}
				}
				return 0;
				break;

			case 2:
				system("cls");
				system("color E0");
				printf("\n\n\n\n\n\n                                     Kac adet SEKERSIZ SALEP istiyorsunuz?");
				printf("\n                                                Adet giriniz: ");
				scanf("%d", &siparis_adeti);

				siparis_tutari = 73 * siparis_adeti;
				printf("\n\n\n\n                                     Toplam odemeniz gereken tutar: %d", siparis_tutari);
				printf("\n                                     Yatiracaginiz ucreti giriniz: ");
				scanf("%d", &odenen_tutar);

				if (odenen_tutar >= siparis_tutari) {
					system("cls");
					system("color E0");
					printf("\n\n\n\n\n\n                                %d adet SEKERSIZ SALEP icin %d TL odemeniz alinmistir.", siparis_adeti, siparis_tutari);

					if (odenen_tutar > siparis_tutari) {
						geri_odeme = odenen_tutar - siparis_tutari;
						printf("\n                                       Geri odeme: %d", geri_odeme);
					}
					printf("\n\n                                       AFIYET OLSUN. YINE BEKLERIZ.");
					tus = _getch();
				}

				if (odenen_tutar < siparis_tutari) {
					system("cls");
					system("color E0");
					printf("\n\n\n\n\n                        ODEME MIKTARI YETERSIZ! Lutfen odediginiz miktara ilave ucret yatiriniz.");
					printf("\n                                  Toplam odmeniz gerekn tutar: %d", siparis_tutari);

					while (odenen_tutar < siparis_tutari) {
						kalan_tutar = siparis_tutari - odenen_tutar;
						printf("\n                                  Su ana kadar odediginiz tutar: %d", odenen_tutar);
						printf("\n                                  Ek ucret giriniz: ");
						scanf("%d", &ek_odeme);

						odenen_tutar += ek_odeme;

						if (odenen_tutar >= siparis_tutari) {
							if (odenen_tutar > siparis_tutari) {
								geri_odeme = odenen_tutar - siparis_tutari;
								printf("\n                                  Geri odeme: %d", geri_odeme);
							}
							printf("\n\n                                 AFIYET OLSUN. YINE BEKLERIZ.");
							tus = _getch();
							break;
						}
					}

				}return 0;

			}break;

		}



	} while (1);



	return 0;
}