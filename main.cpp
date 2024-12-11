#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
using namespace std;

class Clan{
    private:
        vector<Clan> vektor_clanova;
        string ime;
        string prezime;
        string JMBG;

    public:
        Clan()
        {
            this->ime = "";
            this->prezime = "";
            this->JMBG = "";
        }
        Clan(string i, string p, string JMBG)
        {
            this->ime = i;
            this->prezime = p;
            this->JMBG = JMBG;
        }
        //getteri
        string getIme()
        {
            return ime;
        }
        string getPrezime()
        {
            return prezime;
        }
        string getJMBG()
        {
            return JMBG;
        }
       
        //setteri
        void setIme(string i)
        {
            this->ime = i;
        }
        void setPrezime(string p)
        {
            this->prezime = p;
        }
        void setJMBG(string JMBG)
        {
            this->JMBG = JMBG;
        }

        void unesi_clana()
        {
            int brojac {0};
            bool zavrseno {false};
            cout << "------------------------"<< endl;
            cout << "Unesite ime: ";
            cin >> this->ime;
            cout << "Unesite prezime: ";
            cin >> this->prezime; 
            while (JMBG.length() != 13)
            {
                cout << "Unesite JMBG: ";
                cin >> this->JMBG;
                if (JMBG.length() != 13)
                {
                    cout << "JMBG mora da ima 13 cifara" << endl;
                    cin >> JMBG;
                }   
            }
            cout << "" <<endl;
            cout << "------------------------"<< endl;
        }   

        void change_Clan(string i, string p, string JMBG)
        {
            this->ime = i;
            this->prezime = p;
            this->JMBG = JMBG;
        }
            
        void ispisi_clana()
        {
            cout << "Ime: " << this->ime << endl;
            cout << "Prezime: " << this->prezime << endl;
            cout << "JMBG: " << this->JMBG << endl;
            cout << "------------------------"<< endl;
        }
 };

class Knjiga
{
   private:
       string ime_knjige;
       string autor_knjige;
       string zanr_knjige;
       string bar_code;
   public:
         Knjiga()
         {
              this->ime_knjige = "";
              this->autor_knjige = "";
              this->zanr_knjige = "";
              this->bar_code = "";
         }
       Knjiga(string ime_knjige, string autor_knjige, string zanr_knjige, string bar_code)
       {
           this->ime_knjige = ime_knjige;
           this->autor_knjige = autor_knjige;
           this->zanr_knjige = zanr_knjige;
           this->bar_code = bar_code;
       }
       string getIme_knjige()
       {
           return ime_knjige;
       }
       string getAutor_knjige()
       {
           return autor_knjige;
       }
       string getZanr_knjige()
       {
           return zanr_knjige;
       }
       string getBar_code()
       {
           return bar_code;
       }
       void setIme_knjige(string ime_knjige)
       {
           this->ime_knjige = ime_knjige;
       }
       void setAutor_knjige(string autor_knjige)
       {
           this->autor_knjige = autor_knjige;
       }
       void setZanr_knjige(string zanr_knjige)
       {
           this->zanr_knjige = zanr_knjige;
       }
       void setBar_code(string bar_code)
       {
           this->bar_code = bar_code;
       }

       void unesi_knjigu()
       {
           bool zavrseno {false};       
           cout << "Unesite ime knjige: " << endl;
           cin >> this->ime_knjige; 
           cout << "Unesite autora knjige: " << endl;
           cin >> this->autor_knjige;
           cout << "Unesite zanr knjige: " << endl;
           cout << "1. Drama" << endl;
           cout << "2. Triler" << endl;
           cout << "3. Roman" << endl;
           cout << "4. Pripovetka" << endl;
           cout << "5. Prica" << endl;
           cout << "6. Poezija" << endl;
           cout << "7. Ostalo" << endl;     
              int izbor_knjige{};
                cin >> izbor_knjige;
                switch (izbor_knjige)
                {
                    case 1:
                        zanr_knjige = "Drama";
                        break;
                    case 2: 
                        zanr_knjige = "Triler";
                        break;
                    case 3:
                        zanr_knjige = "Roman";
                        break;
                    case 4:
                        zanr_knjige = "Pripovetka";
                        break;
                    case 5:
                        zanr_knjige = "Prica";
                        break;
                    case 6:
                        zanr_knjige = "Poezija";
                        break;
                    case 7:
                        zanr_knjige = "Ostalo";
                        break;
                }          

           while (!zavrseno)
           {
                cout << "Unesite BAR kod knjige: ";
                cin>>bar_code;
                if (bar_code.length() != 5)
                {
                    cout << "BAR kod mora da ima 5 cifara" << endl;
                    cin >> bar_code;
                }
                else
                {
                    zavrseno = true;
                }
            } 
       }

       void ispisi_knjiga()
       {
           cout << "Ime knjige: " << ime_knjige << endl;
           cout << "Autor knjige: " << autor_knjige << endl;
           cout << "Zanr knjige: " << zanr_knjige << endl;
           cout << "Bar code knjige: " << bar_code << endl;
           cout << "------------------------"<< endl;
       }
};

void Meni()
{
    cout << "1. Unos clana" << endl;
    cout << "2. Unos knjige" << endl;
    cout << "3. Ispis clana" << endl;
    cout << "4. Ispis knjige" << endl;
    cout << "5. Uredi clana" << endl;
    cout << "6. Uredi knjigu" << endl;
    cout << "7. Izbrisi clana" << endl;
    cout << "8. Izbrisi knjigu" << endl;
    cout << "9. Izlaz" << endl;
}

void Meni_clana()
{
    cout << "1. Unos clana" << endl;
    cout << "2. Ispis clana" << endl;
    cout << "3. Uredi clana" << endl;
    cout << "4. Izbrisi clana" << endl;
    cout << "5. Izlaz" << endl;
}

void Meni_knjige()
{
    cout << "1. Unos knjige" << endl;
    cout << "2. Ispis knjige" << endl;
    cout << "3. Uredi knjigu" << endl;
    cout << "4. Izbrisi knjigu" << endl;
    cout << "5. Izlaz" << endl;
}

void Izbornik(vector<Clan>& vektor_clanova,bool* izlaz,  vector<Knjiga>& vektor_knjiga )
{
    cout << "-------------Izbornik-------------\n" << endl;
    cout << "==1== Pristupi clanu" << endl;
    cout << "==2== Pristupi knjizi" << endl;
    cout << "==3== Izlaz" << endl;
    cout << "\n---------------------------------" << endl;
    int izbor{0};
    cin >> izbor;
    switch (izbor)
    {
        case 1:
        {
            cout << "a. Unos clana" << endl;
            cout << "b. Ispis clana" << endl;
            cout << "c. Uredi clana" << endl;
            cout << "d. Izbrisi clana" << endl;
            cout << "e. Nazad" << endl;
            char temp;
            cin >> temp;
            switch (temp)
            {
                    case 'a':
                    {
                        cout << "Unos clana" << endl;
                        Clan clan=Clan();
                        clan.unesi_clana();
                        vektor_clanova.push_back(clan);
                        break;
                        system("clear");
                        cout << "Clan uspjesno unesen" << endl;
                    };
                case 'b':
                {
                    cout << "Ispis clana" << endl;
                    cout << "------------------------" << endl;
                    if (vektor_clanova.size() == 0)
                    {
                        system("clear");
                        cout << "Nema clanova" << endl;
                        cout << "------------------------" << endl;
                        break;
                    }else
                    {
                        for (int i = 0; i < vektor_clanova.size(); i++)
                        {
                            vektor_clanova[i].ispisi_clana();
                            cout << "------------------------" << endl;
                        }
                    break;
                    };
                };
                case 'c':
                {
                    int redni_broj_clana;
                    cout << "Uredi clana" << endl;
                    cout << "------------------------" << endl;
                    if (vektor_clanova.size() == 0)
                    {
                        system("clear");
                        cout << "Nema clanova - povratak na meni" << endl;
                        cout << "------------------------" << endl;
                        break;
                    }else
                    {
                        for (int i = 0; i < vektor_clanova.size(); i++)
                        {
                            cout << "Clan broj " << i + 1 << endl;
                            vektor_clanova[i].ispisi_clana();
                            cout << "------------------------" << endl;
                        };
                        cout << "Unesite redni broj clana koji zelite da izmjenite: ";
                        cin >> redni_broj_clana;
                        if(redni_broj_clana>vektor_clanova.size())
                        {
                            system("clear");
                            cout << "Ne postoji clan sa tim rednim brojem" << endl;
                            break;
                        }else
                        {
                            vektor_clanova[redni_broj_clana - 1].unesi_clana();
                            break;
                        };
                    };
                };
                case 'd':
                {
                    cout << "Izbrisi clana" << endl;
                    if(vektor_clanova.size()==0)
                    {
                        system("clear");
                        cout << "Nema clanova" << endl;
                        break;
                    }else
                    {
                        cout << "Izbrisi clana" << endl;
                        for (int i = 0; i < vektor_clanova.size(); i++)
                        {
                            cout << "Clan broj " << i + 1 << endl;
                            vektor_clanova[i].ispisi_clana();
                        }
                        cout << "Unesite redni broj clana koji zelite da izbrisete: ";
                        int redni_broj_clana_za_brisanje;
                        cin >> redni_broj_clana_za_brisanje;
                        vektor_clanova.erase(vektor_clanova.begin() + redni_broj_clana_za_brisanje - 1);
                        system("clear");
                        cout << "Clan"<< redni_broj_clana_za_brisanje << "izbrisan" <<endl;
                        break;
                    };
                };
                case 'e':
                {
                    system("clear");
                    cout << "Program vracen na pocetni meni." << endl;
                    break;
                };
                default:
                {
                    system("clear");
                    cout << "Pogresan unos" << endl;
                    break;
                };
            };
            break;
        };
        case 2:
        {
            cout << "1. Unos knjige" << endl;
            cout << "2. Ispis knjige" << endl;
            cout << "3. Uredi knjigu" << endl;
            cout << "4. Izbrisi knjigu" << endl;
            cout << "5. Nazad" << endl;
            char temp1;
            cin >> temp1;
            switch (temp1)
            {
                case '1':
                {
                    cout << "Unos knjige" << endl;
                    Knjiga knjiga=Knjiga();
                    knjiga.unesi_knjigu();
                    vektor_knjiga.push_back(knjiga);
                    break;
                };
                case '2':
                {
                    cout << "Ispis knjige" << endl;
                    cout << "------------------------" << endl;
                    if (vektor_knjiga.size() == 0)
                    {
                        cout << "Nema knjiga" << endl;
                        cout << "------------------------" << endl;
                        break;
                    }else
                    {
                        for (int i = 0; i < vektor_knjiga.size(); i++)
                        {
                            vektor_knjiga[i].ispisi_knjiga();
                            cout << "------------------------" << endl;
                        }
                        break;
                    };
                    break;
                };
                case '3':
                {
                    cout << "Uredi knjigu" << endl;
                    for (int i = 0; i < vektor_knjiga.size(); i++)
                    {
                        cout << "Knjiga broj " << i + 1 << endl;
                        vektor_knjiga[i].ispisi_knjiga();
                    };
                    cout << "Unesite redni broj knjige koju zelite da izmjenite: ";
                    int redni_broj_knjige;
                    cin >> redni_broj_knjige;
                    vektor_knjiga[redni_broj_knjige - 1].unesi_knjigu();
                    break;
                };
            };
        };
        case 3:
        {
            cout << "Kraj programa" << endl;
            *izlaz = true;
            break;
        };
        default:
        {
            cout<<"Pogresan unos"<<endl;
            break;
        }
    };
};

int main()
{
    int izbor{0};
    vector<Clan> vektor_clanova;  
    vector<Knjiga> vektor_knjiga; 
    bool izlaz{false};
    do
    {
    Izbornik(vektor_clanova, &izlaz, vektor_knjiga);   
    }while (izlaz != true);
    {
         cout << "Hvala na koristenju najjaceg programa za evidenciju clanova i knjiga" << endl;
    };
    return 0;
}

