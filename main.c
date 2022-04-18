#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    char kelime[30];
    char *duzAdres,*tersAdres;
    printf("Lütfen Palindrom olup olmadigini ogrenmek istediginiz kelimeyi giriniz...\n");
    gets(kelime);
    for(tersAdres = &kelime; *tersAdres != NULL; tersAdres++);
        for(duzAdres = kelime,tersAdres--;tersAdres>=duzAdres;){
            if(*tersAdres == *duzAdres){
                tersAdres--;
                duzAdres++;
            }
            else{
                break;
            }
        }
        if(duzAdres>tersAdres){
            puts(kelime);
            printf("Bu sayi palindromdur...");
        }
        else {

            puts(kelime);
            printf("Bu sayý palindrom deðildir...");
        }







    return 0;
}
