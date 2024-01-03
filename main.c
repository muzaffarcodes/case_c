#include <stdio.h>

int main()
{
    //case1/+
   /* int haftaKuni;
    printf("Hafta kunining sonini kiriting: ");
    scanf("%d", &haftaKuni);
    switch(haftaKuni){
        case 1: printf("Kiritilgan Son -> Dushanba kuniga teng!\n");break;
        case 2: printf("Kiritilgan Son -> Seshanba kuniga teng!\n");break;
        case 3: printf("Kiritilgan Son -> Chorshanba kuniga teng!\n");break;
        case 4: printf("Kiritilgan Son -> Payshanba kuniga teng!\n");break;
        case 5: printf("Kiritilgan Son -> Juma kuniga teng!\n");break;
        case 6: printf("Kiritilgan Son -> Shanba kuniga teng!\n");break;
        case 7: printf("Kiritilgan Son -> Yakshanba kuniga teng!\n");break;
    default: printf("Faqat 1 - 7gacha son kiriting!");
    }

    //case2/+
    int K;
    printf("Bahoni kiriting: ");
    scanf("%d", &K);
    switch(K){
        case 1: printf("Yomon!");break;
        case 2: printf("Qoniqarsiz!");break;
        case 3: printf("Qoniqarli!");break;
        case 4: printf("Yaxshi!");break;
        case 5: printf("A'lo!");break;
    default: printf("Xato!");
    }

    //case3/+
    int oyRaqami;
    printf("Oy raqamini kiriting: ");
    scanf("%d", &oyRaqami);
    switch(oyRaqami){
        case 1: printf("1 - oy. Qish!");break;
        case 2: printf("2 - oy. Qish!");break;
        case 3: printf("3 - oy. Bahor!");break;
        case 4: printf("4 - oy. Bahor!");break;
        case 5: printf("5 - oy. Bahor!");break;
        case 6: printf("6 - oy. Yoz!");break;
        case 7: printf("7 - oy. Yoz!");break;
        case 8: printf("8 - oy. Yoz!");break;
        case 9: printf("9 - oy. Kuz!");break;
        case 10: printf("10 - oy. Kuz!");break;
        case 11: printf("11 - oy. Kuz!");break;
        case 12: printf("12 - oy. Qish!");break;
    default: printf("Xato!");
}

    //case4/+
    int oyTartibRaqami;
        printf("Oyning Tartib Raqamini kiriting: ");
        scanf("%d", &oyTartibRaqami);
        switch(oyTartibRaqami){
            case 1: printf("Siz  %d ni tanladingiz. Bu oy - Yanvar oyi.\nYanvar oyi - 31 kundan iborat!\n", oyTartibRaqami);break;
            case 2: printf("Siz  %d ni tanladingiz. Bu oy - Fevral oyi.\nFevral oyi - 28(29) kundan iborat!\n", oyTartibRaqami);break;
            case 3: printf("Siz  %d ni tanladingiz. Bu oy - Mart oyi.\nMart oyi - 31 kundan iborat!\n", oyTartibRaqami);break;
            case 4: printf("Siz  %d ni tanladingiz. Bu oy - April oyi.\nApril oyi - 30 kundan iborat!\n", oyTartibRaqami);break;
            case 5: printf("Siz  %d ni tanladingiz. Bu oy - May oyi.\nMay oyi - 31 kundan iborat!\n", oyTartibRaqami);break;
            case 6: printf("Siz  %d ni tanladingiz. Bu oy - Iyun oyi.\nIyun  oyi - 30 kundan iborat!\n", oyTartibRaqami);break;
            case 7: printf("Siz  %d ni tanladingiz. Bu oy - Iyul oyi.\nIyul oyi - 31 kundan iborat!\n", oyTartibRaqami);break;
            case 8: printf("Siz  %d ni tanladingiz. Bu oy - Avgust oyi.\nAvgust oyi - 31 kundan iborat!\n", oyTartibRaqami);break;
            case 9: printf("Siz  %d ni tanladingiz. Bu oy - Sentabr oyi.\nSentabr oyi- 30 kundan iborat!\n", oyTartibRaqami);break;
            case 10: printf("Siz  %d ni tanladingiz. Bu oy - Oktabr oyi.\nOktabr oyi - 31 kundan iborat!\n", oyTartibRaqami);break;
            case 11: printf("Siz  %d ni tanladingiz. Bu oy - Noyabr oyi.\nNoyabr oyi - 30 kundan iborat!\n", oyTartibRaqami);break;
            case 12: printf("Siz  %d ni tanladingiz. Bu oy - Dekabr oyi.\nDekabr oyi - 31 kundan iborat!\n", oyTartibRaqami);break;
    default: printf("Siz faqat 1 - 12gacha oy tartib raqamini kiritishingiz mumkin!");

    //case5/+
    int A, B;
    char amal;
    printf("Amalni kiriting: ");
    scanf(" %c", &amal);
    printf("A va Bni kiriting: ");
    scanf("%d%d", &A, &B);
    switch(amal){
        case '+': printf("Qo'shish: %d", A+B);break;
        case '-': printf("Ayirganda: %d", A-B);break;
        case '*': printf("Ko'paytirganda: %d", A*B);break;
        case '/': printf("Bo'lganda: %d", A/B);break;
    default: printf("Arifmetik amallar kiriting!");
    }

    //case6/+
    int tanlov;
     printf("1Desimetr\n2Kilometr\n3Metr\n4Milimetr\n5Santimer: \n");
     scanf("%d",&tanlov);
     float a;
     printf("Son kiriting men bu metrga aylantirib beraman: ");
     scanf("%f",&a);

              switch(tanlov){
                    case 1: printf("Desimetr %.2f metr bor\n",a / 10);
                      break;
                    case 2: printf("Kilometr %.2f metr bor\n",a * 1000 );
                      break;
                    case 3: printf("Metr %.2f metr bor\n",a * 1);
                      break;
                    case 4: printf("Milimetr %.2f metr bor\n",a / 1000);
                      break;
                    case 5: printf("Santimetr %.2f metr bor\n",a / 100);
                      break;
                default: printf("Faqat birdan beshgacha son kiriting");
    }

    //case7/+
    int tanlov;
    printf("1: Kilogram\n2: Milligram\n3: Gram\n4: Tonna\n5: Sentner: \n");
    scanf("%d",&tanlov);
    float a;
    printf("Son kiriting men bu metrga aylantirib beraman: ");
    scanf("%f",&a);
        switch(tanlov){
                case 1: printf("Kilogram%.2f kg bor\n",a * 1);break;
                case 2: printf("Milligram%.2f kg bor\n",a / 10000 );break;
                case 3: printf("Gramm %.2f kg bor\n",a / 1000);break;
                case 4: printf("Tonna %.2f kg bor\n",a * 1000);break;
                case 5: printf("Sentner %.2f kg bor\n",a * 10000);break;
                default: printf("Faqat birdan beshgacha son kiriting");
    }

    //case10/+
    char amalcha;
    printf("Amalni kiriting: ");
    scanf(" %c", &amalcha);
    switch(amalcha){
        case 's': printf("Shimol");break;
        case 'g': printf("G'arb");break;
        case 'j': printf("Janub");break;
        case 'q': printf("Sharq");break;
        case '0': printf("Harakatni davom ettir");break;
        case '1': printf("Chapga buril");break;
        case '2': printf("O'ngga buril");break;
        case 'Y': printf("Robot yo'nalishi");break;
        case 'K': printf("Kamanda berildi!");break;
    default: printf("To'g'ri amal kiriting: ");
    }

        //case11/+printf(
        //case12/+
        float pi = 3.14,H,Radius, Diametr, Uzunligi, Yuzasi,a;
        int R;
        printf("1: Radius\n2: Diametr\n3: Uzunligi\n4: Yuzasi\n");
        scanf("%d", &R);
        if (R==2){
            printf("Radiusni kiriting: ");
        scanf("%f",&a);
        }else {
            printf("Diametrni kiriting: ");
        scanf("%f",&H);
        }

        switch(R){
            case 1: printf("Javob: %.2f",H / 2);break;
            case 2: printf("Javob: %.2f",Diametr = 2 * a );break;
            case 3: printf("Javob: %.2f",Uzunligi = 2 * pi * Radius);break;
            case 4: printf("Javob: %.2f",Yuzasi = pi * Radius * Radius);break;
        }

        //case15/+
    int tanlov;
   printf("1: gisht\n2: olma\n3: chillak\n4: qarga: ");
   scanf("%d",&tanlov);

   int nomer;
   printf("6 dan 14 gacha raqam kiriting: ");
   scanf("%d",&nomer);
        switch(nomer){
            case 6: printf(" olti ");
                break;
            case 7: printf(" yetti ");
                break;
            case 8: printf(" sakkiz ");
                break;
            case 9: printf(" toqqiz ");
                break;
            case 10: printf(" on ");
                break;
            case 11: printf(" valet ");
                break;
            case 12: printf(" dama ");
                break;
            case 13: printf(" qirol ");
                break;
            case 14: printf(" tuz ");
                break;
    default: printf("faqat 6 dan 14 gacha son kiriting");
 }
    switch(tanlov){
        case 1: printf("gish\n");
                break;
        case 2: printf("olma\n");
                break;
        case 3: printf("chillak\n");
                break;
        case 4: printf("qarga\n");
                break;
    default: printf("faqat 1 dan 4 gacha son kiriting");

}
        //case16/+
        int yosh;
        printf("Yoshni kiriting: ");
        scanf("%d", &yosh);
        switch(yosh){
            case 15: printf(" %d = O'n besh", yosh);break;
            case 16: printf("%d = O'n olti", yosh);break;
            case 17: printf("%d = O'n yetti", yosh);break;
            case 18: printf("%d = O'n sakkiz", yosh);break;
            case 19: printf("%d = O'n to'qqiz", yosh);break;
            case 20: printf("%d = Yigirma", yosh);break;
            case 21: printf("%d = Yigirma bir", yosh);break;
            case 22: printf("%d = Yigirma ikki", yosh);break;
            case 23: printf("%d = Yigirma uch", yosh);break;
            case 24: printf("%d = Yigirma tort", yosh);break;
            case 25: printf("%d = Yigirma besh", yosh);break;
            }
*/
        //case17/+//case18/+ bir xil case16 bn
        return 0;

}
