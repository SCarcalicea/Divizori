  Gigel este parionat de matematica. El utilizeaza denumirea nrspecial pentru numarul care are cei mai multi divizori, dintre numerele unui sir dat. Gigel stie ca o secventa este un subsir de numere care apar pe pozitii consecutive intr-un sir. El denumeste secventa speciala o secventa din sir, formata din cel putin doua numere, ce incepe si se incheie cu un numar nrspecial si nu contine alte numere nrspecial in interior.
   Avand la dispozitie un sir de n numere naturale, doreste sa afiseze cea mai lunga secventa speciala si numarul de secvente speciale din sir. Daca sirul de numere dat contine mai multe secvente speciale de aceeasi lungime maxima, se va afisa prima secventa de acest tip din sir.
   Scrieti un program care afiseaza, pentru un sir dat format din n numere naturale numarul de secvente speciale si cea mai lunga secventa speciala.
   Fisierul de intrare "divizori.in" contine pe prima linie numarul n separat printr-un spatiu de un numar natural t, care reprezinta cerinta: 1, daca se cere numarul de secvente speciale, respectiv 2 daca se cere cea mai lunga secventa speciala. Linia a doua din fisier contine cele n numere naturale ale sirului dat.
   Fisierul de iesire "divizori.out" va contine pe prima linie un numar natural ce reprezinta numarul de secvente speciale, pentru sirul de numere dar, daca cerinta este 1. Daca cerinta este 2, fisierul de iesire va contine un sir de numere naturale, separate intre ele prin cate un spatiu ce reprezinta cea mai lunga secventa speciala din sirul dat.
   
   Exemplu 1
   Divizori.in
   7 1
   22 60 64 125 315 24 150
   divizori out 2
   Explicatie: Cerinta 1: sirul de numere dat contine 3 numere nrspecial: 60, 315, 150 (au fiecare 12 divizori) si 2 secvente speciale: 
   60 64 125 315 si 315 24 si 150.
   Daca cerinta ar fi fost 2 atunci cea mai lunga secventa este 60 64 125 315.
